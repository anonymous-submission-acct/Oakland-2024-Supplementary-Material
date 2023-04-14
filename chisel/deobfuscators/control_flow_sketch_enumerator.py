from typing import *
from dataclasses import dataclass, replace
from collections import deque, Counter
from itertools import chain, takewhile, dropwhile, islice, groupby
import logging
import time

from trace import Trace, TraceSourceKind, TraceSource, SlimTraceItem
from checkers import *
from grammar import *
from program import *
from runners import *
from extractor import *
from utils import (
    has_at_least,
    all_ordered_combinations,
    statement_is_return,
    sequence_intersection,
    statement_contains_control_flow,
)
from stats import Stats

from config import HeuristicConfig, HeuristicRules

import objregex as ore

Subtrace: TypeAlias = tuple[SlimTraceItem, ...]
UnknownTraceMap: TypeAlias = dict[UnknownNode, tuple[Subtrace, ...]]
StatementTraceMap: TypeAlias = dict[UnknownNode | ValueNode, tuple[Subtrace, ...]]


def _guards(st: Subtrace) -> tuple[TraceSource, ...]:
    """Returns all guards (value reset to None) in the given traces."""
    return tuple(
        t.source.without_ln_and_val()
        for t in st
        if t.source.kind == TraceSourceKind.GUARD
    )


def _statements(st: Subtrace) -> Subtrace:
    """Returns all statement trace entries in the given traces."""
    return tuple(t for t in st if t.source.kind == TraceSourceKind.STATEMENT)


def _sources(st: Subtrace) -> tuple[TraceSource, ...]:
    """Returns all sources of the given traces."""
    return tuple(t.source for t in st)


@dataclass
class ControlFlowSketch:
    """Control flow sketch with statement mapping."""

    prog: Program
    trace_map: UnknownTraceMap
    stmt_map: StatementTraceMap
    has_return_value: bool = False

    def __post_init__(self):
        """Remove empty and duplicates from maps."""
        self.trace_map = {k: v for k, v in self.trace_map.items() if v}
        self.stmt_map = {k: v for k, v in self.stmt_map.items() if v}

    def copy(self):
        prog = self.prog.copy()
        trace_map = {prog.nodes[k.id]: v for k, v in self.trace_map.items()}
        stmt_map = {prog.nodes[k.id]: v for k, v in self.stmt_map.items()}
        return ControlFlowSketch(prog, trace_map, stmt_map, self.has_return_value)

    def __copy__(self):
        return self.copy()


def extract_source_guard(sketch: ControlFlowSketch) -> set[str]:
    """Extracts all used guards from the given sketch"""

    result = set()
    for node in sketch.prog.nodes.values():
        if (
            isinstance(node, ValueNode)
            and node.prod.nonterm.name == "SourceGuard"
            and node.val != "SourceGuard"
        ):
            result.update(node.code())

    return result

