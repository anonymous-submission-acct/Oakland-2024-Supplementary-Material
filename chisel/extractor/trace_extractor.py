from typing import Literal, Any
from pathlib import Path
import hashlib

from subprocess import run as subprocess_run, PIPE, CalledProcessError, TimeoutExpired
from dataclasses import dataclass, replace, field
from itertools import takewhile

import os
import json
import tempfile
import logging
import pickle

from input_spec import InputSpec

from trace import Trace, TraceSource, TraceSourceKind, SlimTraceItem
from extractor.utils import compile_c_program
from extractor.source_analyzer import *
from utils import statement_is_break

from config import MAX_GDB_SINGLE_RUN_TIME

GDB_TRACE_SCRIPT_FILE = Path(__file__).parent / "gdb_trace_script.py"
STDOUT_VAR = "__stdout__"


@dataclass(frozen=True, slots=True)
class GDBOutput:
    trace: list[tuple[str, str, dict[str, str]]] = field(default_factory=list)
    return_value: str = field(default="")
    time: float = field(default=0.0)
    ret_type: str = field(default="")
    args_type: list[str] = field(default_factory=list)


def _generate_trace(
    executable: str,
    func: str,
    input_spec: Optional[InputSpec],
    args_type: Literal["func_args", "cli_args", "analyze"],
) -> GDBOutput | None:
    output_path = tempfile.mkstemp()[1]
    config = {
        "output_path": output_path,
        "executable": executable,
        "function": func,
        "args": input_spec.args if input_spec else (),
        "array_size_map": input_spec.array_size_map if input_spec else {},
        "args_type": args_type,
    }

    config_input = f"py config_json={repr(json.dumps(config))}"

    try:
        output = subprocess_run(
            ["gdb", "-batch", "-ex", config_input, "-x", GDB_TRACE_SCRIPT_FILE],
            check=True,
            stdout=PIPE,
            stderr=PIPE,
            encoding="utf-8",
            timeout=MAX_GDB_SINGLE_RUN_TIME,
        )
        with open(output_path, "r", encoding="utf-8") as result_file:
            return GDBOutput(**json.load(result_file))
    except CalledProcessError as ex:
        logging.error(f"GDB failed with error: {ex.stderr}\n{ex.output}")
        return None
    except TimeoutExpired:
        logging.error(f"GDB timed out after {MAX_GDB_SINGLE_RUN_TIME} seconds")
        return GDBOutput()
    except json.JSONDecodeError:
        logging.error(f"GDB output is not valid JSON")
        logging.error(output.stdout)
        logging.error(output.stderr)
        return None
    finally:
        os.remove(output_path)


def extract_param_types(src_path: str, func_name: str):
    with compile_c_program(src_path) as exec_file:
        return _generate_trace(exec_file, func_name, None, "analyze").args_type


def process_state(state: dict, config: SourceParseConfig) -> dict:
    new_items = {}
    for key, val in list(state.items()):
        if config.flatten_arg_structs and re.match(config.arg_struct_regex, key):
            new_items.update(val)
            del state[key]

    return {**state, **new_items}


