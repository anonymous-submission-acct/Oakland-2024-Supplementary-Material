from dataclasses import dataclass
from pycparser import c_ast, c_generator
from langs.c.c_parser import CParser

C_GENERATOR = c_generator.CGenerator()


@dataclass
class FunctionParameter:
    name: str
    type: str
    decl: str


@dataclass
class FunctionSignature:
    name: str
    params: list[FunctionParameter]
    return_type: str


def _generate_c_str(decl) -> str:
    return C_GENERATOR.visit(decl)


def _parse_params(func_decl) -> list[FunctionParameter]:
    params = func_decl.args.params if func_decl.args else []
    return [FunctionParameter(param.name, _generate_c_str(param.type), _generate_c_str(param)) for param in params]


def parse_c_decls(src_path: str) -> list:

    class FuncDefVisitor(c_ast.NodeVisitor):
        def __init__(self) -> None:
            self.decls = []
            super().__init__()

        # pylint: disable=invalid-name, no-self-use
        def visit_FuncDef(self, node):
            func_decl = node.decl.type

            params = _parse_params(func_decl)
            ret_type = _generate_c_str(func_decl.type)

            self.decls.append(FunctionSignature(
                node.decl.name, params, ret_type))

    ast = CParser().parse(src_path)

    def_visitor = FuncDefVisitor()
    def_visitor.visit(ast)

    return def_visitor.decls

if __name__ == "__main__":
    print(parse_c_decls("./.tmp/tmp.cpp"))
