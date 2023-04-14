from pycparser.c_ast import *

class CodeGenVisitor(object):
    """ A base NodeVisitor class for visiting c_ast nodes.
        Subclass it and define your own visit_XXX methods, where
        XXX is the class name you want to visit with these
        methods.
        For example:
        class ConstantVisitor(NodeVisitor):
            def __init__(self):
                self.values = []
            def visit_Constant(self, node):
                self.values.append(node.value)
        Creates a list of values of all the constant nodes
        encountered below the given node. To use it:
        cv = ConstantVisitor()
        cv.visit(node)
        Notes:
        *   generic_visit() will be called for AST nodes for which
            no visit_XXX method was defined.
        *   The children of nodes for which a visit_XXX was
            defined will not be visited - if you need this, call
            generic_visit() on the node.
            You can use:
                NodeVisitor.generic_visit(self, node)
        *   Modeled after Python's own AST visiting facilities
            (the ast module of Python 3.0)
    """

    _method_cache = None

    def __init__(self):
        self.in_obf_func = False

    def initialize(self):
        pass

    def visit(self, node) -> Node:
        """ Visit a node.
        """

        if self._method_cache is None:
            self._method_cache = {}

        visitor = self._method_cache.get(node.__class__.__name__, None)
        if visitor is None:
            method = 'visit_' + node.__class__.__name__
            visitor = getattr(self, method, self.generic_visit)
            self._method_cache[node.__class__.__name__] = visitor

        return visitor(node)

    def generic_visit(self, node):
        """ Called if no explicit visitor function exists for a
            node. Implements preorder visiting of the node.
        """
        if node == None:
            return None

        if isinstance(node, list):
            res = []
            for e in node:
                e_res = self.visit(e)
                if isinstance(e_res, Compound):
                    res += e_res.block_items
                else:
                    res.append(e_res)
            return res

        raise NotImplementedError(f"{type(node)}")

    def visit_ArrayDecl(self, node: Node) -> Node:
        return ArrayDecl(self.visit(node.type), self.visit(node.dim), node.dim_quals, node.coord)

    def visit_ArrayRef(self, node: Node) -> Node:
        return ArrayRef(self.visit(node.name), self.visit(node.subscript), node.coord)

    def visit_Assignment(self, node: Node) -> Node:
        return Assignment(node.op, self.visit(node.lvalue), self.visit(node.rvalue), node.coord)

    def visit_Alignas(self, node: Node) -> Node:
        return Alignas(self.visit(node.alignment), node.coord)

    def visit_BinaryOp(self, node: Node) -> Node:
        return BinaryOp(node.op, self.visit(node.left), self.visit(node.right), node.coord)

    def visit_Break(self, node: Node) -> Node:
        return Break(node.coord)

    def visit_Case(self, node: Node) -> Node:
        return Case(self.visit(node.expr), self.visit(node.stmts), node.coord)

    def visit_Cast(self, node: Node) -> Node:
        return Cast(self.visit(node.to_type), self.visit(node.expr), node.coord)

    def visit_Compound(self, node: Node) -> Node:
        return Compound(self.visit(node.block_items), node.coord)

    def visit_CompoundLiteral(self, node: Node) -> Node:
        return CompoundLiteral(self.visit(node.type), self.visit(node.init), node.coord)

    def visit_Constant(self, node: Node) -> Node:
        return Constant(node.type, node.value, node.coord)

    def visit_Continue(self, node: Node) -> Node:
        return Continue(node.coord)

    def visit_Decl(self, node: Node) -> Node:
        return Decl(node.name, node.quals, node.align, node.storage, node.funcspec,
                    self.visit(node.type), self.visit(node.init), self.visit(node.bitsize), node.coord)

    def visit_DeclList(self, node: Node) -> Node:
        return DeclList(self.visit(node.decls), node.coord)

    def visit_Default(self, node: Node) -> Node:
        return Default(self.visit(node.stmts), node.coord)

    def visit_DoWhile(self, node: Node) -> Node:
        return DoWhile(self.visit(node.cond), self.visit(node.stmt), node.coord)

    def visit_EllipsisParam(self, node: Node) -> Node:
        return EllipsisParam(node.coord)

    def visit_EmptyStatement(self, node: Node) -> Node:
        return EmptyStatement(node.coord)

    def visit_Enum(self, node: Node) -> Node:
        return Enum(node.name, self.visit(node.values), node.coord)

    def visit_Enumerator(self, node: Node) -> Node:
        return Enumerator(node.name, self.visit(node.value), node.coord)

    def visit_EnumeratorList(self, node: Node) -> Node:
        return EnumeratorList(self.visit(node.enumerators), node.coord)

    def visit_ExprList(self, node: Node) -> Node:
        return ExprList(self.visit(node.exprs), node.coord)

    def visit_FileAST(self, node: Node) -> Node:
        return FileAST(self.visit(node.ext), node.coord)

    def visit_For(self, node: Node) -> Node:
        return For(self.visit(node.init), self.visit(node.cond), self.visit(node.next), self.visit(node.stmt), node.coord)

    def visit_FuncCall(self, node: Node) -> Node:
        return FuncCall(self.visit(node.name), self.visit(node.args), node.coord)

    def visit_FuncDecl(self, node: Node) -> Node:
        return FuncDecl(self.visit(node.args), self.visit(node.type), node.coord)

    def visit_FuncDef(self, node: Node) -> Node:
        if node.decl.name == "OBF_FUNC":
            self.in_obf_func = True
        func_def = FuncDef(self.visit(node.decl), self.visit(node.param_decls), self.visit(node.body), node.coord)
        if node.decl.name == "OBF_FUNC":
            self.in_obf_func = False
        return func_def

    def visit_Goto(self, node: Node) -> Node:
        return Goto(node.name, node.coord)

    def visit_ID(self, node: Node) -> Node:
        return ID(node.name, node.coord)

    def visit_IdentifierType(self, node: Node) -> Node:
        return IdentifierType(node.names, node.coord)

    def visit_If(self, node: Node) -> Node:
        return If(self.visit(node.cond), self.visit(node.iftrue), self.visit(node.iffalse), node.coord)

    def visit_InitList(self, node: Node) -> Node:
        return InitList(self.visit(node.exprs), node.coord)

    def visit_Label(self, node: Node) -> Node:
        return Label(node.name, self.visit(node.stmt), node.coord)

    def visit_NamedInitializer(self, node: Node) -> Node:
        return NamedInitializer(node.name, self.visit(node.expr), node.coord)

    def visit_ParamList(self, node: Node) -> Node:
        return ParamList(self.visit(node.params), node.coord)

    def visit_PtrDecl(self, node: Node) -> Node:
        return PtrDecl(node.quals, self.visit(node.type), node.coord)

    def visit_Return(self, node: Node) -> Node:
        return Return(self.visit(node.expr), node.coord)

    def visit_StaticAssert(self, node: Node) -> Node:
        return StaticAssert(self.visit(node.cond), self.visit(node.message), node.coord)

    def visit_Struct(self, node: Node) -> Node:
        return Struct(node.name, self.visit(node.decls), node.coord)

    def visit_StructRef(self, node: Node) -> Node:
        return StructRef(self.visit(node.name), node.type, self.visit(node.field), node.coord)

    def visit_Switch(self, node: Node) -> Node:
        return Switch(self.visit(node.cond), self.visit(node.stmt), node.coord)

    def visit_TernaryOp(self, node: Node) -> Node:
        return TernaryOp(self.visit(node.cond), self.visit(node.iftrue), self.visit(node.iffalse), node.coord)

    def visit_TypeDecl(self, node: Node) -> Node:
        return TypeDecl(node.declname, node.quals, node.align, self.visit(node.type), node.coord)

    def visit_Typedef(self, node: Node) -> Node:
        return Typedef(node.name, node.quals, node.storage, self.visit(node.type), node.coord)

    def visit_Typename(self, node: Node) -> Node:
        return Typename(node.name, node.quals, node.align, self.visit(node.type), node.coord)

    def visit_UnaryOp(self, node: Node) -> Node:
        return UnaryOp(node.op, self.visit(node.expr), node.coord)

    def visit_Union(self, node: Node) -> Node:
        return Union(node.name, self.visit(node.decls), node.coord)

    def visit_While(self, node: Node) -> Node:
        return While(self.visit(node.cond), self.visit(node.stmt), node.coord)

    def visit_Pragma(self, node: Node) -> Node:
        return Pragma(node.string, node.coord)
