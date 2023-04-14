from typing import *

from program import *
from trace import Trace

class Formatter():
    """Parent class for program formatter."""

    def format(self, prog: Program, trace: Trace=None) -> str:
        """ Formats the given program as a string using the given globals.
        Arguments:
        prog (Program) -- complete program to be evaluated
        trace (Trace) -- trace to instrument with if not None
        Returns:
        result (str) -- string resulting from formatting
        """
        raise NotImplementedError