def parse_trace(
    source_file_info: SourceFileInfo,
    gdb_out: GDBOutput,
    args_value: tuple[str, ...],
    config: SourceParseConfig,
    func_name: str,
) -> Trace:
    source_lines_info = source_file_info.sources

    states: list[dict[str, str]] = []
    sources: list[TraceSource] = []

    await_guard_state = None
    last_multiline_line = None

    rename_var_state = {}

    # we assume the raw trace is ordered!
    for _, (func, line_num_str, gdb_val) in enumerate(gdb_out.trace):
        line_num = int(line_num_str)
        line_info = source_lines_info.get(line_num, None)

        if func != func_name and line_info and line_info.src == "return;":
            # Skip return from nested (flattening!) function
            continue

        if line_info and SourceLineType.LABEL in line_info.type:
            # Skip labels
            continue

        if line_info is None and func_name != func:
            # Skip flatten calls
            continue

        if line_info is None and line_num in source_file_info.funcs:
            # Skip function declaration
            continue

        if line_info is None and _ == len(gdb_out.trace) - 1:
            # collect state from the last line
            # placeholder for the return value
            line_info = SourceLineInfo("<ret>", SourceLineType.STMT, line_num)

        if line_info is None:
            logging.warning(f"Check if line {line_num} is spanned over multiple lines")
            line_info = source_lines_info.get(line_num - 1, None)
            if line_info is None:
                raise RuntimeError(f"Failed to find line {line_num} in source")
            source_lines_info[line_num] = line_info

        assert line_info is not None, f"line {line_num} not found in source"

        # sometimes GDB single-step breaks at the same (multi-line) statement/guard multiple times
        # we only want to show it once
        if line_info.line != line_num:
            last_multiline_line = line_info
            continue
        else:
            if (
                line_info is last_multiline_line
                and line_info.line == sources[-1].line_number
            ):
                continue

        match await_guard_state:
            case "if":
                if SourceLineType.IF_TRUE in line_info.type and sources[-1].src in line_info.guard_val_types:
                    sources[-1] = replace(sources[-1], val=True)
                else:
                    # weird GDB behavior permits this
                    sources[-1] = replace(sources[-1], val=False)  # If
            case "ite":
                if SourceLineType.IF_TRUE in line_info.type and sources[-1].src in line_info.guard_val_types:
                    sources[-1] = replace(sources[-1], val=True)
                elif SourceLineType.IF_FALSE in line_info.type and sources[-1].src in line_info.guard_val_types:
                    sources[-1] = replace(sources[-1], val=False)
                else:
                    logging.warning(
                        "Invalid if-then-else statement: {}".format(line_info)
                    )
                    sources[-1] = replace(sources[-1], val=False)
            case "while":
                if SourceLineType.WHILE_TRUE in line_info.type:
                    if sources[-1].src in line_info.guard_val_types:
                        sources[-1] = replace(sources[-1], val=True)
                    else:
                        logging.warning(f"Failed to deduce while guard truth value of {sources[-1]} from {line_info}")
                        sources[-1] = replace(sources[-1], val=False)
                else:
                    sources[-1] = replace(sources[-1], val=False)
            case "switch":
                cond_expr = sources[-1].src
                if SourceLineType.SWITCH_DEFAULT in line_info.type:
                    assert (
                        cond_expr in source_file_info.switch_case_guards
                        and source_file_info.switch_case_guards[cond_expr]
                    )
                    false_cases = source_file_info.switch_case_guards[cond_expr]

                    switch_src_line = sources.pop(-1)
                    for c in false_cases:
                        sources.append(replace(switch_src_line, src=c, val=False))
                        states.append(states[-1])
                    states.pop(-1)

                if SourceLineType.SWITCH_CASE in line_info.type:
                    guard_code = line_info.additional_guard
                    sources[-1] = replace(sources[-1], src=guard_code, val=True)

                    if not (
                        cond_expr in source_file_info.switch_case_guards
                        and guard_code in source_file_info.switch_case_guards[cond_expr]
                    ):
                        logging.warning(f"Switch case {cond_expr} not found in source")
                    else:
                        false_cases = list(
                            takewhile(
                                lambda x: x != guard_code,
                                source_file_info.switch_case_guards[cond_expr],
                            )
                        )
                        for c in false_cases:
                            sources.insert(-1, replace(sources[-1], src=c, val=False))
                            states.append(states[-1])

        assert await_guard_state is None or sources[-1].val is not None
        await_guard_state = None

        if statement_is_break(line_info.src):
            # Skip break statements
            continue

        source = line_info.to_trace_source()
        source = replace(source, line_number=line_num)

        sources.append(source)

        if source.kind == TraceSourceKind.GUARD:
            if SourceLineType.GUARD_IF in line_info.type:
                await_guard_state = "if"
            elif SourceLineType.GUARD_ITE in line_info.type:
                await_guard_state = "ite"
            elif SourceLineType.GUARD_WHILE in line_info.type:
                await_guard_state = "while"
            elif SourceLineType.GUARD_SWITCH in line_info.type:
                await_guard_state = "switch"
            else:
                raise Exception("Unknown guard type: {}".format(line_info))

        state = process_state(gdb_val, config)
        state = {
            **state,
            **{
                post: state[pre]
                for post, pre in rename_var_state.items()
                if (pre in state and post in state)
            },
        }
        if line_num in source_file_info.replaced_vars:
            rename_var_state.update(source_file_info.replaced_vars[line_num])

        # Hack: GDB sometimes incorrectly report the value of stdout
        # even printf is not yet executed
        if (
            states
            and state[STDOUT_VAR] != states[-1][STDOUT_VAR]
            and "printf" in source.src
        ):
            state[STDOUT_VAR] = states[-1][STDOUT_VAR]

        states.append(state)
        assert len(sources) == len(
            states
        ), f"len(sources)={len(sources)}, len(states)={len(states)}"

    if not config.record_line_numbers:
        sources = [replace(s, line_number=None) for s in sources]

    if len(states) > 1:
        return Trace(
            [SlimTraceItem(*p) for p in zip(sources, states[:-1], states[1:])],
            args_value,
            str(gdb_out.return_value),
        )
    else:
        return Trace(
            [SlimTraceItem(sources[0], states[0], states[0])],
            args_value,
            str(gdb_out.return_value),
        )


