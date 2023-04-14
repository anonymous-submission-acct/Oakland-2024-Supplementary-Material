from typing import *

from extractor.utils import compile_c_program
from langs.c.c_formatter import CFormatter
from langs.c.c_runner import CRunner
from program import Program
from stats import Stats
from trace import Trace

class CIOEquivalenceChecker():
    """Parent class for equivalence checking."""

    def __init__(self):
        self.runner = CRunner()
        self.formatter = CFormatter()
        self.idx = 0

    def check_eq(self, p1: Program, p2_path: str, traces: List[Trace], inputs: List[Any], stats: Stats) -> bool:
        """ Checks if two programs are equivalent.

        Arguments:
        p1 (Program) -- first program
        p2_path (str) -- path to second program
        traces ([Trace]) -- list of traces to use for checking equality
        inputs ([Any]) -- list of input argument values
        stats (Stats) -- object to track statistics
        """
        for ins,trace in zip(inputs, traces):
            safe, complete, pruned_vars = self.runner.trace_run_check(p1, ins, trace, allow_unk=True, allow_var_pruning=False)
            if not complete:
                return False
        return True
    
    def check_eq_pruning(self, p1: Program, traces: List[Trace]) -> set[str] | None:
        result_vars = set()
        for ins, trace in enumerate(traces):
            safe, complete, pruned_vars = self.runner.trace_run_check(p1, ins, trace, allow_unk=True, allow_var_pruning=True)
            if not complete:
                return None
            result_vars.update(pruned_vars)
        return result_vars

