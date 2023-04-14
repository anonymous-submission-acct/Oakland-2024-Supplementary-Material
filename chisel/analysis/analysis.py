from typing import *

from trace import Trace

class Analysis():
    """Parent class for program analyses."""

    def get_decl_vars(self, stmts: List[str]) -> Dict[str, Tuple[str,str]]:
        """ Get the list of variables declared per statement passed as an argument.

        Arguments:
        stmts ([str]) -- list of statements

        Returns
        decl_vars ({str: {str}) -- mapping from statements to variables
        """
        raise NotImplementedError

    def get_guards(self, prog: str, traces: List[Trace]) -> List[str]:
        """ Extract guards from given program.

        Arguments:
        prog (str) -- C program
        traces ([Trace]) -- program traces

        Returns
        guards ([str]) -- guards extracted from prog
        """
        raise NotImplementedError

    def get_stmts(self, prog: str, traces: List[Trace]) -> List[str]:
        """ Extract stmts from given program.

        Arguments:
        prog (str) -- C program
        traces ([Trace]) -- program traces

        Returns
        stmts ([str]) -- stmts extracted from prog
        """
        raise NotImplementedError

    def get_guards_and_stmts(self, prog: str, traces: List[Trace]):
        """ Retrieve guards and statements from program.

        Arguments:
        prog (str) -- program
        traces ([Trace]) -- program traces

        Returns:
        guards ([str]) -- program guards
        stmts ([str]) -- program statements
        """
        return self.get_guards(prog, traces), self.get_stmts(prog, traces)

    def get_guards_and_stmts_from_path(self, prog_path: str, traces: List[Trace]):
        """ Retrieve guards and statements from program.

        Arguments:
        prog_path (str) -- path to program
        traces ([Trace]) -- program traces

        Returns:
        guards ([str]) -- program guards
        stmts ([str]) -- program statements
        """
        with open(prog_path, "r") as f:
            prog = f.read()

        return self.get_guards_and_stmts(prog, traces)
