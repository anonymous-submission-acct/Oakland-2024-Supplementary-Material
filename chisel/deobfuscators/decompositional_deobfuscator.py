import copy
from inspect import trace
import itertools
from args import get_cline_args
import re
import sys
import time
import logging
import random
from typing import *

from analysis import Analysis
from checkers import *
from formatters import Formatter
from grammar import *
from priority_queue import PriorityQueue
from program import *
from pruners import Pruner, NoPruner
from runners import *
from search_models import SearchModel
from stats import Stats
from trace import Trace
from extractor import *
from input_spec import InputSpec

from langs.c.c_runner import TraceRunnerState

from utils import SynthesisTimeoutException
from deobfuscators.control_flow_sketch_enumerator import *
from config import get_synthesis_config, SynthesisConfig


class DecompositionalDeobfuscator:
    """Synthesizes deobfuscated program given sketch and trace specs by solving each hole *mostly* separately."""

    grammar: Grammar
    cache: set[str]

    def __init__(self, grammar: Grammar):
        self.grammar = grammar
        self.cache = set()

    @staticmethod
    def _trace_is_consistent(trace: Trace):
        """Checks if trace is consistent with its states."""
        st = trace.items[0].pre_state
        for item in trace.items:
            keys = st.keys() & item.pre_state.keys()
            if any(st[k] != item.pre_state[k] for k in keys):
                return False
            st = item.post_state
        return True

    def _find_trace_inconsistent_vars(self, trace: Trace):
        """Finds variables that are inconsistent with their states."""
        st = trace.items[0].pre_state
        inconsistent_vars = set()
        for _, item in enumerate(trace.items):
            if item.pre_state != st:
                keys = st.keys() | item.pre_state.keys()
                inconsistent_vars.update(
                    {k for k in keys if st.get(k) != item.pre_state.get(k) and st.get(k) != "ERROR"}
                )
            st = item.post_state
        return inconsistent_vars

    def _phantom_eval(
        self,
        initial_mvs: set[str],
        mvs_closure: set[str],
        prog: Program,
        traces: list[Trace],
        decl_vars: Dict[str, set[tuple[str, str]]],
        used_vars: Dict[str, set[str]],
        checker: EquivalenceChecker,
        stats: Stats,
        formatter: Formatter,
        trace_spec: dict[UnknownNode, list[Trace]],
    ) -> bool | set[str]:
        discarded_vars = set()
        for utraces in trace_spec.values():
            for t in utraces:
                discarded_vars.update(self._find_trace_inconsistent_vars(t))
            
            min_traces: list[Trace] = list(
                filter(
                    None,
                    (
                        t.minimized_copy((initial_mvs | mvs_closure) - discarded_vars, decl_vars, used_vars, True)
                        for t in utraces
                    ),
                )
            )

            for t in min_traces:
                if not self._trace_is_consistent(t):
                    discarded_vars.update(self._find_trace_inconsistent_vars(t))


        if discarded_vars.intersection(initial_mvs):
            return False

        unks = {unk.id: unk for unk in trace_spec}

        final_var_set = ((initial_mvs | mvs_closure) - discarded_vars) | {"tmp"}
        for unk in trace_spec:
            local_var_set = final_var_set.copy()
            if any("tmp" in self._find_trace_inconsistent_vars(t) for t in min_traces):
                local_var_set.remove("tmp")

            min_trace: list[Trace] = list(
                filter(
                    None,
                    (
                        t.minimized_copy(final_var_set, decl_vars, used_vars, True)
                        for t in trace_spec[unk]
                    ),
                )
            )
            trace_spec[unk] = min_trace

            codes = [s.src for s in min_trace[0].sources] if min_trace else []
            prog.nodes[unk.id] = DummyNode(unk.id, codes)
            if prog.root.id == unk.id:
                prog.root = prog.nodes[unk.id]

        for unk in list(trace_spec):
            if not trace_spec[unk]:
                del trace_spec[unk]

        mvs_traces = [
            t.minimized_copy(final_var_set, decl_vars, used_vars, True) for t in traces
        ]

        # irrelevant code insertion introduces new variables
        # that persist in the control flow sketch
        # so need to remove these vars and reduce the sketch
        res = checker.check_eq_pruning(prog, mvs_traces)
        if res is None:
            stats.num_pruned_complete_sketches += 1
            return False

        if (res | discarded_vars).intersection(initial_mvs):
            return False

        stats.phantom_solution = formatter.format(prog)
        for unk_id, unk in unks.items():
            prog.nodes[unk_id] = unk
            if prog.root.id == unk_id:
                prog.root = prog.nodes[unk_id]

        return res | discarded_vars

    def deobfuscate_decomp(
        self,
        src_path: str,
        search_model: SearchModel,
        checker: EquivalenceChecker,
        pruner: Pruner,
        next_unk: Callable[[Program], Node],
        analysis: Analysis,
        formatter: Formatter,
        stats: Stats,
        trace_info: Any,
        config: HeuristicConfig,
        func_name: str,
    ) -> Program:
        """
        Deobfuscates the given program by filling out the sketch program.

        Arguments:
        src_path (str) -- path to obfuscated program
        search_model (SearchModel -- model for guiding synthesis search
        checker (EquivalenceChecker) -- checks equivalence of two programs from grammar
        pruner (Pruner) -- pruning engine for removing infeasible partial programs
        next_unk (Program -> Node) -- function for retrieving next unknown
        config (Config) -- synthesis configuration info
        analysis (Analysis) -- static analyzer for source programs
        formatter (Formatter) -- pretty printer for target programs
        stats (Stats) -- object to track synthesis statistics

        Returns:
        prog (Program) -- program matching specification (or None if timeout reached)
        """
        syn_config = get_synthesis_config()
        start_time = time.time()
        args = get_cline_args()

        (
            inputs,
            func_decls,
            obfus_func_signature,
            decl_vars,
            used_vars,
            left_vars,
            traces,
            trace_time,
            extraction_time,
            num_loc,
        ) = trace_info
        stats.gdb_times.append(trace_time)
        stats.extraction_time = extraction_time
        stats.num_lines = num_loc

        guards = analysis.get_guards(src_path, traces)
        # count number of stmts/guards
        stats.num_statements = len(analysis.get_stmts(src_path, traces))
        stats.num_guards = len(guards)

        # TODO: This is hacky ... make cleaner
        checker.formatter.stmt_decl_vars = decl_vars
        if hasattr(pruner, "formatter"):
            pruner.formatter.stmt_decl_vars = decl_vars
        for obj in [pruner, checker]:
            if hasattr(obj, "runner"):
                obj.runner.decl_vars = decl_vars
                obj.runner.used_vars = used_vars
                obj.runner.left_vars = left_vars

        enumerator = ControlFlowSketchEnumerator(
            self.grammar, used_vars, left_vars, stats, config
        )
        
        if syn_config.disable_heuristics:
            assert syn_config.disable_decomposition and syn_config.disable_heuristic_sketch_pruning, "Must disable decomposition if disabling heuristics"

            for sk_prog in DecompositionalDeobfuscator.generate_control_flow_sketches(self.grammar, guards):
                if time.time() - start_time > args.timeout:
                    # exit synthesis loop if timeout passed
                    stats.deobfuscation_time = time.time() - start_time
                    raise SynthesisTimeoutException()

                logging.info(f"Trying sketch: {sk_prog}")
                sk_prog.signature = obfus_func_signature

                stats.num_complete_sketches += 1

                min_vars = analysis.get_min_vars(sk_prog, traces, used_vars)
                for v in min_vars.values():
                    v.add("__stdout__")
                sketch = ControlFlowSketch(sk_prog, {}, {}, sk_prog.signature.return_type != "void")
                label_guards = extract_source_guard(sketch)

                result = self.deobfuscate_decomp_inner(
                    src_path,
                    sketch,
                    min_vars,
                    traces,
                    set(),
                    {sk_prog.nodes[unk_id]: traces for unk_id in sk_prog.unknowns},
                    analysis,
                    formatter,
                    decl_vars,
                    used_vars,
                    search_model,
                    checker,
                    pruner,
                    next_unk,
                    inputs,
                    start_time,
                    enumerator,
                    syn_config,
                    stats
                )

                if result and isinstance(result, Program):
                    stats.solution = result
                    stats.deobfuscation_time = time.time() - start_time
                    return result

        trace_source_list = tuple(tuple(t.items) for t in traces)
        for sketch in enumerator.generate_sketches(
            trace_source_list,
            has_ret_value=obfus_func_signature.return_type != "void",
            start_time=start_time,
            timeout=args.timeout,
        ):
            if time.time() - start_time > args.timeout:
                # exit synthesis loop if timeout passed
                stats.deobfuscation_time = time.time() - start_time
                raise SynthesisTimeoutException("sketch synthesis")

            orig_sk = sketch
            sketch = sketch.copy()
            min_vars = analysis.get_min_vars(sketch.prog, traces, used_vars)

            for v in min_vars.values():
                v.add("__stdout__")

            logging.info(f"Trying sketch: {sketch.prog}")
            sketch.prog.signature = obfus_func_signature
            label_guards = extract_source_guard(sketch)
            result = self.deobfuscate_decomp_inner(
                src_path,
                sketch,
                min_vars,
                traces,
                label_guards,
                {k: list(map(Trace, v)) for k, v in sketch.stmt_map.items()},
                analysis,
                formatter,
                decl_vars,
                used_vars,
                search_model,
                checker,
                pruner,
                next_unk,
                inputs,
                start_time,
                enumerator,
                syn_config,
                stats,
            )

            if result and isinstance(result, Program):
                stats.solution = result
                stats.deobfuscation_time = time.time() - start_time
                return result
        
        if enumerator.timed_out:
            stats.deobfuscation_time = time.time() - start_time
            raise SynthesisTimeoutException("enumerator")

        stats.deobfuscation_time = time.time() - start_time
        return None

    def deobfuscate_decomp_inner(
        self,
        src_path: str,
        program_sketch: ControlFlowSketch,
        min_vars: dict[UnknownNode, set[str]],
        traces: list[Trace],
        label_guards: set[str],
        unk_map: dict[UnknownNode, list[Trace]],
        analysis: Analysis,
        formatter: Formatter,
        decl_vars: Dict[str, set[tuple[str, str]]],
        used_vars: Dict[str, set[str]],
        search_model: SearchModel,
        checker: EquivalenceChecker,
        pruner: Pruner,
        next_unk: Callable[[Program], Node],
        inputs: list[list[Any]],
        start_time: int,
        enumerator: ControlFlowSketchEnumerator,
        syn_config: SynthesisConfig,
        stats: Stats,
    ) -> Program | dict[UnknownNode, set[str]] | None:
        trace_specs = unk_map.copy()
        initial_mvs = {v for _, vs in min_vars.items() for v in vs}
        mvs_closure = enumerator.get_variable_dependency_closure(
            program_sketch, used_vars, decl_vars, initial_mvs, max_depth=10
        )
        if not (initial_mvs | mvs_closure):
            logging.debug("No min vars found")
            return None

        sketch = program_sketch.prog
        if not syn_config.disable_heuristic_sketch_pruning:
            invalid_variables = self._phantom_eval(
                initial_mvs,
                mvs_closure,
                sketch,
                traces,
                decl_vars,
                used_vars,
                checker,
                stats,
                formatter,
                trace_specs,
            )
            if invalid_variables is False:
                logging.debug("Failed phantom check")
                return None
        else:
            invalid_variables = set()

        assert isinstance(invalid_variables, set)

        if syn_config.disable_decomposition:
            pruner.cache.clear()
            self.cache.clear()

            current_variable_set = (
                (initial_mvs | mvs_closure) - invalid_variables
            )
            mvs_traces = [
                t.minimized_copy(
                    current_variable_set,
                    decl_vars,
                    used_vars,
                    True,
                )
                for t in traces
            ]

            if any(
                any(
                    v in mt.items[0].pre_state
                    and v in t.items[0].pre_state
                    and mt.items[0].pre_state[v] != t.items[0].pre_state[v]
                    for mt, t in zip(mvs_traces, traces)
                )
                for v in current_variable_set
            ):
                return None

            timed_out, pruned_var_prog_map = self.deobfuscate(
                src_path,
                search_model,
                checker,
                pruner,
                next_unk,
                analysis,
                formatter,
                None, # we supplied sketch below
                mvs_traces,
                inputs,
                decl_vars,
                used_vars,
                sketch.signature,
                start_time,
                stats,
                syn_config,
                sketch,
                return_on_first=True,
                allow_control_flow=True
            )

            prog = min(
                sorted(
                    (
                        (vs, p)
                        for vs, p in pruned_var_prog_map.items()
                        if not initial_mvs.intersection(vs)
                    ),
                    key=lambda p: len(p[0]),
                ),
                default=(set(), None)
            )[1]
            return prog


        for unk in trace_specs:
            relevant_vars = (min_vars[unk] | mvs_closure) - invalid_variables
            trace_specs[unk] = list(
                filter(
                    None,
                    (
                        t.minimized_copy(
                            relevant_vars, decl_vars, used_vars, True, False
                        )
                        for t in trace_specs[unk]
                    ),
                )
            )

        # don't panic -- this function modifies sketch in place...
        reduced = enumerator.reduce_from_stmt_map(sketch, trace_specs)
        if reduced is None:
            logging.debug("Reduced sketch is None")
            return None

        pruner.cache.clear()
        unk_to_pruned_var_map = {}

        for unk, utraces in trace_specs.items():
            self.cache.clear()
            timed_out, pruned_var_prog_map = self.deobfuscate(
                src_path,
                search_model,
                checker,
                pruner,
                next_unk,
                analysis,
                formatter,
                unk.nonterm,
                utraces,
                inputs,
                decl_vars,
                used_vars,
                sketch.signature,
                start_time,
                stats,
                syn_config,
                None,
            )

            # if we failed to minimize the program for the unknown,
            # we can still try to use the original program
            if timed_out:
                codes = [s.src for s in utraces[0].sources] if utraces else []
                p = Program()
                p.root = DummyNode(0, codes)
                p.nodes[0] = p.root
                pruned_var_prog_map[tuple(sorted(invalid_variables))] = p

            if not pruned_var_prog_map:
                continue

            unk_to_pruned_var_map[unk] = list(
                sorted(
                    (
                        (vs, p)
                        for vs, p in pruned_var_prog_map.items()
                        if not initial_mvs.intersection(vs)
                    ),
                    key=lambda p: -len(p[0]),
                )
            )
            if not unk_to_pruned_var_map[unk]:
                return None

        for progs in itertools.product(*unk_to_pruned_var_map.values()):
            completed_sketch = sketch.copy()
            pruned_vars = set()
            for unk, (vs, comp) in zip(unk_to_pruned_var_map, progs):
                completed_sketch.add_subprogram(unk.id, comp.deepcopy())
                pruned_vars.update(vs)

            current_variable_set = (
                (initial_mvs | mvs_closure) - pruned_vars - invalid_variables
            ) | {"tmp"}
            mvs_traces = [
                t.minimized_copy(
                    current_variable_set,
                    decl_vars,
                    used_vars,
                    True,
                )
                for t in traces
            ]

            mvs_traces_consistent = list(filter(self._trace_is_consistent, mvs_traces))
            if len(mvs_traces_consistent) != len(mvs_traces):
                continue

            if any(
                any(
                    v in mt.items[0].pre_state
                    and v in t.items[0].pre_state
                    and mt.items[0].pre_state[v] != t.items[0].pre_state[v]
                    for mt, t in zip(mvs_traces, traces)
                )
                for v in current_variable_set
            ):
                logging.info(
                    "The pre-state of pruned traces are not consistent with original traces"
                )
                continue

            if not checker.check_eq(
                completed_sketch, src_path, mvs_traces, inputs, stats
            ):
                continue

            return completed_sketch

        return None

    def deobfuscate(
        self,
        src_path: str,
        search_model: SearchModel,
        checker: EquivalenceChecker,
        pruner: Pruner,
        next_unk: Callable[[Program], Node],
        analysis: Analysis,
        formatter: Formatter,
        start_sym: Nonterminal,
        traces: List[Trace],
        inputs: List[Any],
        decl_vars: Dict[TraceSource, Set[str]],
        used_vars: Dict[TraceSource, Set[str]],
        obfus_func_signature: Any,
        start_time: int,
        stats: Stats,
        config: SynthesisConfig,
        initial_prog: Program | None,
        return_on_first: bool = False,
        allow_control_flow: bool = False,
    ) -> tuple[bool, dict[tuple[str, ...], Program]]:
        """
        Deobfuscates the given program, enumerating
        in order of priority (low to high).

        Arguments:
        src_path (str) -- path to obfuscated program
        search_model (SearchModel -- model for guiding synthesis search
        checker (EquivalenceChecker) -- checks equivalence of two programs from grammar
        pruner (Pruner) -- pruning engine for removing infeasible partial programs
        next_unk (Program -> Node) -- function for retrieving next unknown
        config (Config) -- synthesis configuration info
        analysis (Analysis) -- static analyzer for source programs
        formatter (Formatter) -- pretty printer for target programs
        start_sym (Nonterminal) -- symbol to start search from
        traces ([Trace]) -- traces used as a specification
        inputs ([Any]) -- input values used to generate traces
        decl_vars ({str: {str}}) -- map from stmts to variables they declare
        used_vars ({str: {str}}) -- map from stmts/guards to variables they use
        obfus_func_signature (Any) -- function signature for obfuscated function
        start_time (int) -- time when synthesis started
        stats (Stats) -- object to track synthesis statistics

        Returns:
        timeout (bool) -- whether synthesis timed out
        mvs (tuple(str)) -- set of maximal variables used in traces
        prog (Program) -- program matching specification (or None if timeout reached)
        """
        args = get_cline_args()

        synthesis_start_time = time.time()

        prog = initial_prog or Program(
            start_sym, function_signature=obfus_func_signature
        )  # Initial program

        # Retrieve relevant guards and statements
        guards, stmts = analysis.get_guards_and_stmts_from_path(src_path, traces)

        # Add stmts/guard from traces to grammar
        grammar = self.grammar.copy()
        grammar.add_stmts_and_guards(
            set(s.src for s in stmts), set()
        )
        grammar.remove_prod(grammar.get_prod("If"))
        grammar.remove_prod(grammar.get_prod("ITE"))
        grammar.remove_prod(grammar.get_prod("While"))

        if args.debug in ["all", "extracted"]:
            print("[DEBUG]: Extracted statements/guards:")
            print("--Statements--")
            for s in stmts:
                print(s)
            print("--Guards--")
            for g in guards:
                print(g)

        worklist = PriorityQueue(priority=search_model.priority)

        worklist.add(prog, stats)

        # Keep track of grammar per program (b/c we can remove stmts/guards from grammar)
        grammars = {}
        grammars[prog] = grammar

        max_var_set_map = {}

        while len(worklist) > 0:
            if time.time() - start_time > args.timeout:
                # exit synthesis loop if timeout passed
                stats.deobfuscation_time = time.time() - start_time
                raise SynthesisTimeoutException()

            if (
                time.time() - synthesis_start_time
                > config.synthesis_timeout.total_seconds()
            ):
                logging.info("Synthesis timeout reached")
                return True, max_var_set_map

            stats.num_iter += 1

            prog = worklist.pop()  # Get highest priority program
            grammar = grammars[prog]  # Get associated grammar

            prog_str = formatter.format(prog)
            if args.debug in ["all", "print-partial"]:
                print(prog_str)
                print("--")

            if prog_str in self.cache:
                # Ignore partial programs that have already been processed
                continue

            self.cache.add(prog_str)  # add partial program to cache

            if prog.complete():
                # If program is complete, check if it matches specification
                stats.num_candidates += 1
                stats.candidates.append(prog)
                traces_satisfied = True
                pruned = set()
                for trace in traces:
                    # NOTE: Doesn't use inputs so set to None as it can be fetched from trace!
                    # NOTE: Assumes pruner has runner defined!
                    check = False
                    try:
                        state = TraceRunnerState(
                            state=trace.items[0].pre_state.copy(),
                            pruned_variables=set(),
                        )
                        state = pruner.runner.execute_node(
                            prog, trace, prog.root, state, False
                        )
                        if (
                            all(
                                trace.items[-1].post_state.get(k) == state.state.get(k)
                                for k in trace.items[-1].post_state.keys()
                                if not pruned or k not in pruned
                            )
                            and state.trace_index >= 0
                            and not statement_is_return(trace.items[-1].source.src)
                        ):
                            check = True
                        else:
                            check = False  # force trace evaluates to the end
                    except TraceIdxNotFoundException as e:
                        check = False
                    except UnknownEncounterException as e:
                        raise e  # Should never happen...
                    except TraceEndException as e:
                        check = True  # Matching final element of trace is success

                    pruned.update(state.pruned_variables)

                    if not check:
                        traces_satisfied = False
                        break

                if traces_satisfied:
                    k = tuple(sorted(pruned))

                    # ensure minimality
                    if k not in max_var_set_map:
                        max_var_set_map[k] = prog
                    if not k or return_on_first:
                        return False, max_var_set_map
                continue  # Try another program if doesn't sat spec

            prune_start = time.time()
            if pruner.prune(prog, src_path, traces, inputs, stats, allow_return=allow_control_flow) and not config.disable_trace_pruning:
                # If partial program should be pruned, continue without adding expansions
                stats.num_pruned += 1
                stats.pruned.append(prog)
                stats.pruned_times.append(time.time() - prune_start)
                continue

            stats.num_not_pruned += 1
            stats.not_pruned.append(prog)
            stats.not_pruned_times.append(time.time() - prune_start)

            # Add all expansions of partial program for next unknown
            unk = next_unk(prog)
            prods = grammar.productions[unk.nonterm]

            for prod in prods:
                new_prog = prog.copy()
                new_prog.expand(unk.id, prod)

                # construct grammar for program to be added
                new_grammar = grammar
                if not args.disable_syntax_pruning:
                    if unk.nonterm in [SOURCE_GUARD_NONTERM, SOURCE_STMT_NONTERM]:
                        # Adjust DSL to remove stmts/guards which dominate current
                        new_grammar = grammar.copy()
                        # NOTE: we keep production for current stmt/guard
                        # to handle duplicates

                    # See if program can be pruned because too few stmts/guards
                    min_needed_stmts = 0
                    min_needed_guards = 0
                    for uid in new_prog.unknowns:
                        unode = new_prog.nodes[uid]
                        if unode.nonterm in self.grammar.stmt_nterms:
                            min_needed_stmts += 1
                        elif unode.nonterm in self.grammar.guard_nterms:
                            min_needed_guards += 1
                    if (
                        len(new_grammar.productions[SOURCE_STMT_NONTERM])
                        < min_needed_stmts
                        or len(new_grammar.productions[SOURCE_GUARD_NONTERM])
                        < min_needed_guards
                    ):
                        stats.num_pruned += 1
                        stats.pruned.append(new_prog)
                        stats.pruned_times.append(time.time() - prune_start)
                        stats.num_syntax_pruned += 1
                        stats.syntax_pruned.append(new_prog)
                        continue

                worklist.add(new_prog, stats)
                grammars[new_prog] = new_grammar

        return False, max_var_set_map
    
    @staticmethod
    def generate_control_flow_sketches(grammar: Grammar, guards: list[TraceSource], init_prog: Optional[Program] = None, max_size=100) -> Iterable[Program]:
        """
        Generate random control flow sketches
        """

        # remove statement production from grammar
        grammar = copy.deepcopy(grammar)
        productions = grammar.productions.copy()
        productions[grammar.get_prod("Single").args[0]].remove(grammar.get_prod("Stmt"))

        queue = [Program(grammar.start) if init_prog is None else init_prog]
        while queue:
            prog = queue.pop(0)
            if prog.complete():

                unk_ids = [nid for nid, node in prog.nodes.items() if isinstance(node, UnknownNode)]
                prog.unknowns.extend(unk_ids)

                yield prog
                continue

            if len(prog.nodes) > max_size:
                break

            next_unk = prog.leftmost_unknown()
            assert next_unk, "No unknown nodes left in program"

            # fill guards
            if next_unk.nonterm == grammar.guard_nterms[0]:
                for guard in guards:
                    new_prog = prog.copy()
                    new_prog.expand(
                        next_unk.id,  # type: ignore
                        Production(SOURCE_GUARD_NONTERM, SOURCE_GUARD_NAME, [GuardSpec((guard.src,))]),  # type: ignore
                    )
                    queue.append(new_prog)
                continue

            prods = productions[next_unk.nonterm] + [None]
            for prod in prods:

                if prod is None:
                    # expand this unknown as a statement hole
                    new_prog = prog.copy()
                    new_prog.unknowns.remove(next_unk.id)
                    queue.append(new_prog)
                    continue

                # hack way to disallow top-level `Single`
                if len(prog.nodes) == 1 and prod.fname == "Single":
                    continue

                new_prog = prog.copy()
                new_prog.expand(next_unk.id, prod)
                queue.append(new_prog)

    def label_check(self, prog: Program, label_path: str, formatter: Formatter) -> bool:
        """Check if program matches label.

        Arguments:
        prog (Program) -- program to check
        label_path (str) -- path to label to check against
        formatter (Formatter) -- program formatter

        Returns:
        matches (bool) -- True if matches label, False otherwise
        """
        # Get function body string
        prog_body = formatter.format(prog, only_body=True)
        prog_body = " ".join(prog_body.split())

        # Build regex to test against
        regex = prog_body
        unk_patt = re.compile(r"\p?\[[^\]]*\]")
        unks = unk_patt.findall(regex)
        if len(unks) == 0:
            raise Exception("Should be at least one unknown here!:\n{}".format(regex))
        for unk in unks:
            regex = regex.replace(unk, "__DOTSTAR__")
        regex = re.escape(regex)
        regex = regex.replace("__DOTSTAR__", ".*")

        # Fetch label
        with open(label_path, "r") as f:
            label = f.read()
        lpatt = re.compile("// BODY BEGIN(.*)// BODY END", re.DOTALL)
        lbodies = lpatt.findall(label)
        if len(lbodies) != 1:
            raise Exception("Function body not found in label!:\n{}".format(label))
        label = " ".join(lbodies[0].split())

        # Check label match
        label_patt = re.compile(regex)
        check = len(label_patt.findall(label)) > 0

        return check
