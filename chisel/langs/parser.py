from typing import *

class Parser():
    """Parent class for program parser"""

    def parse(self, src_path: str) -> Any:
        """ Parses an AST from obfuscated program at path."""
        raise NotImplementedError

    def extract_statements_from_path(self, src_path: str) -> List[Any]:
        """ Extracts statements from obfuscated program at path.

        Arguments:
        src_path (str) -- path to obfuscated program

        Returns:
        stmts ([Any]) -- list of statements extracted
        """
        raise NotImplementedError

    def extract_guards_from_path(self, src_path: str) -> List[Any]:
        """ Extracts guards from obfuscated program at path.

        Arguments:
        src_path (str) -- path to obfuscated program

        Returns:
        guards ([Any]) -- list of guards extracted
        """
        raise NotImplementedError
