from collections import defaultdict
from dataclasses import replace
from pycparser import c_ast, c_generator, c_parser
import re
import tempfile
from typing import *

from analysis import Analysis
from grammar import Grammar, Nonterminal, SOURCE_GUARD_NAME, SOURCE_STMT_NAME, SOURCE_GUARD_NONTERM, Production
from program import ValueNode, construct_prog, Node, Program, UnknownNode
from trace import Trace, TraceSourceKind, TraceSource
from utils import statement_is_return

HEADERS="""#define __attribute__(x)
#define __extension__
#define __restrict
#define __inline
#define volatile(x)
#define __asm__

typedef void* __builtin_va_list;

#include <stdbool.h>"""

# line mapping between pycparser and GDB-generated traces
LINES_IN_HEADERS = HEADERS.count("\n") + 1

MAIN_TEMPLATE="""{headers}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

int DEOBF_FUNC({args_decl}) {{
{body}
}}

int main(int argc, char **argv) {{
  return DEOBF_FUNC(0);
}}"""

def post_process_c_stmt(stmt: str) -> str:
    """Common post-processing steps for C stmt code"""
    if not stmt:
        return stmt
    
    stmt = stmt.strip().replace("_Bool", "bool")
    if stmt[-1] != ";":
        stmt += ";"
    
    return stmt


class CFSketchVisitor(c_ast.NodeVisitor):
    """Constructs Control-Flow Sketch from AST."""

    def __init__(self, grammar: Grammar, add_guards):
        self.sketch = None
        self.unk_map = defaultdict(list)
        self.guards = set()
        self.generator = c_generator.CGenerator()
        self.in_obf_func = False
        self.grammar = grammar
        self.add_guards = add_guards

    def clear(self):
        self.sketch = None
        self.guards = set()
        self.in_obf_func = False

    def fresh_unknown_prog(self, nt: Nonterminal):
        return Program(nt)

    def visit_FuncDef(self, node):
        if "OBF_FUNC" in self.generator.visit(node.decl):
            self.in_obf_func = True
            self.visit(node.body)
            self.in_obf_func = False

    def process_block(self, stmts):
        if len(stmts) == 0:
            return

        def check_unk(prog, cid, idx):
            curr_node = prog.nodes[cid]
            if isinstance(curr_node, UnknownNode):
                return True

            if curr_node.val == "Single":
                return check_unk(prog, prog.children[cid][0], idx)
            elif curr_node.val == "Seq":
                return check_unk(prog, prog.children[cid][idx], idx)

            return False

        starts_with_unk = lambda p: check_unk(p, 0, 0)
        ends_with_unk = lambda p: check_unk(p, 0, 1)

        rev_stmts = list(reversed(stmts))

        self.visit(rev_stmts[0])
        sing_prod = self.grammar.get_prod("Single")
        sing_nt = sing_prod.args[0]
        seq_prod = self.grammar.get_prod("Seq")
        seq_nt = seq_prod.args[1]
        if self.sketch == None:
            # sketch = construct_prog("Single", sing_prod, [self.fresh_unknown_prog(sing_nt)])
            # NOTE: Unknowns should (potentially) be sequences of statements, not just single statements
            sketch = self.fresh_unknown_prog(seq_nt)
            prev_unk = sketch.root
            self.unk_map[prev_unk].insert(0, self.generator.visit(rev_stmts[0]))
        else:
            sketch = construct_prog("Single", sing_prod, [self.sketch])

        for i,stmt in enumerate(rev_stmts[1:]):
            self.visit(stmt)

            if self.sketch == None:
                # Statement is a source statement

                # Construct unknown program for source statement
                # NOTE: Unknowns should (potentially) be sequences of statements, not just single statements
                unk_prog = self.fresh_unknown_prog(seq_nt)

                if not starts_with_unk(sketch):
                    # If no unknowns to merge, just construct seq program and add stmt to unknown statement
                    sketch = construct_prog("Seq", seq_prod, [unk_prog, sketch])
                    self.unk_map[unk_prog.root].insert(0, self.generator.visit(stmt))
                    # Set previous unknown as current unknown
                    prev_unk = unk_prog.root
                else:
                    # Merge unknown statement with prev unknown statement
                    self.unk_map[prev_unk].insert(0, self.generator.visit(stmt))
            else:
                sketch = construct_prog("Seq", seq_prod, [self.sketch, sketch])

            self.sketch = None

        self.sketch = sketch

    def visit_Compound(self, node):
        self.process_block(node.block_items)

    def visit_DoWhile(self, node):
        raise NotImplementedError

    def visit_While(self, node):
        if self.in_obf_func:
            self.visit(node.stmt)
            while_prod = self.grammar.get_prod("While")
            self.guards.add(self.generator.visit(node.cond))
            if not self.add_guards:
                guard_nt = while_prod.args[0]
                guard = self.fresh_unknown_prog(guard_nt)
                self.unk_map[guard.root].insert(0, self.generator.visit(node.cond))
            else:
                guard_str = self.generator.visit(node.cond)
                guard = construct_prog(SOURCE_GUARD_NAME, self.grammar.get_guard_prod(guard_str),
                                       [guard_str])
            self.sketch = construct_prog("While", while_prod,
                                         [guard, self.sketch])
        else:
            if node.stmt:
                self.visit(node.stmt)

    def visit_For(self, node):
        raise NotImplementedError
        # if self.in_obf_func:
        #     self.visit(node.stmt)
        #     while_prod = self.grammar.get_prod("While")
        #     guard_nt = while_prod.args[0]
        #     sketch = construct_prog("While", while_prod, [self.fresh_unknown_prog(guard_nt), self.sketch])
        #     seq_prod = self.grammar.get_prod("Seq")
        #     seq_nt = seq_prod.args[0]
        #     self.sketch = construct_prog("Seq", seq_prod, [self.fresh_unknown_prog(seq_nt), self.sketch])
        # else:
        #     if node.stmt:
        #         self.visit(node.stmt)

    def visit_If(self, node):
        if self.in_obf_func:
            self.visit(node.iftrue)
            tsketch = self.sketch
            self.guards.add(self.generator.visit(node.cond))
            if node.iffalse:
                self.visit(node.iffalse)
                fsketch = self.sketch
                ite_prod = self.grammar.get_prod("ITE")
                if not self.add_guards:
                    guard_nt = ite_prod.args[0]
                    guard = self.fresh_unknown_prog(guard_nt)
                    self.unk_map[guard.root].insert(0, self.generator.visit(node.cond))
                else:
                    guard_str = self.generator.visit(node.cond)
                    guard = construct_prog(SOURCE_GUARD_NAME, self.grammar.get_guard_prod(guard_str),
                                           [guard_str])

                self.sketch = construct_prog("ITE", ite_prod, [guard, tsketch, fsketch])
            else:
                if_prod = self.grammar.get_prod("If")
                if not self.add_guards:
                    guard_nt = if_prod.args[0]
                    guard = self.fresh_unknown_prog(guard_nt)
                    self.unk_map[guard.root].insert(0, self.generator.visit(node.cond))
                else:
                    guard_str = self.generator.visit(node.cond)
                    guard = construct_prog(SOURCE_GUARD_NAME, self.grammar.get_guard_prod(guard_str),
                                           [guard_str])

                self.sketch = construct_prog("If", if_prod, [guard, tsketch])
        else:
            if node.iftrue:
                self.visit(node.iftrue)
            if node.iffalse:
                self.visit(node.iffalse)

    def visit_Switch(self, node):
        raise NotImplementedError

    def visit_Case(self, node):
        raise NotImplementedError

