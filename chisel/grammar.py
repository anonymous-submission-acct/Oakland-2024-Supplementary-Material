from collections import defaultdict
from typing import *

class Nonterminal():
    """Grammar nonterminal"""

    def __init__(self, name: str):
        self.name = name

    def __repr__(self):
        return self.name

    def __eq__(self, n):
        if not isinstance(n, Nonterminal):
            return False

        return self.name == n.name

    def __hash__(self):
        return hash(self.name)

SOURCE_GUARD_NAME = "SourceGuard"
SOURCE_STMT_NAME = "SourceStmt"
SOURCE_GUARD_NONTERM = Nonterminal(SOURCE_GUARD_NAME)
SOURCE_STMT_NONTERM = Nonterminal(SOURCE_STMT_NAME)

class Production():
    """Grammar production where RHS corresponds to a function: fname(args)."""

    def __init__(self, nonterm: Nonterminal, fname: str, args: List[Nonterminal]):
        self.nonterm = nonterm
        self.fname = fname
        self.args = args # Note, empty args corresponds to a terminal

    def __eq__(self, p: Any):
        if not isinstance(p, Production):
            return False

        return p.nonterm == self.nonterm and p.fname == self.fname and p.args == self.args

    def __repr__(self):
        arg_str = ",".join([str(a) for a in self.args])
        if arg_str != "":
            arg_str = "({})".format(arg_str)
        return "{} -> {}{}".format(self.nonterm, self.fname, arg_str)

class Grammar():
    """Context-free grammar."""

    def __init__(self, start: Nonterminal, productions: Dict[Nonterminal, List[Production]]):
        self.start = start # Start symbol of grammar
        self.productions = productions # Mapping from nonterminals to productions which expand them
        for nt in [SOURCE_GUARD_NONTERM, SOURCE_STMT_NONTERM]:
            if not nt in self.productions:
                self.productions[nt] = []

    def get_prod(self, name: str) -> Production:
        """ Fetches the production with the matching name.

        Arguments:
        name (str) -- production name

        Returns:
        prod (Production) -- matching production (or None if not found)
        """
        for prods in self.productions.values():
            for p in prods:
                if p.fname == name:
                    return p

        return None

    def get_guard_prod(self, guard: str) -> Production:
        """ Fetches the guard production with the matching guard.

        Arguments:
        guard (str) -- guard str

        Returns:
        prod (Production) -- matching production (or None if not found)
        """
        for p in self.productions[SOURCE_GUARD_NONTERM]:
            if p.args[0] == guard:
                return p

        return None

    def _add_prod(self, nterm: Nonterminal, name: str, rhs: List[Any]):
        """ Add a production to the grammar for the given nonterminal.

        Arguments:
        nterm (Nonterminal) -- LHS of desired production
        name (str) -- production function name
        rhs ([Any]) -- RHS of desired production
        """
        if not nterm in self.productions:
            self.productions[nterm] = []
        self.productions[nterm].append(Production(nterm, name, rhs))

    def remove_prod(self, prod: Production):
        """ Remove one instance a production from the grammar.

        Arguments:
        prod (Production) -- production to remove
        """
        for prods in self.productions.values():
            for p in prods:
                if p == prod:
                    self.productions[p.nonterm].remove(prod)
                    return

    def remove_codes(self, codes: Set[str]):
        """Remove productions matching code snippets in set."""
        to_remove = []
        for nt in [SOURCE_GUARD_NONTERM, SOURCE_STMT_NONTERM]:
            for prod in self.productions[nt]:
                if len(codes) == len(to_remove):
                    return
                if prod.args[0] in codes:
                    to_remove.append(prod)

        for prod in to_remove:
            self.remove_prod(prod)

    def remove_guard_prods_not_in_set(self, guards: Set[str]):
        """Removes guards that aren't in the set."""
        to_keep = []
        for prod in self.productions[SOURCE_GUARD_NONTERM]:
            if prod.args[0] in guards:
                to_keep.append(prod)

        self.productions[SOURCE_GUARD_NONTERM] = to_keep

    def remove_stmt_prods_not_in_set(self, stmts: Set[str]):
        """Removes statements that aren't in the set."""
        to_keep = []
        for prod in self.productions[SOURCE_STMT_NONTERM]:
            if prod.args[0] in stmts:
                to_keep.append(prod)

        self.productions[SOURCE_STMT_NONTERM] = to_keep

    def _add_guard_prod(self, rhs: str):
        """ Add a guard production mined from source.

        Arguments:
        rhs (str) -- string representation of mined guard.
        """
        self._add_prod(SOURCE_GUARD_NONTERM, SOURCE_GUARD_NAME, [rhs])

    def _add_stmt_prod(self, rhs: str):
        """ Add a statement production mined from source.

        Arguments:
        rhs (str) -- string representation of mined statement.
        """
        self._add_prod(SOURCE_STMT_NONTERM, SOURCE_STMT_NAME, [rhs])

    def add_stmts_and_guards(self, stmts: List[str], guards: List[str]):
        """ Adds the statements and guards extracted from traces.

        Arguments:
        stmts ([str]) -- extracted statements
        guards ([str]) -- extracted guards
        """
        for stmt in stmts:
            self._add_stmt_prod(stmt)

        for guard in guards:
            self._add_guard_prod(guard)

    def copy(self):
        """Copy current grammar."""
        start = self.start
        productions = {n:[p for p in prods] for n,prods in self.productions.items()}
        return Grammar(start, productions)

    def __repr__(self):
        r = []
        for _, ps in self.productions.items():
            for p in ps:
                r.append(str(p))

        return "\n".join(r)
