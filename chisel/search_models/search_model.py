from typing import *

from program import Program
from stats import Stats

class SearchModel():
    """Parent class for search model to guide search."""

    def priority(self, prog: Program, stats: Stats) -> float:
        """ Assigns a priority to the given partial program, where low score indicates high priority.

        Arguments:
        prog (Program) -- program to be assessed
        stats (Stats) -- object to track statistics

        Returns
        score (float) -- priority score (lower indicates higher priority)
        """
        raise NotImplementedError
