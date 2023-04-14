from pycparser.c_ast import *
from typing import Any, List

from generic_visitor import GenericVisitor

class VariableGathererVisitor(GenericVisitor):
    """ Visitor to gather all declared variables in program. """

    def combine(self, children: List[Any]) -> Any:
        """ Defines how to combine results of visiting on children of node. """
        res = []
        for c in children:
            res += c
        return res

    def visit_ArrayDecl(self, node: Node) -> Any:
        res = self.visit(node.type)
        dim = "" if node.dim == None else node.dim.value
        return [(t[0], f"{t[1]}[{dim}]") for t in res]

    def visit_FuncDecl(self, node: Node) -> Any:
        return self.visit(node.args)

    def visit_FuncDef(self, node: Node) -> Any:
        if node.decl.name == "OBF_FUNC":
            self.in_obf_func = True
        res = self.generic_visit(node)
        if node.decl.name == "OBF_FUNC":
            self.in_obf_func = False
        return res

    def visit_TypeDecl(self, node: Node) -> Any:
        if not self.in_obf_func:
            return []
        return [(node.declname, node.type.names[0])]
