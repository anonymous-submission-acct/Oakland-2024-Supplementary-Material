from __future__ import annotations

import os
import tempfile
from subprocess import CalledProcessError
from subprocess import run as subprocess_run
from contextlib import contextmanager


@contextmanager
def compile_c_program(src_path: str) -> str:
    """
    Compile a C program and return the path to the executable.
    Use `with` statements to automatically remove the output file.

    Arguments:
    src_path (str) -- Path to the C source file

    Returns:
    exe_path (str) -- Path to the compiled executable; None if compilation failed
    """
    try:
        # create temp file for the executable
        # remove it beforehand to avoid GDB exit code 126
        _, out_path = tempfile.mkstemp()
        os.remove(out_path)
        import time
        start = time.time()
        result = subprocess_run(["gcc", "-g", "-O0", "-o", out_path, src_path],
                                capture_output=True, check=True, timeout=10, encoding="utf-8")
        total = time.time()-start
        if src_path.startswith("/tmp"):
            # print(" ".join(["gcc", "-g", "-O0", "-o", out_path, src_path]))
            # print(total)
            with open(src_path, "r") as f:
                src = f.read()
            if "trace" in src and total > 1:
                with open("tmp.c", "w") as f:
                    f.write(src)
        #     raise Exception()
        assert result.returncode == 0
        yield out_path
    except CalledProcessError as ex:
        print(ex.stdout)
        print(ex.stderr)
        raise
    finally:
        try:
            os.remove(out_path)
        except:
            pass
