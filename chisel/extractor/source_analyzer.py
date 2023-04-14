from typing import Optional, NewType
from collections import defaultdict
from dataclasses import dataclass, field
from enum import Flag, auto
import re
import logging

from pycparser import c_ast, c_generator

from trace import TraceSource, TraceSourceKind
from langs.c.c_analysis import post_process_c_stmt
from utils import NoOverwriteDict, statement_contains_control_flow


@dataclass(frozen=True, slots=True)
class SourceParseConfig:
    flatten_arg_structs: bool = field(default=True)
    arg_struct_regex: str = field(default=r"^([a-zA-Z_][a-zA-Z0-9_]*)_arg$")

    rename_variables: bool = field(default=True)
    variable_regex: str = field(default=r"^(.+)___\d+$")

    merge_guards: bool = field(default=True)
    record_line_numbers: bool = field(default=False)

    negate_matched_guards: bool = field(default=True)
    negate_inconsistent_guards: bool = field(default=True)


class SourceLineType(Flag):
    GUARD = auto()
    STMT = auto()
    IF_TRUE = auto()
    IF_FALSE = auto()
    WHILE_TRUE = auto()
    SWITCH_CASE = auto()
    SWITCH_DEFAULT = auto()

    GUARD_IF = auto()
    GUARD_ITE = auto()
    GUARD_WHILE = auto()
    GUARD_SWITCH = auto()

    LABEL = auto()


@dataclass(frozen=False, slots=True, eq=False)
class SourceLineInfo:
    src: str
    type: SourceLineType
    line: int
    additional_guard: Optional[str] = None
    guard_val_types: dict[str, SourceLineType] = field(default_factory=dict)

    def __post_init__(self):
        assert self.src.strip()
        assert (
            SourceLineType.GUARD in self.type
            or SourceLineType.STMT in self.type
            or SourceLineType.LABEL in self.type
        )

    def add_type(self, type: SourceLineType, parent_guard: str | None = None) -> None:
        self.type |= type
        assert (
            SourceLineType.IF_TRUE not in self.type
            or SourceLineType.IF_FALSE not in self.type
        )
        if parent_guard is not None:
            assert parent_guard.strip()
            assert parent_guard not in self.guard_val_types
            self.guard_val_types[parent_guard] = type

    def add_guard(self, guard: str) -> None:
        assert self.additional_guard is None
        assert guard.strip()
        assert (
            SourceLineType.SWITCH_CASE in self.type or 
            SourceLineType.SWITCH_DEFAULT in self.type
        ), "Only case statements can have additional guards"
        self.additional_guard = guard

    def to_trace_source(self) -> TraceSource:
        assert (SourceLineType.STMT in self.type) != (
            SourceLineType.GUARD in self.type
        ), "Source line must be either a statement or a guard"
        return TraceSource(
            src=self.src,
            kind=(
                TraceSourceKind.GUARD
                if SourceLineType.GUARD in self.type
                else TraceSourceKind.STATEMENT
            ),
        )


@dataclass(frozen=True, slots=True, eq=False)
class SourceFileInfo:
    sources: dict[int, SourceLineInfo]
    funcs: dict[int, str]
    switch_case_guards: dict[str, list[str]]
    switch_case_line_nums: dict[str, list[int]]
    replaced_vars: dict[int, dict[str, str]]
    first_func_decl_line: int
    num_ifs: int
    num_switches: int
    num_cases: int
    num_whiles: int
    


class RemoveStructGenerator(c_generator.CGenerator):
    def __init__(self, config: SourceParseConfig) -> None:
        self.config = config
        self.variable_map_per_line: defaultdict[int, dict[str, str]] = defaultdict(dict)
        super().__init__()

    def _has_struct_to_remove(self, node):
        if not self.config.flatten_arg_structs:
            return False

        match node:
            case c_ast.StructRef(name=name, field=field):
                return self._has_struct_to_remove(name) or self._has_struct_to_remove(
                    field
                )
            case c_ast.ID(name=name):
                return re.match(self.config.arg_struct_regex, name)
            case c_ast.UnaryOp(op="*", expr=expr):
                return self._has_struct_to_remove(expr)

    def visit_StructRef(self, node):
        if not self._has_struct_to_remove(node):
            return super().visit_StructRef(node)

        return self.visit(node.field)

    def visit_UnaryOp(self, node):
        match node:
            case c_ast.UnaryOp(op="*", expr=expr):
                if self._has_struct_to_remove(expr):
                    return self.visit(expr)

        return super().visit_UnaryOp(node)

    def visit_ID(self, node):
        if not self.config.rename_variables:
            return super().visit_ID(node)

        match node:
            case c_ast.ID(name=name):
                match = re.match(self.config.variable_regex, name)
                replaced_name = match.group(1) if match is not None else name

                # sanity check: only one variable will be used in the same scope
                # for example, you can't have k = k___0
                # btw we need to ignore tmp___0, a special variable created by Tigress
                is_valid = (
                    (name == replaced_name)
                    or (
                        replaced_name not in self.variable_map_per_line[node.coord.line]
                    )
                    or (
                        self.variable_map_per_line[node.coord.line][replaced_name]
                        == name
                    )
                    or name.startswith("tmp___")
                    or name.startswith(
                        "_1_OBF_FUNC_next___"
                    )  # TODO: obviously this is a hack :)
                )
                if is_valid:
                    self.variable_map_per_line[node.coord.line][replaced_name] = name
                else:
                    logging.warning(
                        f"Invalid variable name: {name} -> {replaced_name} at line {node.coord.line}"
                    )
                return replaced_name


