from collections import defaultdict
from pycparser.c_ast import *

from code_gen_visitor import CodeGenVisitor
from variable_gatherer_visitor import VariableGathererVisitor

from utils import choose_rand, rand_int, shuffle

class IrrelevantCodeVisitor(CodeGenVisitor):
    """Tracks and returns all guards in AST."""

    def __init__(self):
        self.var_visitor = VariableGathererVisitor()
        self.var_visitor.in_obf_func = True
        self.in_scope_vars = []
        super().__init__()

    def initialize(self):
        self.in_scope_vars = []

    def rand_block(self, depth=2):
        k = rand_int(0,depth) if depth > 0 else 1
        if k == 0:
            return self.rand_if(depth)
        else:
            j = rand_int(0,1)
            if j == 0:
                return self.rand_decl_assignment(depth)
            else:
                return self.rand_assignments(depth)

    def rand_new_var(self):
        var = f"__RANDVAR__{rand_int(0,99999999999999999999)}__"
        in_scope_vars = [v for (v,t) in self.in_scope_vars]
        while var in in_scope_vars:
            var = f"__RANDVAR__{rand_int(0,99999999999999999999)}__"
        return var

    def rand_var_name(self):
        int_vars = [v for (v,t) in self.in_scope_vars if t == "int"]
        return choose_rand(int_vars)

    def rand_const(self):
        return Constant('int', f'{rand_int(0,999)}')

    def rand_arith_expr(self, depth=2, allow_const=True):
        k = rand_int(0,depth) if depth > 0 else 1
        if k == 0:
            op = choose_rand(["+", "-", "*"])
            left = self.rand_arith_expr(depth-1)
            right = self.rand_arith_expr(depth-1)
            return BinaryOp(op, left, right)
        else:
            j = rand_int(0,1)
            if j == 0 or not allow_const:
                return ID(self.rand_var_name())
            else:
                return self.rand_const()

    def rand_decl_assignment(self, depth:int):
        var = self.rand_new_var()
        self.in_scope_vars.append((var, "int"))
        typ = TypeDecl(var, [], None, IdentifierType(['int']))
        init = self.rand_arith_expr()
        if isinstance(init, ID) and init.name == var:
            init = BinaryOp("+", init, Constant('int', '1'))
        decl = Decl(var, [], [], [], [], typ, init, None)
        return [decl]

    def rand_assignments(self, depth:int):
        var = self.rand_var_name()
        expr = self.rand_const()
        first_assn = Assignment("=", ID(var), BinaryOp("+", ID(var), expr))
        second_assn = Assignment("=", ID(var), BinaryOp("-", ID(var), expr))
        return shuffle([first_assn, second_assn])

    def rand_if(self, depth: int):
        res = []
        k = rand_int(0,1)
        repl_vars = [v for v in self.in_scope_vars]
        if k == 0:
            decl_assn = self.rand_decl_assignment(depth)
            res += decl_assn

        lhs = self.rand_arith_expr(allow_const=False)
        rhs = self.rand_arith_expr()
        while str(lhs) == str(rhs):
            rhs = self.rand_arith_expr() # avoid conditions like "i < i"
        cond = BinaryOp("<", lhs, rhs)
        true_body = Compound(self.rand_block(depth+1))
        self.in_scope_vars = [v for v in repl_vars]
        false_body = Compound(self.rand_block(depth+1))
        self.in_scope_vars = [v for v in repl_vars]
        if_stmt = If(cond, true_body, false_body, None)

        return res + [if_stmt]

    def visit_Compound(self, node: Node) -> Node:
        if not self.in_obf_func:
            return Compound(self.visit(node.block_items), node.coord)

        new_block_items = []

        for bi in node.block_items:
            new_bi = self.visit(bi)
            if not rand_int(0,1) == 0:
                new_block_items.append(new_bi)
                continue # Only obfuscate 50% of the time
            new_block_items += self.rand_block()
            new_block_items.append(new_bi)

        return Compound(new_block_items, node.coord)

    def visit_Case(self, node: Node) -> Node:
        repl_vars = [v for v in self.in_scope_vars]
        res = super().visit_Case(node)
        if self.in_obf_func:
            self.in_scope_vars = repl_vars
        return res

    def visit_DoWhile(self, node: Node) -> Node:
        repl_vars = [v for v in self.in_scope_vars]
        res = super().visit_DoWhile(node)
        if self.in_obf_func:
            self.in_scope_vars = repl_vars
        return res

    def visit_For(self, node: Node) -> Node:
        repl_vars = [v for v in self.in_scope_vars]
        res = super().visit_For(node)
        if self.in_obf_func:
            self.in_scope_vars = repl_vars
        return res

    def visit_If(self, node: Node) -> Node:
        repl_vars = [v for v in self.in_scope_vars]
        true_body = self.visit(node.iftrue)
        self.in_scope_vars = [v for v in repl_vars]
        false_body = self.visit(node.iffalse)
        self.in_scope_vars = [v for v in repl_vars]

        return If(self.visit(node.cond), true_body, false_body, node.coord)

    def visit_Switch(self, node: Node) -> Node:
        repl_vars = [v for v in self.in_scope_vars]
        res = super().visit_Switch(node)
        if self.in_obf_func:
            self.in_scope_vars = repl_vars
        return res

    def visit_While(self, node: Node) -> Node:
        repl_vars = [v for v in self.in_scope_vars]
        res = super().visit_While(node)
        if self.in_obf_func:
            self.in_scope_vars = repl_vars
        return res

    def visit_FuncDecl(self, node: Node) -> Node:
        self.in_scope_vars = self.var_visitor.visit(node)
        return super().visit_FuncDecl(node)

