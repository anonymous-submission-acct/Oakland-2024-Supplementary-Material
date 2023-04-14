from collections import defaultdict
from typing import *
from enum import Enum, auto
from dataclasses import dataclass

import copy

# from extractor.decl_extractor import FunctionSignature
from grammar import *
from trace import TraceSource, TraceSourceKind

class GuardCompositionType(Enum):
    NONE = auto()
    AND = auto()
    OR = auto()

@dataclass(frozen=True, slots=True)
class GuardSpec:
    guards: tuple[str, ...]
    negated: bool = False
    composition: GuardCompositionType = GuardCompositionType.NONE


class Node():
    """Node in the program DAG."""

    def __init__(self, _id: int):
        self.id = _id # Unique node identifier

class ValueNode(Node):
    """Nodes corresponding to a value -- either a function or scalar."""

    prod: Production
    val: Optional[str]
    compound_vals: Optional[list[str]]
    compound_type: GuardCompositionType
    negated: bool

    def __init__(self, _id: int, prod: Production, val: Optional[str | list[str]], type: GuardCompositionType = GuardCompositionType.NONE):
        super(ValueNode, self).__init__(_id)
        self.prod = prod # Production used to produce node
        if isinstance(val, str):
            self.val = val
            self.compound_vals = None
            self.compound_type = GuardCompositionType.NONE
        elif isinstance(val, list) or isinstance(val, tuple):
            self.val = None
            self.compound_vals = val
            self.compound_type = type
            assert type != GuardCompositionType.NONE, "Compound value must have a composition type"
        else:
            raise Exception("Invalid value type")
        self.negated = False

    def __str__(self):
        negation_sign = "!" if self.negated else ""

        if self.val is not None:
            return negation_sign + self.val

        op = " && " if self.compound_type == GuardCompositionType.AND else " || "
        return f"({op.join(negation_sign + s for s in self.compound_vals)})"
    
    def __repr__(self):
        return f"{str(self)}_{self.id}"

    def code(self) -> list[str]:
        """Return code for this node."""
        if self.prod.fname not in {"SourceStmt", "SourceGuard"} or self.val in {"SourceStmt", "SourceGuard"}:
            return []
        if self.val is not None:
            return [self.val]
        elif self.compound_vals is not None:
            return self.compound_vals
        else:
            raise ValueError("Invalid value node")


class UnknownNode(Node):
    """Class for terminals, which are leaves in DAG."""

    def __init__(self, _id: int, nonterm: Nonterminal):
        super(UnknownNode, self).__init__(_id)
        self.nonterm = nonterm # Nonterminal which can be expanded to replace this node

    def __repr__(self):
        return "{}_{}".format(str(self), self.id)
    
    def __str__(self):
        return f"?[{self.nonterm}]"
    
    def code(self) -> list[str]:
        return []
    
class DummyNode(ValueNode):
    """Class for dummy terminals, which are leaves in DAG."""

    def __init__(self, _id: int, codes: list[str]):
        super(DummyNode, self).__init__(_id, None, "Dummy")
        self.codes = codes


    def __repr__(self):
        return "{}_{}".format(str(self), self.id)
    
    def __str__(self):
        return f"Stmts[{self.codes}]"

    def code(self) -> list[str]:
        return self.codes

