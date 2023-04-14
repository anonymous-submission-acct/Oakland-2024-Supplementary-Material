import random
from typing import *

from program import Program
from search_models.search_model import SearchModel
from stats import Stats

class RandomSearchModel(SearchModel):
    """Model for randomly choosing program order"""

    def priority(self, prog: Program, stats: Stats) -> float:
        """ Assigns a priority to the given partial program, where low score indicates high priority.

        Arguments:
        prog (Program) -- program to be assessed
        stats (Stats) -- object to track statistics

        Returns
        score (float) -- priority score (lower indicates higher priority)
        """
        return random.uniform(0,1)
