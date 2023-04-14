import time
from typing import *

from args import get_cline_args
from extractor.utils import compile_c_program
from langs.c.c_formatter import CFormatter
from langs.c.c_runner import CRunner
from program import Program
from pruners import Pruner
from stats import Stats
from trace import Trace
from utils import statement_is_return

class CTracePruner(Pruner):
    """Checker for trace property on C programs."""

    def __init__(self):
        self.runner = CRunner()
        self.formatter = CFormatter()
        self.cache = {}
        self.idx = 0

    def prune(self, p1: Program, p2_path: str, traces: List[Trace], inputs: List[Any], stats: Stats, allow_return: bool=False) -> bool:
        """ Checks if the partial program can be pruned.

        Arguments:
        p1 (Program) -- first program
        p2_path (str) -- path to second program
        traces ([Trace]) -- list of traces to use for checking equality
        inputs ([Any]) -- list of input argument values
        stats (Stats) -- object to track statistics

        allow_return -- this is for enumerative search without decomposition over a complete sketch
        `trace_run_check` will return a tuple of (safe, trace_end) but `trace_run` requires the trace to be *incomplete*
        for an *incomplete* program. So we need to allow the program to return if the program looks like below:
        if (g) {return 0;} else {return 1;}

        Returns:
        check (bool) -- true if should be pruned, false otherwise
        """
        prune_start = time.time()
        cache_key = str(p1)
        if cache_key in self.cache:
            stats.num_trace_pruned_cached += 1
            if self.cache[cache_key]:
                stats.num_trace_pruned += 1
                stats.trace_pruned.append(p1)
                return True
            else:
                return False
        for ins, trace in zip(inputs, traces):
            try:
                safe, complete, _ = self.runner.trace_run_check(p1, ins, trace, allow_var_pruning=True)
                if not safe:
                    succeed = False
                else:
                    if not complete:
                        succeed = True
                    else:
                        succeed = allow_return and statement_is_return(trace.sources[-1].src)
            except SyntaxError as e:
                succeed = False # NOTE: Prune syntax errors?

            if not succeed:
                self.cache[cache_key] = True
                stats.num_trace_pruned += 1
                stats.trace_pruned.append(p1)
                stats.trace_pruned_times.append(time.time()-prune_start)
                stats.num_trace_pruned_assert += 1
                stats.trace_pruned_assert.append(p1)
                stats.trace_pruned_assert_times.append(time.time()-prune_start)

                return True
        self.cache[cache_key] = False
        return False