TRACE_CACHE_PATH = Path(".trace_cache")


def generate_traces(
    src_path: str,
    inputs: list[InputSpec],
    source_file_info: SourceFileInfo,
    config: SourceParseConfig,
    func_name: str,
) -> tuple[list[Trace], dict[str, str]]:
    MAX_RETRIES = 3

    src_path_obj = Path(src_path).resolve()
    trace_cache_path = (
        TRACE_CACHE_PATH
        / hashlib.sha256(str(src_path_obj.parent).encode("utf-8")).hexdigest()
    )
    trace_cache_path.mkdir(parents=True, exist_ok=True)

    gdb_run = True

    cache_file_path = trace_cache_path / f"{src_path_obj.name}.gdb_trace"
    if cache_file_path.exists():
        saved_inputs, saved_src_path, gdb_results = pickle.load(open(cache_file_path, "rb"))
        if inputs == saved_inputs and saved_src_path == str(src_path_obj):
            logging.info(f"Using cached traces: {cache_file_path}")
            gdb_run = False
    if gdb_run:
        with compile_c_program(src_path) as exec_file:
            gdb_results = []
            for input_ in inputs:
                for _ in range(MAX_RETRIES):
                    gdb_out = _generate_trace(exec_file, func_name, input_, "func_args")
                    if gdb_out is not None:
                        # timeout => empty trace. we just skip it
                        if gdb_out.trace:
                            gdb_results.append(gdb_out)
                        break
                    logging.warning(f"Retry generating trace for input: {input_} ...")
                else:
                    raise RuntimeError(f"Failed to generate trace for input: {input_}")
        pickle.dump((inputs, str(src_path_obj), gdb_results), open(cache_file_path, "wb"))

    results = [
        parse_trace(
            source_file_info,
            gdb_out,
            input_.args,
            config,
            func_name,
        )
        for input_, gdb_out in zip(inputs, gdb_results)
    ]

    negation_map: dict[str, str] = {}
    guards = [s for t in results for s in t.sources if s.kind == TraceSourceKind.GUARD]
    for g in guards:
        negated = g.try_negate()
        if negated is None:
            continue
        if config.negate_inconsistent_guards and any(
            negated.src == s.src for s in guards
        ):
            negation_map[g.src] = negated.src
        if config.negate_matched_guards:
            negation_map[g.src] = negated.src

    for t in results:
        items = tuple(
            item
            if item.source.kind != TraceSourceKind.GUARD
            or item.source.src not in negation_map
            else replace(
                item,
                source=replace(
                    item.source,
                    src=negation_map[item.source.src],
                    val=not item.source.val,
                ),
            )
            for item in t.items
        )
        sources = [item.source for item in items]
        t.sources = sources
        t.items = items

    return results, negation_map
