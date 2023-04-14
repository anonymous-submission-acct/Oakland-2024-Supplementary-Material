from typing import *

from program import Program
from stats import Stats

class EquivalenceChecker():
    """Parent class for equivalence checking."""

    def check_eq(self, p1: Program, p2_path: str, stats: Stats):
        """ Checks if two programs are equivalent.

        Arguments:
        p1 (Program) -- first program
        p2_path (str) -- path to second program
        stats (Stats) -- object to track statistics
        """
        raise NotImplementedError