VarDecl = NewType("VarDecl", (str, str))


class SourceLineExtractor(c_ast.NodeVisitor):
    lines: dict[int, SourceLineInfo]
    funcs: dict[int, str]
    switch_case_guards: dict[str, list[str]]
    switch_case_line_nums: dict[str, dict[str, int]]
    switches_worklist: list[str]
    config: SourceParseConfig

    active_line: Optional[SourceLineInfo]
    active_left_var: Optional[SourceLineInfo]
    used_vars: dict[str, frozenset[str]]
    left_vars: dict[str, frozenset[str]]
    decl_vars: dict[str, frozenset[VarDecl]]

    first_func_decl_line: int
    num_ifs: int
    num_switches: int
    num_cases: int
    num_whiles: int

    def to_source_file_info(self) -> SourceFileInfo:
        return SourceFileInfo(
            sources=self.lines,
            funcs=self.funcs,
            replaced_vars=self.generator.variable_map_per_line,
            switch_case_guards=self.switch_case_guards,
            switch_case_line_nums=self.switch_case_line_nums,
            first_func_decl_line=self.first_func_decl_line,
            num_ifs=self.num_ifs,
            num_switches=self.num_switches,
            num_cases=self.num_cases,
            num_whiles=self.num_whiles,
        )

    def finalize(self) -> None:
        if self.config.flatten_arg_structs:
            for k, v in self.used_vars.items():
                self.used_vars[k] = frozenset(
                    x for x in v if not re.match(self.config.arg_struct_regex, x)
                )

    def __init__(self, config: SourceParseConfig) -> None:
        self.lines = NoOverwriteDict()
        self.switches_worklist = []
        self.generator = RemoveStructGenerator(config)
        self.config = config

        self.used_vars = {}
        self.left_vars = {}
        self.decl_vars = {}
        self.funcs = {}
        self.switch_case_guards = {}
        self.switch_case_line_nums = {}
        self.first_func_decl_line = -1
        self.num_ifs = 0
        self.num_switches = 0
        self.num_cases = 0
        self.num_whiles = 0

        for kw in {"break;", "continue;", "return;"}:
            self.used_vars[kw] = frozenset()
            self.left_vars[kw] = frozenset()
            self.decl_vars[kw] = frozenset()

        self.active_line = None
        self.active_left_var = None
        super().__init__()

    @staticmethod
    def _extract_coord(node):
        if node is None:
            return None
        elif isinstance(node, c_ast.Compound) and node.block_items:
            return SourceLineExtractor._extract_coord(node.block_items[0])
        else:
            return node.coord.line

    def visit_FuncDef(self, node):
        decl_line_num = node.decl.coord.line
        if self.first_func_decl_line < 0:
            self.first_func_decl_line = decl_line_num

        self.generic_visit(node)
        self.funcs[node.decl.coord.line] = node.decl.name
        possible_bracket_line = node.decl.coord.line + 1
        # GDB sometimes report the "{" line as the function line
        if possible_bracket_line not in self.lines:
            self.funcs[possible_bracket_line] = node.decl.name

    def visit_ID(self, node):
        if self.active_line is not None:
            self.used_vars[self.active_line.src].add(self.generator.visit(node))
        if self.active_left_var is not None:
            self.left_vars[self.active_left_var.src].add(self.generator.visit(node))

    def visit_FuncCall(self, node):
        if node.args:
            self.visit(node.args)
        if isinstance(node.name, c_ast.ID) and node.name.name in {"printf", "fprintf"}:
            assert self.active_line is not None
            self.left_vars[self.active_line.src].add("__stdout__")
            self.used_vars[self.active_line.src].add("__stdout__")

    def visit_Assignment(self, node):
        if self.active_line is not None:
            self.active_left_var = self.active_line
            self.left_vars[self.active_line.src].add(self.generator.visit(node.lvalue))
            self.visit(node.lvalue)
            self.active_left_var = None
            self.visit(node.rvalue)
        else:
            self.visit(node.lvalue)
            self.visit(node.rvalue)

    def visit_Decl(self, node):
        if self.active_line is not None:
            name = node.name
            self.generator.visit(node)

            if self.active_line.line in self.generator.variable_map_per_line:
                for replaced, orig in self.generator.variable_map_per_line[
                    self.active_line.line
                ].items():
                    if orig == name:
                        name = replaced
                        break

            self.left_vars[self.active_line.src].add(name)
            self.decl_vars[self.active_line.src].add(
                VarDecl((self.generator.visit(node.type), name))
            )
        if node.type:
            self.visit(node.type)
        if node.init:
            self.visit(node.init)

    def visit_UnaryOp(self, node):
        if node.op in {"p++", "p--", "++", "--"}:
            if self.active_line is not None:
                self.left_vars[self.active_line.src].add(
                    self.generator.visit(node.expr)
                )
        self.visit(node.expr)

    def _process_stmt(self, node):
        if (
            isinstance(node, c_ast.Compound)
            or isinstance(node, c_ast.DoWhile)
            or isinstance(node, c_ast.While)
            or isinstance(node, c_ast.For)
            or isinstance(node, c_ast.If)
            or isinstance(node, c_ast.Case)
            or isinstance(node, c_ast.Switch)
            or isinstance(node, c_ast.Label)
            or isinstance(node, c_ast.EmptyStatement)
            or isinstance(node, c_ast.Default)
        ):
            src_line = None
        else:
            src_line = self._set_line(
                post_process_c_stmt(self.generator.visit(node)),
                SourceLineType.STMT,
                self._extract_coord(node),
            )

        self._visit_with_active_line(node, src_line)

    def _set_line(
        self,
        src: str,
        type: SourceLineType,
        start_line: int,
        end_line: Optional[int] = None,
    ):
        if end_line is None or start_line == end_line:
            end_line = start_line + 1
        src_line = SourceLineInfo(src, type, start_line)
        for line in range(start_line, end_line):
            self.lines[line] = src_line
        return src_line

    def _process_control_flow_child(self, node, type: SourceLineType, parent_guard: str):
        self._process_stmt(node)
        if isinstance(node, c_ast.Compound) and not node.block_items:
            return
        line = self._extract_coord(node)
        if line in self.lines:
            self.lines[line].add_type(type, parent_guard)
        else:
            print(
                f"WARNING: Line {line} indicates a control-flow structure with an empty body"
            )

    def _visit_with_active_line(self, node, line):
        self.active_line = line
        if self.active_line is not None:
            self.left_vars.setdefault(self.active_line.src, set())
            self.used_vars.setdefault(self.active_line.src, set())
            self.decl_vars.setdefault(self.active_line.src, set())
        if node is not None:
            self.visit(node)
        self.active_line = None

    def visit_Compound(self, node):
        if not node.block_items:
            return

        for stmt in node.block_items:
            self._process_stmt(stmt)

    def visit_Label(self, node):
        self._process_stmt(node.stmt)

        line = self._extract_coord(node)
        if line not in self.lines:
            self._set_line(node.name, SourceLineType.LABEL, line)

    def visit_If(self, node):
        self.num_ifs += 1
        parent_guard = self.generator.visit(node.cond)
        cond = self._set_line(
            parent_guard,
            SourceLineType.GUARD
            | (SourceLineType.GUARD_ITE if node.iffalse else SourceLineType.GUARD_IF),
            self._extract_coord(node),
            self._extract_coord(node.iftrue),
        )
        self._visit_with_active_line(node.cond, cond)

        if node.iftrue:
            self._process_control_flow_child(node.iftrue, SourceLineType.IF_TRUE, parent_guard)
        if node.iffalse:
            self._process_control_flow_child(node.iffalse, SourceLineType.IF_FALSE, parent_guard)

    def visit_While(self, node):
        self.num_whiles += 1
        parent_guard = self.generator.visit(node.cond)
        cond = self._set_line(
            parent_guard,
            SourceLineType.GUARD | SourceLineType.GUARD_WHILE,
            self._extract_coord(node),
            self._extract_coord(node.stmt),
        )
        self._visit_with_active_line(node.cond, cond)

        if node.stmt:
            self._process_control_flow_child(node.stmt, SourceLineType.WHILE_TRUE, parent_guard)

    def visit_DoWhile(self, node):
        self.num_whiles += 1
        parent_guard = self.generator.visit(node.cond)
        cond = self._set_line(
            parent_guard,
            SourceLineType.GUARD | SourceLineType.GUARD_WHILE,
            self._extract_coord(node),
            self._extract_coord(node.stmt),
        )
        self._visit_with_active_line(node.cond, cond)

        if node.stmt:
            self._process_control_flow_child(node.stmt, SourceLineType.WHILE_TRUE, parent_guard)

    def visit_For(self, node):
        self.num_whiles += 1
        parent_guard = self.generator.visit(node.cond)
        cond = self._set_line(
            parent_guard,
            SourceLineType.GUARD | SourceLineType.GUARD_WHILE,
            self._extract_coord(node),
            self._extract_coord(node.stmt),
        )
        self._visit_with_active_line(node.cond, cond)

        if node.init:
            self._process_stmt(node.init)
        if node.next:
            self._process_stmt(node.next)
        if node.stmt:
            self._process_control_flow_child(node.stmt, SourceLineType.WHILE_TRUE, parent_guard)

    def visit_Switch(self, node):
        self.num_switches += 1
        match node:
            case c_ast.Switch(cond=cond, stmt=stmt, coord=coord):
                cond_name = self.generator.visit(cond)
                cond_line = self._set_line(
                    cond_name,
                    SourceLineType.GUARD | SourceLineType.GUARD_SWITCH,
                    coord.line,
                )
                self._visit_with_active_line(node.cond, cond_line)

                self.switches_worklist.append(cond_name)
                self.visit(stmt)
                self.switches_worklist.pop()
            case _:
                raise NotImplementedError("unhandled switch case")
        
        sorted_line_nums = list(sorted(self.switch_case_line_nums[cond_name].items(), key=lambda x: x[1]))
        
        for guard, _ in sorted_line_nums:
            self.used_vars.setdefault(guard, set()).update(self.used_vars[cond_name])
            self.left_vars.setdefault(guard, set())
            self.decl_vars.setdefault(guard, set())


        for (guard, line_num), (guard1, line_num1) in zip(sorted_line_nums, sorted_line_nums[1:]):
            
            slt = SourceLineType.SWITCH_DEFAULT if guard == "default" else SourceLineType.SWITCH_CASE
            for line in range(line_num, line_num1):
                if line in self.lines and self.lines[line].additional_guard is None:
                    self.lines[line].add_type(slt, cond_name)
                    self.lines[line].add_guard(guard)

        last_line = sorted_line_nums[-1][1]
        last_guard = sorted_line_nums[-1][0]
        slt = SourceLineType.SWITCH_DEFAULT if last_guard == "default" else SourceLineType.SWITCH_CASE
        max_line_num = max(self.lines.keys())
        while True:
            if last_line in self.lines and self.lines[last_line].additional_guard is None:
                self.lines[last_line].add_type(slt, cond_name)
                self.lines[last_line].add_guard(last_guard)

            # we still need guard for the last line (break;)
            if last_line in self.lines and statement_contains_control_flow(self.lines[last_line].src):
                break
            if last_line > max_line_num:
                break
            last_line += 1


    def visit_Default(self, node):
        self.num_cases += 1
        if not self.switches_worklist:
            raise RuntimeError("default statement outside of switch")
        self._process_stmts(node.stmts)
        self.switch_case_line_nums.setdefault(self.switches_worklist[-1], {})["default"] = self._extract_coord(node)


    def visit_Case(self, node):
        self.num_cases += 1
        if not self.switches_worklist:
            raise RuntimeError("case statement outside of switch")

        guard_src = f"{self.switches_worklist[-1]} == {node.expr.value}"
        self.switch_case_guards.setdefault(self.switches_worklist[-1], []).append(guard_src)
        self.switch_case_line_nums.setdefault(self.switches_worklist[-1], {})[guard_src] = self._extract_coord(node)
        self._process_stmts(node.stmts)


    def _process_stmts(self, stmts) -> SourceLineInfo | None:
        """
        Process a list of statements and return the first one
        """
        first_stmt = None
        for stmt in stmts:
            self._process_stmt(stmt)
            res = self.lines.get(self._extract_coord(stmt))
            if first_stmt is None and res is not None:
                first_stmt = res
        return first_stmt
