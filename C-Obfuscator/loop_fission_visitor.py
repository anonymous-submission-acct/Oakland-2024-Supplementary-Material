from pycparser.c_ast import *

from code_gen_visitor import CodeGenVisitor

class LoopFissionVisitor(CodeGenVisitor):
    """Tracks and returns all guards in AST."""

    def __init__(self):
        self.num_added_loops = 3
        super().__init__()

    def construct_if(self):
        cond = BinaryOp(">=", BinaryOp("%", FuncCall(ID("rand"), ParamList([])), Constant(Typename("int", None, None, None), 10)),
                        Constant(Typename("int", None, None, None), 5))
        break_stmt = Break()
        return If(cond, break_stmt, None)

    def visit_While(self, node: Node) -> Node:
        if not self.in_obf_func:
            return While(self.visit(node.cond), self.visit(node.stmt), node.coord)

        # Add a bunch of duplicate loops that break randomly at start
        stmts = []
        for _ in range(self.num_added_loops):
            if_stmt = self.construct_if()
            new_body_stmts = [if_stmt] + self.visit(node.stmt).block_items
            new_body = Compound(new_body_stmts)
            new_while = While(self.visit(node.cond), new_body, node.coord)
            stmts.append(new_while)
        stmts.append(node)

        return Compound(stmts)

    def visit_For(self, node):
        if not self.in_obf_func:
            return For(self.visit(node.init), self.visit(node.cond), self.visit(node.next),
                       self.visit(node.stmt), node.coord)

        # Add a bunch of duplicate loops that break randomly at start
        stmts = []
        if node.init != None:
            stmts = [self.visit(node.init.decls[0])]
        for _ in range(self.num_added_loops):
            if_stmt = self.construct_if()
            new_body_stmts = [if_stmt] + self.visit(node.stmt).block_items
            new_body = Compound(new_body_stmts)
            new_for = For(None, self.visit(node.cond), self.visit(node.next), new_body, node.coord)
            stmts.append(new_for)
        stmts.append(node)

        return Compound(stmts)
