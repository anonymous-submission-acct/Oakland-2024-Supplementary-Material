from dataclasses import dataclass, field, replace
from enum import Flag, auto
from datetime import timedelta
from args import get_cline_args


class HeuristicRules(Flag):
    ITE = auto()
    WHILE = auto()
    WHILE_NEGATED = auto()
    WHILE_CONJUNCTION = auto()
    WHILE_DISJUNCTION = auto()
    WHILE_CONJUNCTION_NEGATED = auto()
    WHILE_DISJUNCTION_NEGATED = auto()


@dataclass(slots=True, frozen=True)
class HeuristicConfig:
    enabled_heuristics: HeuristicRules
    print_pruned_sketch: bool
    prog_size: int

    debug_guard_whitelist: list[str] = field(default_factory=list)
    debug_guard_blacklist: list[str] = field(default_factory=list)


@dataclass(slots=True, frozen=True)
class SynthesisConfig:
    synthesis_timeout: timedelta
    disable_trace_pruning: bool  # ablation #3 - done
    disable_decomposition: bool  # ablation #2 - done
    disable_heuristics: bool  # ablation #1a - done
    disable_heuristic_sketch_pruning: bool  # ablation #1b - done


DEFAULT_CONFIG = HeuristicConfig(
    enabled_heuristics=HeuristicRules.ITE
    | HeuristicRules.WHILE
    | HeuristicRules.WHILE_CONJUNCTION,
    print_pruned_sketch=False,
    prog_size=100,
)

MAX_GDB_GENERATION_TIME = timedelta(minutes=15).total_seconds()
MAX_GDB_SINGLE_RUN_TIME = timedelta(minutes=5).total_seconds()


def get_minimal_config() -> HeuristicConfig:
    return DEFAULT_CONFIG


def get_all_configs() -> list[HeuristicConfig]:
    return [
        DEFAULT_CONFIG,
        replace(
            DEFAULT_CONFIG,
            enabled_heuristics=HeuristicRules.ITE
            | HeuristicRules.WHILE
            | HeuristicRules.WHILE_NEGATED
            | HeuristicRules.WHILE_DISJUNCTION,
        ),
        replace(
            DEFAULT_CONFIG,
            enabled_heuristics=HeuristicRules.ITE
            | HeuristicRules.WHILE
            | HeuristicRules.WHILE_NEGATED
            | HeuristicRules.WHILE_CONJUNCTION
            | HeuristicRules.WHILE_DISJUNCTION,
        ),
    ]


def get_synthesis_config() -> SynthesisConfig:
    args = get_cline_args()
    disable_trace_pruning = False
    disable_decomposition = False
    disable_heuristics = False
    disable_heuristic_sketch_pruning = False
    timeout = timedelta(seconds=20)
    match args.ablation:
        case "1a":
            disable_heuristics = True
            timeout = timedelta(minutes=5)

            # not well defined with heuristics disabled
            disable_heuristic_sketch_pruning = True
            disable_decomposition = True
        case "1b":  # tested
            timeout = timedelta(minutes=5)
            disable_heuristic_sketch_pruning = True
        case "2":  # tested
            timeout = timedelta(minutes=5)
            disable_decomposition = True
        case "3":
            timeout = timedelta(minutes=5)
            disable_trace_pruning = True
        case None:
            pass
        case _:
            raise ValueError("Invalid ablation")
    return SynthesisConfig(
        synthesis_timeout=timeout,
        disable_trace_pruning=disable_trace_pruning,
        disable_decomposition=disable_decomposition,
        disable_heuristics=disable_heuristics,
        disable_heuristic_sketch_pruning=disable_heuristic_sketch_pruning,
    )
