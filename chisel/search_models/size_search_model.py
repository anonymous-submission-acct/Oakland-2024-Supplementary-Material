import random
from typing import *

from program import Program
from search_models.search_model import SearchModel
from stats import Stats

class SizeSearchModel(SearchModel):
    """Model for choosing program order by size (smallest first)."""

    def priority(self, prog: Program, stats: Stats) -> float:
        """ Assigns a priority to the given partial program, where low score indicates high priority.

        Arguments:
        prog (Program) -- program to be assessed
        stats (Stats) -- object to track statistics

        Returns
        score (float) -- priority score (lower indicates higher priority)
        """
        return len(prog.nodes)
        # return len(prog.unknowns) # Should I make this a different search model? Probably...
