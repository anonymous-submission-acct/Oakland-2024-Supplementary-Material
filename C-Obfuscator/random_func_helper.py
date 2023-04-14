from argparse import ArgumentParser
from pathlib import Path

from pycparser.c_ast import *
from pycparser import c_ast
from parser_tools import pyc_parse
from pycparser import parse_file, c_generator

from code_gen_visitor import CodeGenVisitor
from batch_runner import validate_source

FUNC_STR = """
int main(int argc, char **argv) {
	unsigned int a;
	klee_make_symbolic(&a, sizeof(a), "a");
    // a = strtoul(argv[1]);
	return OBF_FUNC(a);
}"""

class SmallProgramVisitor(CodeGenVisitor):
    def __init__(self):
        super().__init__()

    def visit_FileAST(self, node: Node) -> Node:
        node = super().visit_FileAST(node)
        
        func_ast = pyc_parse("int main(int argc, char* argv[]) { return OBF_FUNC(argc, strtoul(argv[1])); }")
        node.ext = [
            x
            for x in node.ext
            if isinstance(x, FuncDef) and x.decl.name in ["OBF_FUNC"]
        ]
        node.ext.extend(func_ast.ext)

        return node
    
    def visit_FuncDef(self, node: Node) -> Node:
        if node.decl.name == "main":
            node.decl.name = "OBF_FUNC"
            node.decl.type.type.declname = "OBF_FUNC"
            node.decl.type.type.type.names = ["int"]
            node.decl.type.args.params = [
                Decl(
                    "argc",
                    [],
                    [],
                    [],
                    [],
                    TypeDecl("argc", [], [], IdentifierType(["int"])),
                    None,
                    None,
                ),
                Decl(
                    "input",
                    [],
                    [],
                    [],
                    [],
                    PtrDecl([], TypeDecl("argv", [], [], IdentifierType(["int"]))),
                    None,
                    None,
                ),
            ]

        return super().visit_FuncDef(node)
    
    def visit_For(self, node: c_ast.For) -> Node:

        node = super().visit_For(node)

        # rewrite for to while
        while_node = c_ast.While(node.cond, node.stmt)
        while_node.stmt = c_ast.Compound([node.stmt, node.next])
        return c_ast.Compound([node.init, while_node])



class RandomFuncVisitor(CodeGenVisitor):
    def __init__(self):
        super().__init__()

    def visit_FileAST(self, node: Node) -> Node:
        # append a function FUNC_STR
        func_ast = pyc_parse(FUNC_STR)
        node.ext = [
            x
            for x in node.ext
            if isinstance(x, FuncDef) and x.decl.name in ["OBF_FUNC_1"]
        ]
        node.ext.extend(func_ast.ext)

        return super().visit_FileAST(node)

    def visit_FuncDef(self, node: Node) -> Node:
        if node.decl.name == "main":
            return node

        node.decl.name = "OBF_FUNC"
        node.decl.type.type.declname = "OBF_FUNC"
        node.decl.type.type.type.names = ["unsigned", "int"]
        node.decl.type.args.params = [
            Decl(
                "input",
                [],
                [],
                [],
                [],
                TypeDecl("input", [], [], IdentifierType(["unsigned", "int"])),
                None,
                None,
            ),
        ]

        return super().visit_FuncDef(node)

    def visit_Assignment(self, node: Node) -> Node:
        match node:
            case Assignment(
                op="=",
                lvalue=ArrayRef(
                    name=ID(name="output"), subscript=Constant()
                ),
                rvalue=rval,
            ):
                return Return(rval)

        return super().visit_Assignment(node)

    def visit_ArrayRef(self, node: Node) -> Node:
        match node:
            case ArrayRef(name=ID(name="output")):
                return node.name
            case ArrayRef(name=ID(name="input")):
                return node.name
        return super().visit_ArrayRef(node)


def process_file(src: Path, dst: Path, visitor_type: str, validate: bool = False):
    ast = parse_file(src, use_cpp=True, cpp_args=r"-I./resources/fake_libc_include")

    match visitor_type:
        case "small_program":
            visitor = SmallProgramVisitor()
        case "random_func":
            visitor = RandomFuncVisitor()
        case _:
            raise ValueError(f"Unknown visitor type {visitor_type}")
    new_ast = visitor.visit(ast)

    generator = c_generator.CGenerator()
    with open(dst, "w") as f:
        f.write(generator.visit(new_ast)
                .replace("argv[1][0]", "argv[0]")
                .replace("argv[1][i]", "argv[i]")
                .replace("argv[i][0]", "argv[i]"))
    
    if validate and not validate_source(dst):
        raise ValueError(f"Failed to validate {dst}")


if __name__ == "__main__":
    args_parser = ArgumentParser()
    args_parser.add_argument("input_dir", type=Path)
    args_parser.add_argument("--output_dir", type=Path)
    args_parser.add_argument("--visitor_type", type=str, default="random_func")
    args_parser.add_argument("--validate", action="store_true")
    args = args_parser.parse_args()

    args.output_dir = args.output_dir or args.input_dir
    args.output_dir.mkdir(parents=True, exist_ok=True)
    for src in args.input_dir.glob("*.c"):
        process_file(src, args.output_dir / src.name, args.visitor_type, args.validate)
