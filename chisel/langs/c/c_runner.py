import os
import subprocess
import tempfile
import time
from typing import *

from extractor.utils import compile_c_program
from paths import TMP_PATH
from program import Node, Program, UnknownNode, ValueNode, GuardCompositionType, DummyNode
from runners import (
    Runner,
    TraceIdxNotFoundException,
    UnknownEncounterException,
    TraceEndException,
)
from utils import statement_is_break, statement_is_return
from trace import Trace, TraceSourceKind
from dataclasses import dataclass, replace

@dataclass(frozen=True, eq=False, order=False)
class TraceRunnerState:
    state: dict[str, Any]
    trace_index: int = -1
    guard_result: bool | None = None
    loop_break: bool | None = None
    pruned_variables: set[str] | None = None


class CRunner(Runner):
    """Class for running c programs."""

    idx = 0

    def __init__(self):
        self.cache = {}
        self.decl_vars = None
        self.used_vars = None
        self.left_vars = None

    def run(self, prog: str, ins: List[Any]) -> bool:
        """Runs program and returns true if prog runs and false if it has assertion error.

        Arguments:
        prog (str) -- program to run
        ins ([Any]) -- input values

        Returns:
        check (bool) -- whether or not it completed
        """
        cache_key = "{}{}".format(prog, ins)
        if cache_key in self.cache:
            return self.cache[cache_key]

        for i in ["_ZERO_", "DEOBF_FUNC", "CHECK_RET", "main", "trace_check"]:
            prog = prog.replace(i, "{}{}".format(i, CRunner.idx))
        try:
            cppyy.cppdef(prog)
        except Exception as e:
            raise e
        x = getattr(cppyy.gbl, "DEOBF_FUNC{}".format(CRunner.idx))
        CRunner.idx += 1
        try:
            x(ins[0])
        except:
            self.cache[cache_key] = False
            return False

        self.cache[cache_key] = True
        return True

    def safe_run(self, prog: str, ins: List[Any]) -> bool:
        """Runs program and returns true if prog runs and false if it has assertion error.

        Arguments:
        prog (str) -- program to run
        ins ([Any]) -- input values

        Returns:
        check (bool) -- whether or not it completed
        """
        tmp = tempfile.NamedTemporaryFile(suffix=".c")
        with open(tmp.name, "w") as f:
            f.write(prog)
        try:
            compile_start = time.time()
            with compile_c_program(tmp.name) as exec_file:
                compile_time = time.time() - compile_start
                exec_start = time.time()
                # TODO: Make timeout larger! (Making small for debugging)
                ret_val = subprocess.call(
                    [exec_file] + list(map(str, ins)),
                    stderr=subprocess.DEVNULL,
                    timeout=0.2,
                )
                exec_time = time.time() - exec_start
                # print(len(prog.split("\n")))
                # print("Compile Time: {}".format(compile_time))
                # print("Exec Time: {}".format(exec_time))
                # print("--")
            if ret_val != 0:
                return False
        except subprocess.CalledProcessError as e:
            return False
        except subprocess.TimeoutExpired as e:
            return False  # TODO: Should I really return False here?

        return True

    def precomp_safe_run(self, prog: str, opath: str, ins: List[Any], typ: str) -> bool:
        """Runs program and returns true if prog runs and false if it has assertion error.
        Assumes precompile trace utils.

        Arguments:
        prog (str) -- program to run
        opath (str) -- path to trace util object path
        ins ([Any]) -- input values
        typ (str) -- precompile type

        Returns:
        check (bool) -- whether or not it completed
        """
        tmp_path = os.path.join(TMP_PATH, "tmp.{}".format("c" if typ == "c" else "cpp"))
        with open(tmp_path, "w") as f:
            f.write(prog)
        try:
            # Compile program
            compile_start = time.time()
            exec_path = os.path.join(TMP_PATH, "a.out")
            if typ == "c":
                g_cmd = "tcc {} {} -o {}".format(opath, tmp_path, exec_path)
            elif typ == "cpp":
                g_cmd = "g++-10 -std=c++20 {} {} -o {}".format(
                    opath, tmp_path, exec_path
                )
            else:
                raise Exception("[ERROR] Unrecognized precompile type: {}".format(typ))
            ret_val = subprocess.call(
                g_cmd.split(), stderr=subprocess.DEVNULL, timeout=5
            )
            compile_time = time.time() - compile_start
            if ret_val != 0:
                return False

            # Run program
            exec_start = time.time()
            exec_cmd = "./{} {}".format(exec_path, ins[0])
            ret_val = subprocess.call(
                exec_cmd.split(), stderr=subprocess.DEVNULL, timeout=5
            )
            exec_time = time.time() - exec_start
            # print(len(prog.split("\n")))
            # print("Compile Time: {}".format(compile_time))
            # print("Exec Time: {}".format(exec_time))
            # print("--")
            if ret_val != 0:
                return False
        except subprocess.CalledProcessError as e:
            return False
        except subprocess.TimeoutExpired as e:
            return False  # TODO: Should I really return False here?

        return True

    def trace_run(self, prog: Program, ins: List[Any], trace: Trace, allow_var_pruning: bool) -> bool:
        """Runs program and returns true if prog runs and false if it has assertion error.
        Uses trace to execute program.

        Arguments:
        prog (Program) -- program to run
        ins ([Any]) -- input values
        trace (Trace) -- source program trace

        Returns:
        check (bool) -- whether or not it is trace safe for a **partial** program
        """
        res = self.trace_run_check(prog, ins, trace, allow_var_pruning)
        return res[0] and not res[1]

    def trace_run_check(
        self, prog: Program, ins: List[Any], trace: Trace, allow_var_pruning: bool, allow_unk: bool = False, ret_state: bool = False
    ) -> Tuple[bool, bool, set[str] | None]:
        """Runs program and returns true if prog runs and false if it has assertion error.
        Uses trace to execute program.

        Arguments:
        prog (Program) -- program to run
        ins ([Any]) -- input values
        trace (Trace) -- source program trace
        ret_state (bool) -- option to return final state if found (and not last state)

        Returns:
        check (bool) -- whether or not it is safe
        check (bool) -- whether or not it completed the whole trace
        pruned_vars (set[str]) -- set of pruned variables if allow_var_pruning is True
        """
        try:
            pruned_vars: set[str] | None = set() if allow_var_pruning else None
            state = TraceRunnerState(state=trace.items[0].pre_state.copy(), pruned_variables=pruned_vars)
            state = self.execute_node(prog, trace, prog.root, state, allow_unk)

            completed = False
            if all(trace.items[-1].post_state[k] == state.state[k] for k in trace.items[-1].post_state.keys() if not pruned_vars or k not in pruned_vars) and \
                state.trace_index >= 0 and \
                    not statement_is_return(trace.items[-1].source.src):
                completed = True
            return True, completed, pruned_vars
        except TraceIdxNotFoundException as e:
            return False, False, pruned_vars
        except UnknownEncounterException as e:
            return True, False, pruned_vars
        except TraceEndException as e:
            return True, True, pruned_vars

    def execute_node(
        self, prog: Program, trace: Trace, node: Node, state: TraceRunnerState, allow_unknown: bool
    ) -> TraceRunnerState:
        if isinstance(node, UnknownNode):
            if not allow_unknown:
                raise UnknownEncounterException()
            else:
                return state

        assert isinstance(node, ValueNode) or isinstance(node, DummyNode)

        if node.val in ["SourceGuard", "SourceStmt", "Single", "Stmt"]:
            return self.execute_node(
                prog, trace, prog.nodes[prog.children[node.id][0]], state, allow_unknown
            )
        elif node.val == "Seq":
            state = self.execute_node(
                prog, trace, prog.nodes[prog.children[node.id][0]], state, allow_unknown
            )
            return self.execute_node(
                prog, trace, prog.nodes[prog.children[node.id][1]], state, allow_unknown
            )
        elif node.val == "If":
            state = self.execute_node(
                prog, trace, prog.nodes[prog.children[node.id][0]], state, allow_unknown
            )
            if state.guard_result:
                return self.execute_node(
                    prog, trace, prog.nodes[prog.children[node.id][1]], state, allow_unknown
                )
            else:
                return state
        elif node.val == "ITE":
            state = self.execute_node(
                prog, trace, prog.nodes[prog.children[node.id][0]], state, allow_unknown
            )
            if state.guard_result:
                return self.execute_node(
                    prog, trace, prog.nodes[prog.children[node.id][1]], state, allow_unknown
                )
            else:
                return self.execute_node(
                    prog, trace, prog.nodes[prog.children[node.id][2]], state, allow_unknown
                )
        elif node.val == "While":
            state = self.execute_node(
                prog, trace, prog.nodes[prog.children[node.id][0]], state, allow_unknown
            )
            while state.guard_result:
                state = self.execute_node(
                    prog, trace, prog.nodes[prog.children[node.id][1]], state, allow_unknown
                )
                if state.loop_break:
                    break

                state = self.execute_node(
                    prog, trace, prog.nodes[prog.children[node.id][0]], state, allow_unknown
                )

            return replace(state, loop_break=None, guard_result=None)

        # Actual statement/guard case
        concrete_stmt_used_vars = {v for s in node.code() for v in self.used_vars[s]}
        concrete_stmt_decl_vars = {v for s in node.code() for _, v in self.decl_vars.get(s, [])}
        required_vars = concrete_stmt_used_vars - concrete_stmt_decl_vars
        if any(uv not in state.state for uv in required_vars) \
            or (state.pruned_variables is not None and any(uv in state.pruned_variables for uv in concrete_stmt_used_vars)):
            # Cannot execute code without all appropriate vars defined
            raise TraceIdxNotFoundException()

        # simulate execution of boolean conjunction
        codes = node.code()
        comp_type = node.compound_type
        code_idx = 0

        if not codes and isinstance(node, DummyNode):
            return state
        elif not codes:
            raise Exception("Invalid node")

        for i in range(state.trace_index + 1, len(trace)):
            code = codes[code_idx]
            if statement_is_break(code):
                if state.loop_break:
                    # hack: eliminate illegal program
                    # such as `break; break; ...`
                    raise TraceIdxNotFoundException()

                state = replace(state, loop_break=True)

                # because we remove all breaks from the original trace
                # so we need to handle our own break
                if i == len(trace) - 1:
                    raise TraceEndException()
                else:
                    return replace(state, trace_index=i-1)

            is_negated_guard = False or node.negated

            # Check if source matches
            if trace.sources[i].src != code:
                # ad-hoc fix for Tigress: identify negated guards
                if (
                    trace.sources[i].kind == TraceSourceKind.GUARD
                    and trace.sources[i].src[0] == "!"
                    and trace.sources[i].src[1:].strip("() ") == code
                ):
                    is_negated_guard = True
                else:
                    continue

            # NOTE: If we assume not duplicate statements, can only check first occurence

            # Check if before states match
            before_state = trace.items[i].pre_state
            fuzzy_match = True
            for v in state.state:
                if v in before_state and state.state[v] == before_state[v]:
                    continue

                if v in before_state and state.state[v] != before_state[v]:
                    if v == "tmp" and (v not in self.used_vars[code] or v in self.left_vars[code]):
                        # ad-hoc hack: tmp is a special variable introduced by tigress
                        continue

                if state.pruned_variables is not None and v not in concrete_stmt_used_vars:
                    state.pruned_variables.add(v)
                else:
                    fuzzy_match = False
                    break
            
            if not fuzzy_match:
                continue

            # does not make sense to update state if last element of trace
            if i == len(trace) - 1:
                raise TraceEndException()

            # If before state matches, get next state
            after_state = trace.items[i].post_state

            keys = state.state.keys() & after_state.keys()
            new_vars = {k for c in codes for _, k in self.decl_vars.get(c, [])}
            # GDB problem: sometimes new vars 
            keys.update(new_vars)

            state.state.clear()
            state.state.update({k: after_state[k] for k in keys if k in after_state})

            res = False if trace.sources[i].val is None else trace.sources[i].val
            if is_negated_guard:
                res = not res
            code_idx += 1

            if code_idx == len(codes):
                return replace(state, guard_result=res, trace_index=i)

            # short-circuit AND evaluation
            if not res and comp_type == GuardCompositionType.AND:
                return replace(state, guard_result=False, trace_index=i)
            if res and comp_type == GuardCompositionType.OR:
                return replace(state, guard_result=True, trace_index=i)

        if state.trace_index == len(trace) - 1:
            # If matches last element of trace, throw special error
            raise TraceEndException()

        raise TraceIdxNotFoundException()
