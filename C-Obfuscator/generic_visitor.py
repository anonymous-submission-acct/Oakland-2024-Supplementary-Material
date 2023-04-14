from pycparser.c_ast import *
from typing import Any, List

class GenericVisitor(object):
    """ A generic visitor for producing some result from traversing AST. """

    _method_cache = None

    def __init__(self):
        self.in_obf_func = False

    def visit(self, node) -> Any:
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

    def combine(self, children: List[Any]) -> Any:
        """ Defines how to combine results of visiting on children of node. """
        raise NotImplementedError

    def generic_visit(self, node) -> Any:
        """ Called if no explicit visitor function exists for a
            node. Implements preorder visiting of the node.
        """
        if node == None:
            return None

        res = []
        for e in node:
            e_res = self.visit(e)
            res.append(e_res)
        return self.combine(res)
