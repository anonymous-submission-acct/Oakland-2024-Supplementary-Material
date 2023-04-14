from typing import *

from program import Program
from pruners.pruner import Pruner
from stats import Stats
from trace import Trace

class NoPruner(Pruner):
    """Pruning class for performing no pruning."""

    def prune(self, prog: Program, src_path: str, traces: List[Trace], inputs: List[Any], stats: Stats) -> bool:
        """ Checks if the partial program can be pruned.

        Arguments:
        prog (Program) -- partial program to be checked
        src_path (str) -- path to obfuscated program
        traces ([Trace]) -- list of program traces
        inputs ([Any]) -- list of input argument values
        stats (Stats) -- object to track statistics

        Returns:
        check (bool) -- whether or not to prune
        """
        return False
