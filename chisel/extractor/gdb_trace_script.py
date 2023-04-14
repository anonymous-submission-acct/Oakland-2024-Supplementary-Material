# pylint: disable=import-error, redefined-outer-name, too-few-public-methods
from argparse import Namespace
from contextlib import suppress

import tempfile

import os
import json
import time

import gdb  # type: ignore

STDOUT_VAR_NAME = "__stdout__"

# default list of functions that whenever single-stepped into,
# we should stop trace collection.
EXIT_FUNCTION_LIST = ["main"]
STEP_OUT_LIST = ["printf", "binaryAddition", "rand", "predigits", "postdigits"]

SUPPORTED_TYPES = [
    gdb.TYPE_CODE_FLAGS,
    gdb.TYPE_CODE_FUNC,
    gdb.TYPE_CODE_INT,
    gdb.TYPE_CODE_FLT,
    gdb.TYPE_CODE_VOID,
    gdb.TYPE_CODE_RANGE,
    gdb.TYPE_CODE_ERROR,
    gdb.TYPE_CODE_METHOD,
    gdb.TYPE_CODE_METHODPTR,
    gdb.TYPE_CODE_MEMBERPTR,
    gdb.TYPE_CODE_REF,
    gdb.TYPE_CODE_RVALUE_REF,
    gdb.TYPE_CODE_CHAR,
    gdb.TYPE_CODE_BOOL,
    gdb.TYPE_CODE_COMPLEX,
    gdb.TYPE_CODE_TYPEDEF,
    gdb.TYPE_CODE_DECFLOAT,
    gdb.TYPE_CODE_INTERNAL_FUNCTION,
]


def get_local_vars(frame):
    block = frame.block()
    names = set()
    while block:
        for symbol in block:
            if symbol.is_argument or symbol.is_variable:
                name = symbol.name
                if not name in names:
                    names.add(symbol)
        block = block.superblock
    return list(names)


def str_value(gdb_value, rec_values=None):
    assert isinstance(gdb_value, gdb.Value)

    if rec_values is None:
        rec_values = set()

    address = str(gdb_value.address)
    if (
        address is not None
        and address in rec_values
        and gdb_value.type.code in [gdb.TYPE_CODE_PTR, gdb.TYPE_CODE_ARRAY]
    ):
        return "RECURSIVE"
    rec_values.add(address)

    try:
        val_type = gdb_value.type.code
        if val_type == gdb.TYPE_CODE_PTR:
            return str_value(gdb_value.dereference(), rec_values)

        elif val_type == gdb.TYPE_CODE_ARRAY:
            return [
                str_value(gdb_value[i], rec_values)
                for i in range(gdb_value.type.range()[1])
            ]

        elif val_type == gdb.TYPE_CODE_STRUCT:
            fields = gdb_value.type.fields()
            return {f.name: str_value(gdb_value[f], rec_values) for f in fields}

        elif val_type in SUPPORTED_TYPES:
            if gdb_value.type.name == "FILE":
                return "FILE"
            return str(gdb_value)

        else:
            raise NotImplementedError(f"Type {val_type} is not supported.")
    except gdb.MemoryError:
        return "NULL"
    except NotImplementedError:
        return "UNIMPLEMENTED"
    except gdb.error:
        return "ERROR"
    finally:
        if address in rec_values:
            rec_values.remove(address)


def serialize_current_local_vars(array_size_map=None, stdout_file_path=None):
    """
    Serializes the information of the local variables of the current frame.
    """

    frame = gdb.selected_frame()
    local_vars = get_local_vars(frame)
    type_map = {}

    if array_size_map is not None:
        for var in local_vars:
            if var.name not in array_size_map:
                continue
            size_expr = array_size_map[var.name]
            size = int(str(gdb.parse_and_eval(str(size_expr))))
            type_map[var.name] = var.type.target().array(size).pointer()

    result = {}
    for var in local_vars:
        if var.name in type_map:
            result[var.name] = str_value(var.value(frame).cast(type_map[var.name]))
        else:
            result[var.name] = str_value(var.value(frame))

    if stdout_file_path is not None:
        gdb.execute("call fflush(stdout)")
        with open(stdout_file_path, "r", encoding="utf8", errors="ignore") as f:
            result[STDOUT_VAR_NAME] = f.read()

    return result


