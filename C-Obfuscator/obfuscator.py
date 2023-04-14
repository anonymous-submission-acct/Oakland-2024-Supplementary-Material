from argparse import ArgumentParser, Namespace
from pycparser import c_generator

from loop_unroll_visitor import LoopUnrollVisitor
from loop_fission_visitor import LoopFissionVisitor
from irrelevant_code_visitor import IrrelevantCodeVisitor

from variable_gatherer_visitor import VariableGathererVisitor

from parser_tools import pyc_parse, PYCPARSER_ADDED

from utils import set_random_seed

obfuscation_info = {
    "loop-unroll": LoopUnrollVisitor(),
    "loop-fission": LoopFissionVisitor(),
    "irrelevant-code": IrrelevantCodeVisitor(),
    "var-gather": VariableGathererVisitor()
}

def check_cline_args(args):
    """Check if command-line args are valid."""
    if args.obfuscations is None:
        raise Exception("[ERROR] No obfuscations given (use --obfuscations with comma-separated obfuscation names)")

    obfuscations = args.obfuscations.replace(" ", "").split(",")
    for obfuscation in obfuscations:
        if not obfuscation in obfuscation_info:
            raise Exception(f"[ERROR] Obfuscation {obfuscation} not in recognized obfuscations: {list(obfuscation_info.keys())}")

    args.obfuscations = obfuscations

def get_cline_args():
    """ Fetches the arguments passed in at the command line

    return: argument object
    """
    aparser = ArgumentParser()
    aparser.add_argument("prog_path", help="path to program to be obfuscated")
    aparser.add_argument("--obfuscations", help="comma-separated list of obfuscations to apply (loop-unroll,loop-fission,irrelevant-code)", type=str, default=None)
    aparser.add_argument("--seed", help="random seed", type=int, default=1234)
    aparser.add_argument("--output_path", help="what file to save obfuscated file to (by default, not saved to file, printed to stdout)", type=str, default=None)

    args = aparser.parse_args()
    check_cline_args(args)

    return args

def obfuscate_from_path(prog_path: str, args: Namespace) -> str:
    """ Apply obfuscation to the program at the given path.

    Arguments:
    prog_path (str) -- path to program to be obfuscated
    args (Namespace) -- command-line args

    Return:
    new_prog (str) -- obfuscated program
    """
    with open(prog_path, "r") as f:
        prog = f.read()

    return obfuscate(prog, args)

def obfuscate(prog: str, args: Namespace) -> str:
    """ Apply obfuscation to the program provided as string argument.

    Arguments:
    prog (str) -- program to be obfuscated
    args (Namespace) -- command-line args

    Return:
    new_prog (str) -- obfuscated program
    """
    new_ast = pyc_parse(prog)
    for obfuscation in args.obfuscations:
        visitor = obfuscation_info[obfuscation]
        visitor.initialize()
        new_ast = visitor.visit(new_ast)

    generator = c_generator.CGenerator()
    prog = generator.visit(new_ast)

    # Post-process to add headers and remove other stuff
    prog = prog.replace(PYCPARSER_ADDED, "#include<stdlib.h>\n#include<stdbool.h>\n")

    return prog

def main(args: Namespace, do_set_random_seed: bool = True) -> None:
    if do_set_random_seed:
        set_random_seed(args.seed)
    obfuscated_prog = obfuscate_from_path(args.prog_path, args)
    if args.output_path:
        with open(args.output_path, "w") as f:
            f.write(obfuscated_prog)
    else:
        print(obfuscated_prog)


if __name__ == "__main__":
    args = get_cline_args()
    main(args)
