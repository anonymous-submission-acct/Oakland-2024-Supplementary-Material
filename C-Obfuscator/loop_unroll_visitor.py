from pycparser.c_ast import *

from code_gen_visitor import CodeGenVisitor

from utils import rand_int

class LoopUnrollVisitor(CodeGenVisitor):
    """Tracks and returns all guards in AST."""

    def __init__(self):
        self.num_internal_unroll = 3
        self.num_pre_unroll = 3
        super().__init__()

    def rand_new_var(self):
        var = f"__RANDVAR__{rand_int(0,99999999999999999999)}__"
        return var

    def zero_decl(self, var):
        typ = TypeDecl(var, [], None, IdentifierType(['int']))
        init = Constant('int', '0')
        decl = Decl(var, [], [], [], [], typ, init, None)
        return decl

    def visit_While(self, node: Node) -> Node:
        if not self.in_obf_func:
            return While(self.visit(node.cond), self.visit(node.stmt), node.coord)

        # Unroll loop body using if statement inside loop
        new_body_stmts = []
        for _ in range(self.num_internal_unroll):
            if_stmt = If(self.visit(node.cond), self.visit(node.stmt), None)
            new_body_stmts.append(if_stmt)
        new_body = Compound(new_body_stmts)
        new_while = While(self.visit(node.cond), new_body, node.coord)

        if self.num_pre_unroll > 0:
            # Unroll loop body using if statement before loop
            var = self.rand_new_var()
            outer_stmts = [self.zero_decl(var)]
            new_while_stmts = []
            for _ in range(self.num_pre_unroll):
                if_stmt = If(self.visit(node.cond), self.visit(node.stmt), None)
                new_while_stmts.append(if_stmt)
            new_while_stmts.append(new_while)
            outer_assn = Assignment("=", ID(var), Constant('int', '1'))
            new_while_stmts.append(outer_assn)
            outer_cond = BinaryOp("==", ID(var), Constant('int', '0'))
            outer_while = While(outer_cond, Compound(new_while_stmts))
            outer_stmts.append(outer_while)
            return Compound(outer_stmts)
        else:
            return new_while

    def visit_For(self, node):
        if not self.in_obf_func:
            return For(self.visit(node.init), self.visit(node.cond), self.visit(node.next),
                       self.visit(node.stmt), node.coord)

        # Unroll loop body using if statement inside loop
        new_body_stmts = []
        for _ in range(self.num_internal_unroll):
            if_body = self.visit(node.stmt)
            if_body.block_items.append(self.visit(node.next))
            if_stmt = If(self.visit(node.cond), if_body, None)
            new_body_stmts.append(if_stmt)
        new_body = Compound(new_body_stmts)
        new_for = For(self.visit(node.init), self.visit(node.cond), self.visit(node.next), new_body, node.coord)

        if self.num_pre_unroll > 0:
            # Unroll loop body using if statement before loop
            var = self.rand_new_var()
            outer_stmts = [self.zero_decl(var)]
            new_stmts = []
            if new_for.init != None:
                new_stmts = [self.visit(new_for.init.decls[0])]
                new_for.init = None
            for _ in range(self.num_pre_unroll):
                if_body = self.visit(node.stmt)
                if_body.block_items.append(self.visit(node.next))
                if_stmt = If(self.visit(node.cond), if_body, None)
                new_stmts.append(if_stmt)
            new_stmts.append(new_for)
            outer_assn = Assignment("=", ID(var), Constant('int', '1'))
            new_stmts.append(outer_assn)
            outer_cond = BinaryOp("==", ID(var), Constant('int', '0'))
            outer_while = While(outer_cond, Compound(new_stmts))
            outer_stmts.append(outer_while)
            return Compound(outer_stmts)
        else:
            return new_for