class ReturnValuePrinterBreakpoint(gdb.FinishBreakpoint):
    last_return_value = None
    last_vars = None

    def stop(self):
        ReturnValuePrinterBreakpoint.last_return_value = self.return_value
        return True


def extract_trace(config, stdout_redirect_file):

    gdb.execute(f"file {config.executable}")
    gdb.execute(f"b {config.function}")

    # setup parameters
    if config.args_type == "cli_args":
        gdb.execute(f"run {' '.join(config.args)} > {stdout_redirect_file} 2>&1")

        # initialize the return-value printer
        # cli_args only; func_args is not supported
        ReturnValuePrinterBreakpoint()
    elif config.args_type == "func_args":

        # Create a process but pause in the beginning.
        # Then, we can directly evaluate `func_name` with `args`.
        gdb.execute("break main")
        gdb.execute(f"run > {stdout_redirect_file} 2>&1")

        with suppress(gdb.error):
            stmt = f"call {config.function}({', '.join(config.args)})"
            print(stmt)
            gdb.execute(stmt)
    else:
        raise Exception(f"Unknown args type: {config.args_type}")

    trace = []
    current_file_name = gdb.selected_frame().find_sal().symtab.filename

    global current_frame
    global current_flatten_split_frame
    current_frame = gdb.selected_frame()
    current_flatten_split_frame = gdb.selected_frame()
    assert (
        current_frame.name() == config.function
    ), f"Current frame is {current_frame.name()}, but expected {config.function}"
    gdb.execute("clear")  # for recursive calls

    # trace and collect variable valuations
    while True:
        line = gdb.selected_frame().find_sal().line
        func = gdb.selected_frame().name()
        state = serialize_current_local_vars(config.array_size_map, stdout_redirect_file)
        trace.append((func, line, state))

        try:
            gdb.execute("step")
            if gdb.selected_frame().name() in EXIT_FUNCTION_LIST:
                break
            if (
                gdb.selected_frame() != current_frame
                and "FLATTEN_SPLIT" not in gdb.selected_frame().name() # FIXME: remove this hack
            ):
                if gdb.selected_frame().older() == current_frame or gdb.selected_frame().older() == current_flatten_split_frame:
                    gdb.execute("finish")
                    line = gdb.selected_frame().find_sal().line
                    if line == trace[-1][1]:
                        trace.pop()
            elif "FLATTEN_SPLIT" in gdb.selected_frame().name():
                current_flatten_split_frame = gdb.selected_frame()

            # check if we are in the same file
            new_file_name = gdb.selected_frame().find_sal().symtab.filename
            if new_file_name != current_file_name:
                gdb.execute("finish")
        except gdb.error:
            break

    if config.args_type == "func_args":
        gdb.execute("disable")
        ret_val = gdb.parse_and_eval(f"{config.function}({', '.join(config.args)})")
        ReturnValuePrinterBreakpoint.last_return_value = ret_val

    return trace, str(ReturnValuePrinterBreakpoint.last_return_value)


def analyze_args(config):
    gdb.execute(f"file {config.executable}")
    func = gdb.parse_and_eval(config.function)

    args_type = [field.type.name for field in func.type.fields()]
    ret_type = func.type.target().name
    return args_type, ret_type


if __name__ == "__main__":
    config_json = globals()["config_json"]
    config = json.loads(config_json, object_hook=lambda d: Namespace(**d))
    config.array_size_map = vars(config.array_size_map)
    config.args = list(map(str, config.args))

    ts = time.time()

    if config.args_type == "analyze":
        args_type, ret_type = analyze_args(config)
        with open(config.output_path, "w", encoding="utf-8") as f:
            json.dump(
                {
                    "args_type": args_type,
                    "ret_type": ret_type,
                    "time": time.time() - ts,
                },
                f,
            )
    else:
        # create temp file
        fd, stdout_redirect_file = tempfile.mkstemp()
        os.close(fd)

        try:
            trace, ret_val = extract_trace(config, stdout_redirect_file)
            with open(config.output_path, "w", encoding="utf-8") as f:
                json.dump(
                    {"trace": trace, "return_value": ret_val, "time": time.time() - ts}, f
                )
        finally:
            os.remove(stdout_redirect_file)