class Program():
    """DAG representation of both complete and partial programs."""

    pid  = 0 # global program id counter

    def __init__(self, nonterm=None, name=None, function_signature=None):
        self.name = name or "prog_{}".format(Program.pid)
        Program.pid += 1

        self.signature = function_signature

        self.nodes : Dict[int, Node] = {} # Maps each unique id to a node
        self.children : Dict[int, List[int]] = defaultdict(list) # Maps each node id to its children ids
        self.parent : Dict[int, int] = {} # Maps each node to its parent
        self.unknowns : List[int] = [] # Keeps track of all nodes which correspond to unknowns

        self.curr_id = 1 # Node id to be assigned to next new node added

        # Construct root
        if nonterm:
            self.root = UnknownNode(0, nonterm)
            self.nodes[0] = self.root
            self.unknowns.append(0)
    
    def __getitem__(self, key):
        """Get node by id."""
        assert isinstance(key, int) and key in self.nodes
        return self.nodes[key]

    def __setitem__(self, key, value):
        raise NotImplementedError
    
    def __delitem__(self, key):
        assert isinstance(key, int) and key in self.nodes
        del self.nodes[key]
        for c in self.children[key]:
            if self.parent[c] == key:
                del self[c]
        del self.children[key]
        del self.parent[key]
        if key in self.unknowns:
            self.unknowns.remove(key)

    def replace(self, nid: int, tid: int):
        """Replace node nid with node tid in program.

        Arguments:
        nid (int) -- node to be replaced
        tid (int) -- node to replace with
        """
        assert nid in self.nodes and tid in self.nodes
        assert nid != tid
        assert nid not in self.children[tid]

        pid = self.parent[nid]
        self.children[pid].remove(nid)
        self.children[pid].append(tid)
        self.parent[tid] = pid
        del self[nid]


    def leftmost_unknown(self, nid=-1) -> Optional[UnknownNode]:
        if nid == -1:
            nid = self.root.id

        if nid in self.unknowns:
            return self.nodes[nid]

        for cid in self.children[nid]:
            unk = self.leftmost_unknown(cid)
            if unk:
                return unk

        return None

    def copy(self):
        new_prog = Program()
        new_prog.name = "prog_{}".format(Program.pid)
        Program.pid += 1
        new_prog.signature = self.signature
        new_prog.nodes = self.nodes.copy()
        for n,cs in self.children.items():
            new_prog.children[n] = cs.copy()
        new_prog.parent = self.parent.copy()
        new_prog.unknowns = self.unknowns.copy()
        new_prog.curr_id = self.curr_id
        new_prog.root = self.root # NOTE: Shouldn't need to copy b/c nodes immutable

        return new_prog

    def deepcopy(self):
        prog = copy.deepcopy(self)
        prog.name = "prog_{}".format(Program.pid)
        Program.pid += 1
        return prog

    def get_subprogram(self, node: Node):
        """ Get subprogram rooted at node (copies stuff to avoid conflicts).

        Arguments:
        node (Node) -- subprogram root node

        Returns:
        subprog (Program) -- subprogram rooted at node
        """
        subprog = Program()
        subprog.name = "prog_{}".format(Program.pid)
        Program.pid += 1
        subprog.signature = self.signature
        subprog.root = node
        subprog.curr_id = self.curr_id
        node_ids = [node.id]
        while len(node_ids) > 0:
            nid = node_ids.pop(0)
            subprog.nodes[nid] = self.nodes[nid]
            subprog.children[nid] = self.children[nid].copy()
            if self.parent[nid] in subprog.nodes:
                subprog.parent[nid] = self.parent[nid]
            if nid in self.unknowns:
                subprog.unknowns.append(nid)
            node_ids += subprog.children[nid]

        return subprog

    def next_unknown(self) -> Node:
        """Get next unkonwn to be completed."""
        assert(not self.complete())
        return self.unknowns[0]

    def add_node(self, n: Node, parent_id: int):
        """ Add node to DAG with designated parent.

        Arguments:
        n (Node) -- node to be added
        parent_id (int) -- parent node id from DAG; -1 if no parent (that means it becomes root)
        """
        n.id = self.curr_id
        self.curr_id += 1

        self.nodes[n.id] = n
        if parent_id != -1:
            self.children[parent_id].append(n.id)
            self.parent[n.id] = parent_id
        else:
            self.root = n

    def expand(self, unk_id: int, prod: Production):
        """ Expands the unk with the production by replacing leftmost occurence
            of nonterminal with RHS of production.

        Arguments:
        unk_id (int) -- id of unknown node
        prod (Production) -- grammar production
        """
        # Remove unknown from unknown list
        self.unknowns.remove(unk_id)

        # Construct and add replacement node
        rep_node = ValueNode(unk_id, prod, prod.fname)
        self.nodes[unk_id] = rep_node
        if unk_id == self.root.id:
            # Replace root if root is expanded
            self.root = rep_node

        # Construct and add children
        for c in prod.args:
            if isinstance(c, Nonterminal):
                # Add unknown node for nonterminal
                u = UnknownNode(None, c)
                self.add_node(u, unk_id)
                self.unknowns.append(u.id)
            else:
                # Add value node for terminal
                if prod.fname in [SOURCE_GUARD_NAME, SOURCE_STMT_NAME]:
                    match c:
                        case _ if isinstance(c, TraceSource):
                            self.add_node(ValueNode(None, prod, c.src), unk_id)
                        case _ if isinstance(c, str):
                            self.add_node(ValueNode(None, prod, c), unk_id)
                        case _ if isinstance(c, GuardSpec):
                            val = c.guards if len(c.guards) > 1 else c.guards[0]
                            node = ValueNode(None, prod, val, c.composition)
                            node.negated = c.negated
                            self.add_node(node, unk_id)
                        case _:
                            raise Exception("Unknown terminal type: {}".format(c))
                else:
                    self.add_node(ValueNode(None, prod, c), unk_id)

    def add_subprogram(self, unk_id: int, prog: 'Program'):
        """ Add the given program to the current partial program by replacing the given unknown.

        Arguments:
        unk_id (int) -- id of unknown node to be replaced
        prog (Program) -- subprogram to be added
        """
        # Remove unknown
        self.unknowns.remove(unk_id)
        if unk_id == 0:
            # Replace root if root is expanded
            self.root = prog.root

        # Create a mapping from subprog nodes to their new ids
        nids = sorted(prog.nodes.keys())
        num_map = {}
        self.nodes[unk_id] = prog.root
        num_map[prog.root.id] = unk_id
        prog.root.id = unk_id
        for nid in nids:
            if nid == 0:
                continue # Skip root
            num_map[nid] = self.curr_id
            self.curr_id += 1

        # Add subprog nodes to node mapping and update their ids
        for nid,n in prog.nodes.items():
            self.nodes[num_map[nid]] = n
            n.id = num_map[nid]

        # Update children mapping with subprog items
        for nid,cs in prog.children.items():
            self.children[num_map[nid]] = [num_map[cnid] for cnid in cs]

        # Update parent mapping with subprog items
        for nid,p in prog.parent.items():
            self.parent[num_map[nid]] = num_map[p]

        # Update unknowns list with subprog items
        for nid in prog.unknowns:
            self.unknowns.append(num_map[nid])

    def complete(self) -> bool:
        """Checks if current program is complete (i.e., no unknowns)."""
        return len(self.unknowns) == 0

    def __lt__(self, p2):
        """Compute less than over programs for priority queue ties (just take earlier pid)."""
        return self.pid < p2.pid

    def _node_repr(self, node: Node, with_id: bool = False) -> str:
        s = [repr(node) if with_id and isinstance(node, UnknownNode) else str(node)]
        match node:
            case ValueNode():
                args = [self._node_repr(self.nodes[c], with_id) for c in self.children[node.id]]
                if args:
                    s += ["(", ", ".join(args), ")"]
        
        return "".join(s)
        
    def __repr__(self) -> str:
        return self._node_repr(self.root, with_id=True)
    
    def __str__(self):
        return self._node_repr(self.root)
    
    def codes(self):
        """Returns a list of codes for the program."""
        return [c for n in self.nodes.values() for c in n.code()]

def construct_prog(op: str, prod: Production, children: List[Program]) -> Program:
    """Constructs a program using the op with the given children."""
    prog = Program()
    prog.root = ValueNode(0, prod, op)
    prog.nodes[0] = prog.root

    curr_id = 1
    for c in children:
        prog.children[0].append(curr_id)
        prog.parent[curr_id] = 0
        if not isinstance(c, Program):
            # TODO: How to get prod here?
            cnode = ValueNode(curr_id, None, c)
            prog.nodes[curr_id] = cnode
            curr_id += 1
            continue
        nids = sorted(c.nodes.keys())
        num_map = {}
        for nid in nids:
            num_map[nid] = curr_id
            curr_id += 1
        for nid,n in c.nodes.items():
            prog.nodes[num_map[nid]] = n
            n.id = num_map[nid]
        for nid,cs in c.children.items():
            prog.children[num_map[nid]] = [num_map[cnid] for cnid in cs]
        for nid,p in c.parent.items():
            prog.parent[num_map[nid]] = num_map[p]
        for nid in c.unknowns:
            prog.unknowns.append(num_map[nid])

    prog.curr_id = curr_id

    return prog
