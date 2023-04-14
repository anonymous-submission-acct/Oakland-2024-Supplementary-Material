from collections import defaultdict
from typing import *

from grammar import *

class CGrammar(Grammar):
    """Grammar for C language (includes only control-flow operators and placeholder nonterms for guards)."""

    def __init__(self, src_path: str=None):
        P = Nonterminal("P")
        S = Nonterminal("S")

        start = P
        productions = defaultdict(list)

        # Add in single statement and sequence of statement
        productions[P].append(Production(P, "Single", [S]))
        productions[P].append(Production(P, "Seq", [S,P]))

        # Add in control-flow operators
        productions[S].append(Production(S, "If", [SOURCE_GUARD_NONTERM,P]))
        productions[S].append(Production(S, "ITE", [SOURCE_GUARD_NONTERM,P,P]))
        productions[S].append(Production(S, "While", [SOURCE_GUARD_NONTERM,P]))
        productions[S].append(Production(S, "Stmt", [SOURCE_STMT_NONTERM]))

        self.stmt_nterms = [SOURCE_STMT_NONTERM, P, S]
        self.guard_nterms = [SOURCE_GUARD_NONTERM]

        super(CGrammar, self).__init__(start, productions)
