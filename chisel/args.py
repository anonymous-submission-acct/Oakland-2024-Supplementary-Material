from argparse import ArgumentParser
from pathlib import Path

global_args = None

def set_global_args(args):
    global global_args

    global_args = args

def clear_global_args():
    global global_args

    global_args = None

def get_cline_args(cli_args=None):
    """ Fetches the arguments passed in at the command line

    return: argument object
    """
    global global_args

    if global_args != None:
        return global_args

    parser = ArgumentParser()
    add_config_args(parser)
    parser.add_argument("--lang", help="choose language to deobfuscate -- options are {'c'}. (default is 'c')", type=str, default="c")
    parser.add_argument("--disable_trace_pruning", help="disables trace pruning", action="store_true")
    parser.add_argument("--disable_syntax_pruning", help="disables syntax pruning", action="store_true")
    parser.add_argument("--disable_analysis_pruning", help="disables analysis pruning", action="store_true")
    parser.add_argument("--search_model", help="search model, e.g., 'size' for size-based enumeration -- options are {'size', 'random'} (default is 'size')", type=str, default='size')
    parser.add_argument("--checker", help="equivalence checker, e.g., 'io' for testing based checking -- options are {'io'} (default is 'io')", type=str, default='io')
    parser.add_argument("--deobfuscator", help="which deobfuscator to use -- options are {'enum', 'decomp'} (default is 'decomp')", type=str, default="decomp")
    parser.add_argument("--use_cppyy", help="use cppyy for to compile programs", action="store_true")
    parser.add_argument("--enable_compile", help="disable precompiling of trace utils", action="store_true")
    parser.add_argument("--disable_precompile", help="disable precompiling of trace utils", action="store_true")
    parser.add_argument("--precompile_type", help="set precompiling language ('c', 'cpp')", type=str, default="c")
    parser.add_argument("--func_name", help="name of function to deobfuscate (default is 'OBF_FUNC')", type=str, default="OBF_FUNC")
    parser.add_argument("--disable_parallel", help="whether to run synthesis in parallel", action="store_true")
    parser.add_argument("--ablation", help="which ablation to run -- options are {'1a', '1b', '2', '3'} (default is None)", type=str, default=None)
    parser.add_argument("src_path", help="path to program to be deobfuscated", type=Path)

    args = parser.parse_args(cli_args)

    set_global_args(args)
    return args

def add_config_args(parser: ArgumentParser):
    """ Add NGST2 arguments to parser.

    Arguments:
    parser (ArgumentParser) -- argument parser
    """
    parser.add_argument("--debug", help="select debug level -- options are {'all', 'results', 'print-partial', 'trace-status', 'inputs', 'extracted'} (default None)", type=str, default=None)
    parser.add_argument("--label_path", help="path to label -- should only be set for debugging! (default None)", type=str, default=None)
    parser.add_argument("--save_results", help="give path to save results to (default None)", type=Path, default=None)
    parser.add_argument("--timeout", help="synthesis timeout in seconds (default 60)", type=int, default=300)
    parser.add_argument("--max_cand_record", help="maximum number of caniddates to record for statistics during synthesis (default 100)", type=int, default=100)