class ControlFlowSketchEnumerator:
    """Enumerates all feasible control flow sketches of a program with heuristics."""
    @staticmethod
    def _is_control_flow_sketch_complete(sketch: ControlFlowSketch) -> bool:
        if sketch.prog.complete() and sketch.trace_map:
            raise Exception("sketch is complete but has traces left")

        return sketch.prog.complete()

    @staticmethod
    def _is_below_bound(sketch: ControlFlowSketch, bound: int) -> bool:
        """Checks if the number of nodes in the next program is below the bound."""
        return len(sketch.prog.nodes) < bound

    def __init__(
        self,
        grammar: Grammar,
        used_vars: dict[str, set[str]],
        left_vars: dict[str, set[str]],
        stats: Stats,
        config: HeuristicConfig,
    ):
        self.grammar = grammar
        self.used_vars = used_vars
        self.left_vars = left_vars
        self.stats = stats
        self.config = config
        self.timed_out = False

        self.heuristic_map_single = {
            HeuristicRules.WHILE: self._dsd_while,
            HeuristicRules.WHILE_NEGATED: self._dsd_while_swapped,
            HeuristicRules.ITE: self._dsd_if_else,
        }
        self.heuristic_map_multi = {
            HeuristicRules.WHILE_CONJUNCTION: self._dsd_while_conj,
            HeuristicRules.WHILE_DISJUNCTION: self._dsd_while_disj,
            HeuristicRules.WHILE_CONJUNCTION_NEGATED: self._dsd_while_conj_swapped,
            HeuristicRules.WHILE_DISJUNCTION_NEGATED: self._dsd_while_disj_swapped,
        }
        self.single_checks = [v for f, v in self.heuristic_map_single.items() if f in self.config.enabled_heuristics]
        self.multi_checks = [v for f, v in self.heuristic_map_multi.items() if f in self.config.enabled_heuristics]
        
        

    def generate_sketches(
        self,
        trace_list: tuple[Subtrace, ...],
        make_sketch_explicit: bool = True,
        init_sk: ControlFlowSketch | None = None,
        has_ret_value: bool = False,
        start_time: float | None = None,
        timeout: float | None = None,
    ) -> Iterator[ControlFlowSketch]:
        """Generates feasible sketches from a list of traces up to the size specified."""

        worklist: deque[ControlFlowSketch] = deque()

        init_prog = Program(self.grammar.start)
        init_sk = init_sk or ControlFlowSketch(
            prog=init_prog,
            trace_map={init_prog.root: trace_list},
            stmt_map={},
            has_return_value=has_ret_value,
        )
        worklist.append(init_sk)

        while worklist and ControlFlowSketchEnumerator._is_below_bound(
            worklist[0], self.config.prog_size
        ):
            if start_time and timeout and time.time() - start_time > timeout:
                self.timed_out = True
                break

            sketch = worklist.popleft()
            if ControlFlowSketchEnumerator._is_control_flow_sketch_complete(sketch):
                if self.stats:
                    self.stats.num_complete_sketches += 1
                yield self._make_sketch_explicit(
                    sketch
                ) if make_sketch_explicit else sketch
                continue

            new_sketches = self.expand_hole(sketch)
            for new_sketch in new_sketches:
                if self.sketch_is_feasible(new_sketch):
                    if self.stats:
                        self.stats.num_partial_sketches += 1
                    worklist.append(new_sketch)
                else:
                    if self.stats:
                        self.stats.num_pruned_sketches += 1
                    if self.config.print_pruned_sketch:
                        logging.debug(
                            f"pruning infeasible partial sketch: {new_sketch.prog}"
                        )

    def expand_hole(self, sketch: ControlFlowSketch) -> list[ControlFlowSketch]:
        next_unk = sketch.prog.leftmost_unknown()
        assert next_unk, "No unknown nodes left in program"

        s = str(sketch.prog)
        if "SourceGuard(i < n)" in s:
            pass

        new_trace_map = sketch.trace_map.copy()
        traces = new_trace_map.pop(next_unk, ())

        # need to consider merging A vs. !A
        # map from !(A (b)) to A (-b)
        guards_of_traces = set().union(*(_guards(trace) for trace in traces))

        # only shared guards could be in the control-flow sketch
        unordered_guards = (
            set.intersection(*(set(_guards(trace)) for trace in traces))
            if traces
            else set()
        )

        if self.config.debug_guard_whitelist:
            unordered_guards = {
                g for g in unordered_guards if g.src in self.config.debug_guard_whitelist
            }

        guards = list(
            dict.fromkeys(
                [x for x in _guards(traces[0]) if x in unordered_guards]
                if traces
                else []
            )
        )

        common_stmts_src = (
            set.intersection(
                *(
                    {entry.source.src for entry in _statements(trace)}
                    for trace in traces
                )
            )
            if traces
            else set()
        )

        results = []

        for guard_comb in all_ordered_combinations(guards):
            if any(
                any(kw in g.src for kw in self.config.debug_guard_blacklist) for g in guard_comb
            ):
                continue

            decomp_results = self.decide_structure_and_decomposition(
                self.grammar, guard_comb, traces
            )
            if not decomp_results:
                continue

            for decomp in decomp_results:
                subprogram, sub_trace_map = decomp

                new_prog = sketch.prog.copy()
                new_prog.add_subprogram(next_unk.id, subprogram)

                # pre-guard statements: take everything before the guard
                updated_traces = []
                for trace in traces:
                    updated = tuple(
                        filter(
                            lambda t: t.source.src in common_stmts_src,
                            takewhile(lambda s: s.source != guard_comb[0], trace),
                        )
                    )
                    if updated:
                        updated_traces.append(updated)

                results.append(
                    ControlFlowSketch(
                        prog=new_prog,
                        trace_map={**new_trace_map, **sub_trace_map},
                        stmt_map={
                            **sketch.stmt_map,
                            subprogram.root: tuple(updated_traces),
                        },
                        has_return_value=sketch.has_return_value,
                    )
                )

        # ignore all guards and just expand statement hole
        if common_stmts_src:
            new_prog = sketch.prog.copy()
            new_prog.unknowns.remove(next_unk.id)

            # re-add line information
            subtraces = tuple(
                tuple(entry for entry in trace if entry.source.src in common_stmts_src)
                for trace in traces
            )
            subtraces = tuple(filter(None, subtraces))

            results.append(
                ControlFlowSketch(
                    prog=new_prog,
                    trace_map=new_trace_map,
                    stmt_map={**sketch.stmt_map, next_unk: subtraces},
                    has_return_value=sketch.has_return_value,
                )
            )

        return results

    def sketch_is_feasible(self, sketch: ControlFlowSketch) -> bool:
        for unk, traces in sketch.trace_map.items():
            assert traces, f"Empty traces for unknown node {unk}"

            common_guard_or_stmts = set.intersection(
                *(set(s.src for s in _sources(trace)) for trace in traces)
            )
            if not common_guard_or_stmts:
                return False

        if sketch.has_return_value and not self._sketch_has_return_on_all_paths(
            sketch, sketch.prog.root
        ):
            return False

        return True

    def decide_structure_and_decomposition(
        self,
        grammar: Grammar,
        guard_combination: tuple[TraceSource, ...],
        traces: tuple[Subtrace, ...],
    ) -> list[tuple[Program, UnknownTraceMap]]:
        """Decides the structure of the program and the decomposition of the traces.
        Arguments:
            grammar: The grammar to use for the decomposition.
            guard_combination: The guard to use for the decomposition. Could be multiple guards for while loops.
            traces: The traces to decompose.
        Returns:
            A list of tuples of the form (program, trace_map) where program is the program
            and trace_map is the mapping from unknown nodes to traces.
        """

        assert all(
            guard.val is None and guard.line_number is None
            for guard in guard_combination
        ), "can only take guard src"

        head, *tail = guard_combination  # type: ignore
        if tail:
            checks = self.multi_checks # type: ignore
            guard = guard_combination
        else:
            checks = self.single_checks  # type: ignore
            guard = head  # type: ignore

        for check in checks:
            result: Optional[tuple[Program, UnknownTraceMap]] | list[
                tuple[Program, UnknownTraceMap]
            ]
            result = check(grammar, guard, traces) # type: ignore
            if result is None or not result:
                continue
            elif isinstance(result, list):
                return result
            else:
                return [result]

        return []

    def _dsd_while_swapped(
        self,
        grammar: Grammar,
        guard: TraceSource,
        traces: tuple[Subtrace, ...],
    ) -> list[tuple[Program, UnknownTraceMap]]:
        return self._dsd_while(grammar, guard, traces, True)

    def _dsd_while(
        self,
        grammar: Grammar,
        guard: TraceSource,
        traces: tuple[Subtrace, ...],
        swap: bool = False,
    ) -> list[tuple[Program, UnknownTraceMap]]:
        return self._dsd_while_1a(grammar, guard, traces, swap)

    def _dsd_while_1a(
        self,
        grammar: Grammar,
        guard: TraceSource,
        traces: tuple[Subtrace, ...],
        swap: bool = False,
    ) -> list[tuple[Program, UnknownTraceMap]]:
        """Decides the structure and decomposition of a while loop."""
        assert isinstance(guard, TraceSource), "can only take single guard"

        true_guard = replace(guard, val=not swap)
        false_guard = replace(guard, val=swap)

        # check regex for while loop: ([g](T-g))+ [-g]
        is_basic_loop = all(
            any(x.source == false_guard for x in trace) or
            statement_is_return(trace[-1].source.src)
            for trace in traces
        )
        for trace in traces:
            if not any(x.source == false_guard for x in trace):
                if has_at_least((x for x in trace if x.source == true_guard), 2):
                    break
            else:
                true_guards_before_false_guard = filter(
                    lambda t: t.source == true_guard,
                    takewhile(lambda t: t.source != false_guard, trace),
                )
                if has_at_least(true_guards_before_false_guard, 1):
                    break
        else:
            return None

        is_true_guard = lambda m: m.next.source == true_guard
        is_false_guard = lambda m: m.next.source == false_guard
        while_body_pattern = (
            is_true_guard,
            ore.repeat(lambda m: m.next.source != guard, min_n=0),
            ore.either(
                ore.end(), ore.lookahead(is_true_guard), ore.lookahead(is_false_guard)
            ),
        )

        all_stmts_after_false_guard_per_trace = [
            list(
                islice(
                    dropwhile(lambda x: x != false_guard, (t.source for t in st)),
                    1,
                    None,
                )
            )
            for st in traces
            if any(x.source == false_guard for x in st)
        ]

        possible_anchor_stmts = sequence_intersection(
            all_stmts_after_false_guard_per_trace
        )
        if is_basic_loop:
            if false_guard in possible_anchor_stmts:
                # hack for consecutive loops with same guard
                # possible_anchor_stmts.remove(false_guard)
                # possible_anchor_stmts = [false_guard] + possible_anchor_stmts[:1]

                # TODO: this is a hack to make the consecutive loops with same guard work
                # but theoretically we should change `group_result = ...` part
                pass
            else:
                possible_anchor_stmts = [false_guard]

        reduced_anchor_stmts = []
        anchor_vars: set[tuple[TraceSourceKind, str]] = set()
        for stmt in possible_anchor_stmts:
            if stmt is None:
                continue
            
            used_vars_in_stmt = {(stmt.kind, v) for v in self.used_vars.get(stmt.src, [])}
            if not used_vars_in_stmt:
                used_vars_in_stmt = {(stmt.kind, "@@__non_existent_var__@@")}
            if used_vars_in_stmt.difference(anchor_vars):
                reduced_anchor_stmts.append(stmt)
                anchor_vars.update(used_vars_in_stmt)
        possible_anchor_stmts = reduced_anchor_stmts

        if not is_basic_loop:
            possible_anchor_stmts = possible_anchor_stmts + [None]

        partial_sketches = []
        for anchor_stmt in possible_anchor_stmts:
            while_body_traces: list[Subtrace] = []
            subsequent_traces: list[Subtrace] = []
            for trace in traces:
                anchor_stmt_in_trace = anchor_stmt is not None and any(
                    it.source == anchor_stmt for it in trace
                )
                if anchor_stmt_in_trace:
                    group_result = tuple(
                        (b, tuple(reversed(tuple(g))))
                        for b, g in groupby(
                            reversed(trace),
                            lambda x: x.source != anchor_stmt,
                        )
                    )[:2]
                    if len(group_result) < 2:
                        break
                    (has_subseq, subseq_or_anchor_st), (no_subseq, rest_or_anchor) = group_result
                    assert has_subseq != no_subseq
                    subseq_st = rest_or_anchor + subseq_or_anchor_st if has_subseq and rest_or_anchor[0].source != false_guard else subseq_or_anchor_st
                    if not (no_subseq and anchor_stmt == false_guard):
                        subsequent_traces.append(subseq_st)

                while_subtrace = (
                    trace
                    if not anchor_stmt_in_trace
                    else tuple(
                        reversed(
                            tuple(
                                dropwhile(
                                    lambda x: x.source != anchor_stmt, reversed(trace)
                                )
                            )
                        )
                    )[:-1]
                )

                while_body_subtraces: list[tuple[SlimTraceItem, ...]] = []
                for match in ore.searchall(while_body_pattern, while_subtrace):  # type: ignore
                    result = list(match.matched[1:])
                    if not statement_contains_control_flow(
                        result[-1].source.src
                    ) and not (
                        match.has_next
                        and match.next.source in {true_guard, false_guard}
                    ) and not (anchor_stmt == false_guard and anchor_stmt_in_trace):
                        result.append(
                            replace(
                                result[-1],
                                source=TraceSource(
                                    src="break;", kind=TraceSourceKind.STATEMENT
                                ),
                                pre_state=result[-1].post_state,
                            )
                        )
                    while_body_subtraces.append(tuple(result))
                if while_body_subtraces:
                    while_body_traces.extend(
                        filter(
                            lambda st: self._while_body_subtrace_is_valid(st, (guard,)),
                            while_body_subtraces,
                        )
                    )
                    if not self._while_body_subtrace_is_valid(
                        while_body_subtraces[-1], (guard,)
                    ) and statement_contains_control_flow(
                        while_body_subtraces[-1][-1].source.src
                    ):
                        while_body_traces.append(while_body_subtraces[-1])
            
            # heuristic: while (g) { ... break; } is not a proper loop
            # should be replaced with if (g) { ... }
            if not while_body_traces or all(t[-1].source.src == "break;" for t in while_body_traces):
                continue

            # expand to Seq(While(guard, ?[P]), ?[P])
            subprog = Program(grammar.start)
            if subsequent_traces:
                subprog.expand(subprog.leftmost_unknown().id, grammar.get_prod("Seq"))  # type: ignore
            subprog.expand(subprog.leftmost_unknown().id, grammar.get_prod("While"))  # type: ignore
            subprog.expand(
                subprog.leftmost_unknown().id,  # type: ignore
                Production(SOURCE_GUARD_NONTERM, SOURCE_GUARD_NAME, [GuardSpec((guard.src,), swap)]),  # type: ignore
            )

            if subsequent_traces:
                subsequent_node_idx, while_body_node_idx = subprog.unknowns
                while_body_node, subsequent_node = (
                    subprog.nodes[while_body_node_idx],  # type: ignore
                    subprog.nodes[subsequent_node_idx],  # type: ignore
                )
                assert isinstance(while_body_node, UnknownNode)
                assert isinstance(subsequent_node, UnknownNode)

                partial_sketches.append(
                    (
                        subprog,
                        {
                            while_body_node: tuple(while_body_traces),
                            subsequent_node: tuple(subsequent_traces),
                        },
                    )
                )
            else:
                while_body_node = subprog.leftmost_unknown()  # type: ignore
                assert isinstance(while_body_node, UnknownNode)
                partial_sketches.append(
                    (subprog, {while_body_node: tuple(while_body_traces)})
                )

        return partial_sketches

    def _dsd_if_else(
        self, grammar: Grammar, guard: TraceSource, traces: tuple[Subtrace, ...]
    ) -> list[tuple[Program, UnknownTraceMap]]:
        assert isinstance(guard, TraceSource), "can only take single guard"

        true_guard = replace(guard, val=True)
        false_guard = replace(guard, val=False)

        if not ControlFlowSketchEnumerator._test_guard_is_if_or_ite(
            true_guard, false_guard, traces
        ):
            return None

        num_true_traces = sum(
            1
            for _ in filter(
                lambda st: any(it.source == true_guard for it in st), traces
            )
        )
        num_false_traces = sum(
            1
            for _ in filter(
                lambda st: any(it.source == false_guard for it in st), traces
            )
        )

        assert num_true_traces + num_false_traces == len(
            traces
        ), "Should be either true or false guard"

        # try to decide the first statement that is out of the scope of if-else
        # we enumerate all possible first statements

        possible_anchor_stmts: Optional[list[Optional[TraceSource]]] = None
        for st in traces:
            stmts_after_guard = list(
                islice(dropwhile(lambda x: x != guard, (t.source for t in st)), 1, None)
            )
            if possible_anchor_stmts is None:
                possible_anchor_stmts = stmts_after_guard  # type: ignore
            else:
                possible_anchor_stmts = [
                    x for x in possible_anchor_stmts if x in stmts_after_guard
                ]
        assert possible_anchor_stmts is not None

        reduced_anchor_stmts = []
        anchor_vars: set[tuple[TraceSourceKind, str]] = set()
        for stmt in possible_anchor_stmts:
            if stmt is None:
                continue

            # heuristic: for any subsequent common statement
            # if two statements uses exactly the same variables and are the same type
            # then we can merge them
            # why we need type: gcd flattened. haven't investigated
            used_vars_in_stmt = {(stmt.kind, v) for v in self.used_vars.get(stmt.src, [])}
            if not used_vars_in_stmt:
                used_vars_in_stmt = {(stmt.kind, "@@__non_existent_var__@@")}
            if used_vars_in_stmt.difference(anchor_vars):
                reduced_anchor_stmts.append(stmt)
                anchor_vars.update(used_vars_in_stmt)
        possible_anchor_stmts = reduced_anchor_stmts + [None]
        

        partial_sketches = []
        for anchor_stmt_entry in possible_anchor_stmts:
            anchor_stmt = (
                anchor_stmt_entry.without_ln_and_val() if anchor_stmt_entry else None
            )

            ite_body_traces = []
            ite_else_traces = []
            subsequent_traces = []
            for st in traces:
                # decide structure from backward
                # first check if subsequent traces exist
                if anchor_stmt is not None:
                    assert any(it.source == anchor_stmt for it in st), "by definition"
                    (has_subseq, subseq_or_anchor_st), (_, anchor_if_has_subseq) = tuple(
                        (b, tuple(reversed(tuple(g))))
                        for b, g in groupby(
                            reversed(st),
                            lambda x: x.source != anchor_stmt,
                        )
                    )[:2]
                    subseq_st = anchor_if_has_subseq + subseq_or_anchor_st if has_subseq else subseq_or_anchor_st
                    subsequent_traces.append(subseq_st)

                # then check if ite body or else exists
                ite_st = (
                    st
                    if anchor_stmt is None
                    else tuple(
                        reversed(
                            tuple(
                                dropwhile(
                                    lambda x: x.source != anchor_stmt, reversed(st)
                                )
                            )
                        )
                    )[:-1]
                )

                if any(it.source == true_guard for it in ite_st):
                    ite_body_traces.append(
                        tuple(dropwhile(lambda x: x.source != true_guard, ite_st))[1:]
                    )
                elif any(it.source == false_guard for it in ite_st):
                    ite_else_traces.append(
                        tuple(dropwhile(lambda x: x.source != false_guard, ite_st))[1:]
                    )
                else:
                    raise ValueError("should not happen")

            subsequent_traces = list(filter(None, subsequent_traces))
            ite_body_traces = list(filter(None, ite_body_traces))
            ite_else_traces = list(filter(None, ite_else_traces))
            if not ite_body_traces:
                continue

            # optimize: convert `if (C) { ... return; } else { ... }` to `if (C) { ... return; } ...`
            if not subsequent_traces and ite_else_traces:
                if ite_body_traces and all(
                    statement_is_return(t[-1].source.src) for t in ite_body_traces
                ):
                    subsequent_traces = ite_else_traces
                    ite_else_traces = tuple()

            trace_map = {}
            subprog = Program(grammar.start)
            current_unknown_id = subprog.leftmost_unknown().id

            # decide if we need to expand subsequent statements
            if subsequent_traces and not self._branch_trace_likely_to_be_bogus(subsequent_traces):
                subprog.expand(current_unknown_id, grammar.get_prod("Seq"))
                current_unknown_id, subsequent_node_id = subprog.unknowns
                trace_map[subprog.nodes[subsequent_node_id]] = tuple(subsequent_traces)

            # expand the if/if-else body
            if not ite_body_traces and not ite_else_traces:
                continue
            elif ite_body_traces and ite_else_traces and not self._branch_trace_likely_to_be_bogus(ite_else_traces):
                subprog.expand(current_unknown_id, grammar.get_prod("ITE"))
                subprog.expand(
                    subprog.leftmost_unknown().id,
                    Production(
                        SOURCE_GUARD_NONTERM,
                        SOURCE_GUARD_NAME,
                        [GuardSpec((guard.src,))],
                    ),
                )
                *_, ite_body_node_id, ite_else_node_id = subprog.unknowns
                trace_map[subprog.nodes[ite_body_node_id]] = tuple(ite_body_traces)
                trace_map[subprog.nodes[ite_else_node_id]] = tuple(ite_else_traces)
            else:
                subprog.expand(current_unknown_id, grammar.get_prod("If"))
                subprog.expand(
                    subprog.leftmost_unknown().id,
                    Production(
                        SOURCE_GUARD_NONTERM,
                        SOURCE_GUARD_NAME,
                        [GuardSpec((guard.src,))],
                    ),
                )
                *_, if_body_node_id = subprog.unknowns
                trace_map[subprog.nodes[if_body_node_id]] = (
                    tuple(ite_body_traces)
                    if ite_body_traces
                    else tuple(ite_else_traces)
                )
                if not ite_body_traces:
                    print(
                        "Warning: if-else body is empty; the trace executor does not support this case yet."
                    )
            partial_sketches.append((subprog, trace_map))

        return partial_sketches

    def _dsd_while_conj(
        self,
        grammar: Grammar,
        guards: tuple[TraceSource, ...],
        traces: tuple[Subtrace, ...],
        swap: bool = False,
    ) -> Optional[tuple[Program, UnknownTraceMap]]:
        """Enumerate a sketch for a while loop that uses conjunctions of guards."""
        assert (
            isinstance(guards, tuple) and len(guards) > 1
        ), "can only take multiple guards"

        true_guards = tuple(replace(guard, val=not swap) for guard in guards)
        false_guards = tuple(replace(guard, val=swap) for guard in guards)

        # need to relax the constraint that all traces must have
        # because guards can share subexprs (e.g., simple3.c)
        # Test true guards occur at least once before false guards
        for trace in traces:
            guard_occur = Counter(
                x.without_ln_and_val()
                for x in takewhile(lambda x: x not in false_guards, _sources(trace))
                if x in true_guards
            )
            if all(guard_occur[g.without_ln_and_val()] > 1 for g in true_guards):
                break
        else:
            return None

        # expand to Seq(While(guard, ?[P]), ?[P])
        subprog = Program(grammar.start)
        subprog.expand(subprog.leftmost_unknown().id, grammar.get_prod("Seq"))
        subprog.expand(subprog.leftmost_unknown().id, grammar.get_prod("While"))
        subprog.expand(
            subprog.leftmost_unknown().id,
            Production(
                SOURCE_GUARD_NONTERM,
                SOURCE_GUARD_NAME,
                [
                    GuardSpec(
                        tuple(s.src for s in guards), swap, GuardCompositionType.AND
                    )
                ],
            ),
        )

        subsequent_node_id, while_body_node_id = subprog.unknowns
        while_body_node, subsequent_node = (
            subprog.nodes[while_body_node_id],
            subprog.nodes[subsequent_node_id],
        )

        all_body_subtraces: list[Subtrace] = []
        all_subsequent_stmts: list[Subtrace] = []

        for trace in traces:
            while_body_subtraces: list[Subtrace] = []
            subsequent_stmts: list[SlimTraceItem] = []

            entered_loop_body = False
            next_guard_idx = 0
            may_exit_loop = False

            current_subtrace: list[SlimTraceItem] = []
            for x in trace:
                if x.source == false_guards[next_guard_idx]:
                    may_exit_loop = True
                if may_exit_loop:
                    subsequent_stmts.append(x)

                elif x.source == true_guards[next_guard_idx]:
                    entered_loop_body = True
                    next_guard_idx = (next_guard_idx + 1) % len(true_guards)
                    if next_guard_idx == 0 and current_subtrace:
                        while_body_subtraces.append(tuple(current_subtrace))
                        current_subtrace = []
                        may_exit_loop = False
                        subsequent_stmts.clear()

                elif next_guard_idx == 0 and entered_loop_body:
                    current_subtrace.append(x)

            if current_subtrace:
                while_body_subtraces.append(tuple(current_subtrace))

            all_body_subtraces.extend(
                filter(
                    lambda st: self._while_body_subtrace_is_valid(st, guards),
                    while_body_subtraces,
                )
            )
            all_subsequent_stmts.append(tuple(subsequent_stmts[1:]))

        return subprog, {
            while_body_node: tuple(filter(None, all_body_subtraces)),
            subsequent_node: tuple(filter(None, all_subsequent_stmts)),
        }

    def _dsd_while_conj_swapped(
        self,
        grammar: Grammar,
        guards: tuple[TraceSource, ...],
        traces: tuple[Subtrace, ...],
    ) -> Optional[tuple[Program, UnknownTraceMap]]:
        return self._dsd_while_conj(grammar, guards, traces, swap=True)

    @staticmethod
    def _test_guard_is_if_or_ite(
        true_guard: TraceSource, false_guard: TraceSource, traces: tuple[Subtrace, ...]
    ) -> bool:
        assert isinstance(true_guard, TraceSource) and isinstance(
            false_guard, TraceSource
        ), "can only take single guard"

        occurrence = set()
        # test if g/-g appears exactly once for each trace
        for trace in traces:
            true_occur = sum(1 for _ in filter(lambda x: x.source == true_guard, trace))
            false_occur = sum(
                1 for _ in filter(lambda x: x.source == false_guard, trace)
            )
            if true_occur > 0 and false_occur > 0:
                return False  # likely not an if/ite if both true and false occur
            if true_occur > 1:
                return False
            if true_occur:
                occurrence.add("T")
            if false_occur:
                occurrence.add("F")

        # g is mostly belong to some deadcode; reject it
        return len(occurrence) == 2

    def _reduce_program_node(
        self, prog: Program, node: None, delete_node: Callable[[Node], bool]
    ) -> Node | None:
        match node:
            case UnknownNode():
                assert node is not None
                if delete_node(node):
                    return None

            case ValueNode(val="Seq"):
                child_1, child_2 = prog.children[node.id]
                child_1_reduced = self._reduce_program_node(
                    prog, prog[child_1], delete_node
                )
                child_2_reduced = self._reduce_program_node(
                    prog, prog[child_2], delete_node
                )

                match (child_1_reduced, child_2_reduced):
                    case (None, None):
                        return None
                    case (None, c) | (c, None):
                        return c
                    case (c1, c2):
                        assert c1 is not None and c2 is not None
                        if c1 is not prog[child_1]:
                            prog.replace(child_1, c1.id)

                        if c2 is not prog[child_2]:
                            prog.replace(child_2, c2.id)

            case ValueNode(val="ITE"):
                _, true_branch, false_branch = prog.children[node.id]
                true_branch_reduced = self._reduce_program_node(
                    prog, prog[true_branch], delete_node
                )
                false_branch_reduced = self._reduce_program_node(
                    prog, prog[false_branch], delete_node
                )

                match true_branch_reduced, false_branch_reduced:
                    case None, None:
                        return None
                    case None, _:
                        if_node = ValueNode(node.id, self.grammar.get_prod("If"), "If")
                        prog.nodes[node.id] = if_node
                        prog.children[node.id].remove(true_branch)
                        assert len(prog.children[node.id]) == 2
                        del prog[true_branch]

                        if node is prog.root:
                            prog.root = if_node
                        node = if_node
                    case _, None:
                        if_node = ValueNode(node.id, self.grammar.get_prod("If"), "If")
                        prog.nodes[node.id] = if_node
                        prog.children[node.id].remove(false_branch)
                        assert len(prog.children[node.id]) == 2
                        del prog[false_branch]

                        if node is prog.root:
                            prog.root = if_node
                        node = if_node

            case ValueNode(val="If"):
                _, true_branch = prog.children[node.id]
                true_branch_reduced = self._reduce_program_node(
                    prog, prog[true_branch], delete_node
                )
                if true_branch_reduced is None:
                    return None

                if true_branch_reduced is not prog[true_branch]:
                    prog.replace(true_branch, true_branch_reduced.id)

            case ValueNode(val="While"):
                _, body = prog.children[node.id]
                body_reduced = self._reduce_program_node(prog, prog[body], delete_node)
                if body_reduced is None:
                    return None

                if body_reduced is not prog[body]:
                    prog.replace(body, body_reduced.id)

        return node

    def _dsd_while_disj(
        self,
        grammar: Grammar,
        guards: tuple[TraceSource, ...],
        traces: tuple[Subtrace, ...],
        swap: bool = False,
    ) -> Optional[tuple[Program, UnknownTraceMap]]:
        """Enumerate a sketch for a while loop that uses disjunctions of guards."""
        assert (
            isinstance(guards, tuple) and len(guards) > 1
        ), "can only take multiple guards"

        true_guards = tuple(replace(guard, val=not swap) for guard in guards)
        false_guards = tuple(replace(guard, val=swap) for guard in guards)

        # Suppose the guards are G1, G2, ..., Gn.
        # Pattern:  -G1, -G2, ...-G{i-1}, G{i}, ..., Gn at each evaluation
        #           and the final evaluation is -G1, -G2, ..., -Gn
        for trace in traces:
            # start with the end
            guard_idx = len(guards) - 1
            for i, st in enumerate(reversed(trace)):
                if guard_idx < -1:
                    return None
                if st.source == false_guards[guard_idx]:
                    guard_idx -= 1
                elif st.source == true_guards[guard_idx]:
                    break
            if guard_idx != -1:
                return None  # not a while loop

            guard_idx = -1
            expect_false_guard = False
            for st in reversed(trace[:-i]):
                if st.source not in guards:
                    continue

                if guard_idx == -1:
                    expect_false_guard = False
                    guard_idx = guards.index(st.source)

                if expect_false_guard and st.source == false_guards[guard_idx]:
                    guard_idx -= 1

                elif not expect_false_guard and st.source == true_guards[guard_idx]:
                    guard_idx -= 1
                    expect_false_guard = True

                else:
                    return None  # not a while loop

        # expand to Seq(While(guard, ?[P]), ?[P])
        subprog = Program(grammar.start)
        subprog.expand(subprog.leftmost_unknown().id, grammar.get_prod("Seq"))
        subprog.expand(subprog.leftmost_unknown().id, grammar.get_prod("While"))
        subprog.expand(
            subprog.leftmost_unknown().id,
            Production(
                SOURCE_GUARD_NONTERM,
                SOURCE_GUARD_NAME,
                [
                    GuardSpec(
                        tuple(s.src for s in guards), swap, GuardCompositionType.OR
                    )
                ],
            ),
        )

        subsequent_node_id, while_body_node_id = subprog.unknowns
        while_body_node, subsequent_node = (
            subprog.nodes[while_body_node_id],
            subprog.nodes[subsequent_node_id],
        )

        all_body_subtraces: list[Subtrace] = []
        all_subsequent_stmts: list[Subtrace] = []

        for trace in traces:
            while_body_subtraces: list[Subtrace] = []
            subsequent_stmts: list[SlimTraceItem] = []

            entered_loop_body = False
            next_guard_idx = 0
            may_exit_loop = False

            current_subtrace: list[SlimTraceItem] = []
            for x in trace:
                if next_guard_idx == len(true_guards):
                    may_exit_loop = True
                if may_exit_loop:
                    subsequent_stmts.append(x)

                elif x.source == false_guards[next_guard_idx]:
                    entered_loop_body = False
                    next_guard_idx = next_guard_idx + 1

                elif x.source == true_guards[next_guard_idx]:
                    entered_loop_body = True
                    next_guard_idx = 0
                    if current_subtrace:
                        while_body_subtraces.append(tuple(current_subtrace))
                        current_subtrace.clear()
                        may_exit_loop = False
                        subsequent_stmts.clear()

                elif next_guard_idx == 0 and entered_loop_body:
                    current_subtrace.append(x)

            if current_subtrace:
                while_body_subtraces.append(tuple(current_subtrace))

            all_body_subtraces.extend(
                filter(
                    lambda st: self._while_body_subtrace_is_valid(st, guards),
                    while_body_subtraces,
                )
            )
            if subsequent_stmts and any(g == subsequent_stmts[-1] for g in guards):
                subsequent_stmts.pop(0)
            all_subsequent_stmts.append(tuple(subsequent_stmts))

        return subprog, {
            while_body_node: tuple(filter(None, all_body_subtraces)),
            subsequent_node: tuple(filter(None, all_subsequent_stmts)),
        }

    def _dsd_while_disj_swapped(
        self,
        grammar: Grammar,
        guards: tuple[TraceSource, ...],
        traces: tuple[Subtrace, ...],
    ) -> Optional[tuple[Program, UnknownTraceMap]]:
        return self._dsd_while_disj(grammar, guards, traces, swap=True)

    def reduce_from_stmt_map(
        self, program: Program, trace_map: dict[UnknownNode, list[Trace]]
    ) -> Optional[Program]:
        """
        Reduce the sketch by removing unnecessary nodes
        """

        reduced = self._reduce_program_node(
            program, program.root, lambda n: n not in trace_map
        )
        if reduced is None:
            return None

        program.root = program.nodes[reduced.id]
        return program

    def _make_sketch_explicit(self, sketch: ControlFlowSketch) -> ControlFlowSketch:
        """Add explicit unknowns to the given sketch."""
        # recover unknowns to the program
        prog = sketch.prog
        prog.unknowns += [
            i for i, node in prog.nodes.items() if isinstance(node, UnknownNode)
        ]

        implicit_hole_nodes = [k for k in sketch.stmt_map if isinstance(k, ValueNode)]

        # add explicit unknowns to the sketch
        # and convert unk_map from valuenodes to corresponding explicit unknowns
        for k in implicit_hole_nodes:
            assert isinstance(k, ValueNode)

            parent_id = prog.parent.get(k.id, -1)

            # swap Original with Seq_1(??, Original)
            # need refactor in the future
            new_seq_node = ValueNode(-1, self.grammar.get_prod("Seq"), "Seq")
            new_unk_node = UnknownNode(-1, self.grammar.start)
            prog.add_node(new_seq_node, parent_id)
            prog.add_node(new_unk_node, new_seq_node.id)
            prog.parent[k.id] = new_seq_node.id
            prog.children[new_seq_node.id].append(k.id)
            prog.unknowns.append(new_unk_node.id)

            if parent_id != -1:
                prog.children[parent_id].remove(k.id)

            sketch.stmt_map[new_unk_node] = sketch.stmt_map.pop(k)

        return sketch

    def _while_body_subtrace_is_valid(
        self, st: Subtrace, guards: tuple[TraceSource, ...]
    ) -> bool:
        """Test if the given subtrace has updates to the guard variables."""
        guard_vars = set(chain.from_iterable(self.used_vars[g.src] for g in guards))
        has_updated_cond_vars = any(
            bool(self.left_vars[s.source.src].intersection(guard_vars)) for s in st
        )
        has_control_flow = statement_is_return(st[-1].source.src)
        return has_updated_cond_vars or has_control_flow
    
    @staticmethod
    def _branch_trace_likely_to_be_bogus(subtraces) -> bool:
        """Check if the given branch trace is likely to be bogus."""
        common_stmts_src = (
            set.intersection(
                *(
                    # need also consider guard because if/ITE may have same stmts
                    {entry.source.src for entry in trace}
                    for trace in subtraces
                )
            )
            if subtraces
            else set()
        )
        return len(common_stmts_src) == 0

    @staticmethod
    def _sketch_has_return_on_all_paths(sketch: ControlFlowSketch, node: Node, strict_return: bool=True) -> bool:
        """Check if the sketch has a return statement on all paths."""

        prog = sketch.prog

        match node:
            case ValueNode(val="Seq"):
                child_1_idx, child_2_idx = prog.children[node.id]
                return ControlFlowSketchEnumerator._sketch_has_return_on_all_paths(
                    sketch, prog.nodes[child_1_idx], strict_return=strict_return
                ) or ControlFlowSketchEnumerator._sketch_has_return_on_all_paths(
                    sketch, prog.nodes[child_2_idx], strict_return=strict_return
                )

            case ValueNode(val="ITE"):
                _, true_branch_idx, false_branch_idx = prog.children[node.id]
                return ControlFlowSketchEnumerator._sketch_has_return_on_all_paths(
                    sketch, prog.nodes[true_branch_idx], strict_return=strict_return
                ) and ControlFlowSketchEnumerator._sketch_has_return_on_all_paths(
                    sketch, prog.nodes[false_branch_idx], strict_return=strict_return
                )

            case ValueNode(val="If"):
                if strict_return:
                    return False
                else:
                    return ControlFlowSketchEnumerator._sketch_has_return_on_all_paths(
                        sketch, prog.nodes[prog.children[node.id][1]],
                        strict_return=strict_return
                    )

            case ValueNode(val="While"):
                return ControlFlowSketchEnumerator._sketch_has_return_on_all_paths(
                    sketch, prog.nodes[prog.children[node.id][1]],
                    strict_return=False
                )

            case ValueNode(id=id):
                return all(
                    ControlFlowSketchEnumerator._sketch_has_return_on_all_paths(
                        sketch, prog.nodes[c], strict_return=strict_return
                    )
                    for c in prog.children[id]
                )

            case UnknownNode(id=id):
                check_func = all if strict_return else any
                if node in sketch.stmt_map:
                    return check_func(
                        statement_is_return(st[-1].source.src)
                        for st in sketch.stmt_map[node]
                    )
                elif node in sketch.trace_map:
                    return check_func(
                        any(statement_is_return(s.source.src) for s in st)
                        for st in sketch.trace_map[node]
                    )
                else:
                    return False

            case _:
                assert False, "impossible path"

    @staticmethod
    def get_variable_dependency_closure(
        sk: ControlFlowSketch,
        used_vars: dict[str, set[str]],
        decl_vars: dict[str, set[str]],
        initial_mvs: set[str],
        max_depth=5,
    ) -> set[str]:
        """
        Get the closure of the variable dependencies.
        """
        all_stmts = {
            trace_item.source.src
            for _, st in sk.stmt_map.items()
            for t in st
            for trace_item in t
        }
        mvs = initial_mvs.copy()

        for _ in range(max_depth):
            relevant_stmts = {
                s
                for s in all_stmts
                if any(v in mvs for v in used_vars[s])
                or any(v in mvs for _, v in decl_vars[s])
            }
            relevant_vars = {
                v for s in relevant_stmts for v in used_vars[s] if v not in mvs
            }

            if relevant_vars:
                mvs.update(relevant_vars)
            else:
                break
        return mvs