class CAnalysis(Analysis):
    """Class for analyzing C programs."""

    def __init__(self) -> None:
        self.left_used_vars_cache = {}
        self.decl_vars_cache = {}
        super().__init__()

    @staticmethod
    def parse_source(src: str) -> c_ast.FileAST:
        """Parse C source code into an AST.

        Args:
            src: C source code.

        Returns:
            AST of C source code.
        """
        from pycparser import parse_file as c_parse_file

        with tempfile.NamedTemporaryFile() as f:
            prog_with_header = HEADERS + "\n" + src
            f.write(prog_with_header.encode())
            f.flush()

            ast = c_parse_file(f.name, use_cpp=True, cpp_args=r'-I./resources/fake_libc_include')
            return ast


    def get_guards(self, ast: Any, traces: list[Trace]) -> list[TraceSource]:
        """ Extract guards from given program. Deadcode will be excluded.

        Arguments:
        ast (any) -- C program ast
        traces ([Trace]) -- program traces

        Returns
        guards ([str]) -- guards extracted from prog
        """

        guards = set()
        for trace in traces:
            for source in trace.sources:
                match source:
                    case TraceSource(kind=TraceSourceKind.GUARD):
                        guards.add(source)

        return list(guards)

    def get_stmts(self, ast: Any, traces: list[Trace]) -> list[TraceSource]:
        """ Extract stmts from given program. Deadcode will be excluded.

        Arguments:
        ast (any) -- C program ast
        traces ([Trace]) -- program traces

        Returns
        stmts ([str]) -- stmts extracted from prog
        """
        stmts = set()
        for trace in traces:
            for source in trace.sources:
                match source:
                    case TraceSource(kind=TraceSourceKind.STATEMENT):
                        stmts.add(source)

        return list(stmts)

    def get_guards_and_stmts_from_path(self, prog_path: str, traces: List[Trace]):
        """ Retrieve guards and statements from program.

        Arguments:
        prog_path (str) -- path to program
        traces ([Trace]) -- program traces

        Returns:
        guards ([str]) -- program guards
        stmts ([str]) -- program statements
        """
        return self.get_guards_and_stmts(None, traces)

    def is_valid(self, prog: Program, decl_vars, used_vars):
        """ Check if program is valid. """
        if self.has_uninit_access(prog, decl_vars, used_vars):
            return False

        return not self.has_ret_in_seq(prog)

    def has_ret_in_seq(self, prog: Program):
        """ Checks for a ret with other code following it in sequence.

        Arguments:
        prog (Program) -- program to be checked

        Returns:
        check (bool) -- whether or not the program has a return in sequence
        """

        def _check_node(node: Node) -> Tuple[bool, bool]:
            """Checks if (1) node has return and (2) node has bad return in sequence."""
            if isinstance(node, UnknownNode):
                return False, False

            assert isinstance(node, ValueNode)
            func = node.val

            if func == "Stmt":
                return _check_node(prog.nodes[prog.children[node.id][0]])
            elif func == SOURCE_GUARD_NAME:
                return False, False
            elif func == SOURCE_STMT_NAME:
                assert isinstance(prog.nodes[prog.children[node.id][0]], ValueNode)
                stmt = prog.nodes[prog.children[node.id][0]].val
                if statement_is_return(stmt):
                    return True, False
                return False, False
            elif func == "Single":
                return _check_node(prog.nodes[prog.children[node.id][0]])
            elif func == "Seq":
                has_ret, bad_ret = _check_node(prog.nodes[prog.children[node.id][0]])
                if has_ret or bad_ret:
                    return has_ret, has_ret or bad_ret # or the last two because ret in first part of seq is bad!
                return _check_node(prog.nodes[prog.children[node.id][1]])
            elif func in ["If", "While"]:
                # NOTE: Don't need to check guard
                has_ret, bad_ret = _check_node(prog.nodes[prog.children[node.id][1]])
                return False, bad_ret # Should not pass along body ret info b/c different scope
            elif func == "ITE":
                # NOTE: Don't need to check guard
                has_ret, bad_ret = _check_node(prog.nodes[prog.children[node.id][1]])
                if bad_ret: return False, bad_ret # Should not pass along body ret info b/c different scope
                has_ret, bad_ret =  _check_node(prog.nodes[prog.children[node.id][2]])
                return False, bad_ret # Should not pass along body ret info b/c different scope

            raise Exception("Unrecognized function: {}".format(func))

        _, bad_ret = _check_node(prog.nodes[0])

        return bad_ret

    def has_uninit_access(self, prog: Program, decl_vars, used_vars):
        """ Check if program has uninitialized variable accesses. """

        def _check_node(node: Node, curr_vars: set[str]) -> tuple[bool, set[str]]:
            """ Checks node for uninitialized accesses. """
            if isinstance(node, UnknownNode):
                if node.nonterm != SOURCE_GUARD_NONTERM:
                    # Add in any possible variable
                    # NOTE: Could maybe be smarter because not all still available...
                    curr_vars = curr_vars.union(set([v for stmt_vars in decl_vars.values()
                                                     for (_,v) in stmt_vars]))
                return False, curr_vars

            assert isinstance(node, ValueNode)
            child_0 = prog.nodes[prog.children[node.id][0]]
            child_1 = prog.nodes[prog.children[node.id][1]] if len(prog.children[node.id]) > 1 else None

            func = node.val
            if func == "Stmt":
                return _check_node(child_0, curr_vars)
            elif func == SOURCE_GUARD_NAME:
                assert isinstance(child_0, ValueNode)
                guards = child_0.code()
                used_vars_in_guards = [v for g in guards for v in used_vars[g]]
                return any(u not in curr_vars for u in used_vars_in_guards), curr_vars
            elif func == SOURCE_STMT_NAME:
                assert isinstance(child_0, ValueNode)
                stmt, *rest = child_0.code()
                assert not rest, "only support single stmt"
                uvs = used_vars[stmt]
                curr_vars = curr_vars.union(set([v for _,v in decl_vars[stmt]]))
                return any(u not in curr_vars for u in uvs), curr_vars

            if func == "Single":
                return _check_node(child_0, curr_vars)
            elif func == "Seq":
                check, curr_vars = _check_node(child_0,
                                               curr_vars)
                if check: return check, curr_vars
                return _check_node(prog.nodes[prog.children[node.id][1]], curr_vars)
            elif func in ["If", "While"]:
                check, _ = _check_node(child_0,
                                               curr_vars)
                if check: return check, curr_vars
                check, _ = _check_node(prog.nodes[prog.children[node.id][1]], curr_vars)
                return check, curr_vars
            elif func == "ITE":
                check, _ = _check_node(child_0,
                                               curr_vars)
                if check: return check, curr_vars
                check, _ = _check_node(prog.nodes[prog.children[node.id][1]],
                                               curr_vars)
                if check: return check, curr_vars
                check, _ =  _check_node(prog.nodes[prog.children[node.id][2]], curr_vars)
                return check, curr_vars

            raise Exception("Unrecognized function: {}".format(func))

        assert prog.signature is not None
        input_vars = {param.name for param in prog.signature.params}

        check, _ = _check_node(prog.nodes[0], input_vars)

        return check

    def generate_sketch_from_path(self, prog_path: str, grammar: Grammar,
                                  add_guards: bool=False) -> Tuple[Program, Dict[Node, List[str]], Set[str]]:
        """Generates a control-flow sketch and unknown map from the given program path.

        Arguments:
        prog (str) -- program body
        grammar (Grammar) -- source grammar
        add_guards (bool) -- if True then guards are added explicitly

        Returns:
        prog (Program) -- control flow sketch
        unk_map ({Node: [str]}) -- map from unknowns to statements in them
        guards ({str}) -- guards in the program
        """
        with open(prog_path, "r") as f:
            prog = f.read()

        return self.generate_sketch(prog, grammar, add_guards)

    def generate_sketch(self, prog: str, grammar: Grammar,
                        add_guards: bool=False) -> Tuple[Program, Dict[Node, List[str]], Set[str]]:
        """Generates a control-flow sketch from the given program.

        Arguments:
        prog (str) -- program body
        grammar (Grammar) -- source grammar
        add_guards (bool) -- if True then guards are added explicitly

        Returns:
        prog (Program) -- control flow sketch
        unk_map ({Node: [str]}) -- map from unknowns to statements in them
        guards ({str}) -- guards in the program
        """
        ast = self.parse_source(prog)
        visitor = CFSketchVisitor(grammar, add_guards)
        visitor.visit(ast)

        for unk in visitor.unk_map:
            if not "Guard" in str(unk):
                visitor.unk_map[unk] = list(map(post_process_c_stmt, visitor.unk_map[unk]))

        return visitor.sketch, visitor.unk_map, visitor.guards

    def get_min_vars(self, sketch: Program, traces: List[Trace], used_vars: dict[str, set[str]]
                     ) -> Dict[UnknownNode, Set[str]]:
        """ Gets the minimal set of variables necessary at each unknown in the program.

        Arguments:
        sketch (Program) -- program sketch to use
        traces ([Trace]) -- list of traces to use for checking
        used_vars ({str: {str}}) -- map from statements to used variables

        Returns:
        min_vars ({UnknownNode: {str}})
        """
        def min_vars(nid: int, unks: Set[UnknownNode], curr_vars: Set[str],
                     curr_min_vars: Dict[UnknownNode, Set[str]]):
            node = sketch.nodes[nid]
            if isinstance(node, UnknownNode):
                curr_min_vars[node] = curr_vars.copy()
                unks.add(node)
                return unks, curr_vars, curr_min_vars

            func = node.val

            if func == "Single":
                c = sketch.children[nid][0]
                return min_vars(c, unks, curr_vars, curr_min_vars)
            elif func == "Seq":
                c1 = sketch.children[nid][0]
                unks1, curr_vars1, curr_min_vars1 = min_vars(c1, unks, curr_vars, curr_min_vars)
                c2 = sketch.children[nid][1]
                return min_vars(c2, unks1, curr_vars, curr_min_vars)
            elif func == "If":
                gnode = sketch.nodes[sketch.children[sketch.children[nid][0]][0]]
                assert isinstance(gnode, ValueNode)
                gvars = {v for g in gnode.code() for v in used_vars[g]}
                curr_vars.update(gvars)
                for unk in unks:
                    curr_min_vars[unk].update(gvars)
                c = sketch.children[nid][1]
                return min_vars(c, unks, curr_vars, curr_min_vars)
            elif func == "ITE":
                gnode = sketch.nodes[sketch.children[sketch.children[nid][0]][0]]
                assert isinstance(gnode, ValueNode)
                gvars = {v for g in gnode.code() for v in used_vars[g]}
                curr_vars.update(gvars)
                for unk in unks:
                    curr_min_vars[unk].update(gvars)
                c1 = sketch.children[nid][1]
                unks1, curr_vars1, curr_min_vars1 = min_vars(c1, unks, curr_vars, curr_min_vars)
                c2 = sketch.children[nid][2]
                return min_vars(c2, unks1, curr_vars1, curr_min_vars1)
            elif func == "While":
                gnode = sketch.nodes[sketch.children[sketch.children[nid][0]][0]]
                assert isinstance(gnode, ValueNode)
                gvars = {v for g in gnode.code() for v in used_vars[g]}
                curr_vars.update(gvars)
                for unk in unks:
                    curr_min_vars[unk].update(gvars)
                c = sketch.children[nid][1]
                return min_vars(c, unks, curr_vars, curr_min_vars)
            elif func == "Stmt":
                c = sketch.children[nid][0]
                return min_vars(c, unks, curr_vars, curr_min_vars)

            raise Exception("Unrecognized function: {}".format(func))

        # TODO: In general, this handling of return vars needed is not general but works for now...
        #       Fine if I implement var backtracking
        # Collect all variables used in return statements
        ret_vars = set()
        for trace in traces:
            ret_vars.update(used_vars[trace.sources[-1].src])

        rid = [i for i,n in sketch.nodes.items() if sketch.root == n][0]
        return min_vars(rid, set(), ret_vars, {})[2]
    
    def enumerate_control_flow_sketches(self, grammar: Grammar, init_prog: Optional[Program] = None) -> Iterable[Program]:
        """
        Enumerate all possible sketches for the C language
        """

        PHANTOM_PRODUCTIONS = [
            Production(grammar.get_prod("Single").args[0], "?[P]", []),
        ]

        # remove statement production from grammar
        productions = grammar.productions.copy()
        productions[grammar.get_prod("Single").args[0]].remove(grammar.get_prod("Stmt"))

        queue = [Program(grammar.start) if init_prog is None else init_prog]
        while queue:
            prog = queue.pop(0)
            if prog.complete():
                yield prog
                continue

            next_unk = prog.leftmost_unknown()
            assert next_unk, "No unknown nodes left in program"

            # fill guard or statement with phantom production
            if next_unk.nonterm is grammar.guard_nterms[0]:
                prog.expand(next_unk.id, Production(next_unk.nonterm, f"?[{next_unk.nonterm.name}]", []))
                queue.append(prog)
                continue

            for prod in PHANTOM_PRODUCTIONS:

                # hack way to rule out `[S -> ?P]; [S -> ?P]; P` where the second S is expanded as ?P.
                # https://utopia-n6p7475.slack.com/archives/D02DC1WAD4G/p1661454971249309

                if next_unk.nonterm.name == "S":
                    parent_id = prog.parent.get(next_unk.id)
                    parent_node = prog.nodes.get(parent_id)

                    if parent_node and parent_node.val == "Seq":
                        parent_id = prog.parent.get(parent_id)
                        parent_node = prog.nodes.get(parent_id)
                        if parent_node and parent_node.val == "Seq":
                            if prog.nodes[prog.children[parent_id][0]].val == "?[P]":
                                continue
                
                # disable expansion of S -> "?[P]". Meaningless having `Single(?[P])`
                if next_unk.nonterm.name == "S":
                    parent_id = prog.parent.get(next_unk.id)
                    parent_node = prog.nodes.get(parent_id)

                    if parent_node and parent_node.val == "Single":
                        continue

                new_prog = prog.copy()
                new_prog.expand(next_unk.id, prod)

                # rule out duplicates when we substitute ?P -> ?[P] (hole)
                queue.append(new_prog)
            
            for prod in productions[next_unk.nonterm]:

                # hack way to disallow top-level `Single`
                if len(prog.nodes) == 1 and prod.fname == "Single":
                    continue

                new_prog = prog.copy()
                new_prog.expand(next_unk.id, prod)
                queue.append(new_prog)
