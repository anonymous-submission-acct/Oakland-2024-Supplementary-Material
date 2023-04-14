from typing import *

import tempfile
import os

from langs.parser import Parser
from pycparser import parse_file

from langs.c.c_preprocessor import CPreprocessor



class CParser(Parser):
    """Class for parsing C."""

    def __init__(self) -> None:
        self.preprocessor = CPreprocessor()
        super().__init__()

    def parse(self, src_path: str) -> Any:
        # preprocess and parse AST with pycparser
        with open(src_path, "r") as f:
            code_lines = f.readlines()
        self.preprocessor._remove_tigress_jumptab(code_lines)

        fh, file_name = tempfile.mkstemp(suffix=".c")
        try:
            os.write(fh, "".join(code_lines).encode())
            os.close(fh)
            ast = parse_file(file_name, use_cpp=True, cpp_args=r"-I./resources/fake_libc_include")
        finally:
            os.remove(file_name)
        return ast
