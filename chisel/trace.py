from collections import defaultdict
from dataclasses import dataclass, replace, astuple
from enum import Enum
import os
import subprocess
from typing import *
from warnings import warn
from types import MappingProxyType

import yaml

from paths import TMP_PATH
from utils import statement_contains_control_flow

cpp_headers = """#include <iostream>
#include <map>
#include <string>
#include <any>
#include <stdbool.h>
#include <assert.h>
#include <variant>"""

cpp_check_vals = """bool eq_check(variant<int, bool, string> v1, variant<int, bool, string> v2) {
  try {
    int i1 = get<int>(v1);
    int i2 = get<int>(v2);
    return i1 == i2;
  } catch (const std::bad_variant_access& ex) {}

  try {
    bool b1 = get<int>(v1);
    bool b2 = get<int>(v2);
    return b1 == b2;
  } catch (const std::bad_variant_access& ex) {}

  try {
    string s1 = get<string>(v1);
    string s2 = get<string>(v2);
    return s1 == s2;
  } catch (const std::bad_variant_access& ex) {}

  return false;
}

bool check_vals(map<string, variant<int, bool, string>> val, map<string, variant<int, bool, string>> trace_val) {
  for (pair<string, variant<int, bool, string>> p : val) {
    if (!eq_check(p.second, trace_val[p.first])) {
      return false;
    }
  }
  return true;
}"""

cpp_trace_func_template = "int trace_check_s{sid}(int trace_idx, map<string, variant<int, bool, string>> val);"

cpp_trace_check_template = """
int trace_check_s{sid}(int trace_idx, map<string, variant<int, bool, string>> val) {{
{body}
}}"""

if_template = """{indent}if ({cond}) {{
{body}
{indent}}}"""

cpp_template = """#include "libtrace_{tid}.h"

using namespace std;

namespace trace {{

{check_vals}

{stmt_checks}

}}"""

cpp_header_template = """{headers}

using namespace std;

namespace trace {{
{fdefs}
}}
"""

c_trace_dec_template = """struct trace_elem trace_s{sid}[{slen}];"""

c_trace_set_template = """  trace_s{sid}[{idx}] = e{eid};"""

c_set_absent_var_template = """  e{eid}.{var}_present = false;
  e{eid}.idx = {idx};"""

c_set_present_var_template = """  e{eid}.{var}_present = true;
  e{eid}.{var}_val = {val};
  e{eid}.idx = {idx};"""

c_set_var_template = """  e.{var}_present = {present};
  e.{var}_val = {var};"""

c_struct_elem_template = """  struct trace_elem e{eid};
{var_sets}"""

c_trace_build_template = """void build_trace() $LCURLY$
{body}
$RCURLY$"""

c_var_check_int_bool_template = """  if (src_elem.{var}_present) $LCURLY$
    if (!tgt_elem.{var}_present) $LCURLY$
      return false;
    $RCURLY$
    if (src_elem.{var}_val != tgt_elem.{var}_val) $LCURLY$
      return false;
    $RCURLY$
  $RCURLY$"""

c_var_check_string_template = """  if (src_elem.{var}_present) $LCURLY$
    if (!tgt_elem.{var}_present) $LCURLY$
      return false;
    $RCURLY$
    if (strcmp(src_elem.{var}_val, tgt_elem.{var}_val) != 0) $LCURLY$
      return false;
    $RCURLY$
  $RCURLY$"""

c_elem_check_template = """bool trace_elem_eq_check(int trace_idx, struct trace_elem src_elem, struct trace_elem tgt_elem) $LCURLY$
  if (trace_idx >= tgt_elem.idx) return false;
{body}

  return true;
$RCURLY$"""

c_trace_check_template = """int trace_check_s{sid}(int trace_idx, {var_params}) $LCURLY$
{build_trace_elem}
  for (int i = 0; i < {slen}; i++) $LCURLY$
    struct trace_elem trace_e = trace_s{sid}[i];
    if (trace_elem_eq_check(trace_idx, e, trace_e)) $LCURLY$
      return trace_e.idx;
    $RCURLY$
  $RCURLY$
  assert(false);
$RCURLY$"""

c_lib_template = """
#include "libtrace_{tid}.h"

{trace_decs}

{trace_build}

{trace_elem_check}

{trace_checks}
"""

c_var_dec_template = """  {typ} {var}_val{arr};
  bool {var}_present;"""

c_trace_func_dec_template = """int trace_check_s{sid}(int trace_idx, {var_params});"""

c_header_template = """
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include <stdlib.h>

struct trace_elem $LCURLY$
{var_decs}
  int idx;
$RCURLY$;

void build_trace();
{trace_func_decs}"""

gpp_cmd_template = "g++-10 -std=c++20 -c {cpppath} -o {out}"

gcc_cmd_template = "gcc -c {cpath} -o {out}"


class TraceSourceKind(Enum):
    UNKNOWN = 0
    GUARD = 1
    STATEMENT = 2


@dataclass(eq=True, frozen=True)
class TraceSource:
    src: str  # source code
    kind: TraceSourceKind  # kind of trace source
    val: Optional[bool] = None  # value of guard execution
    line_number: Optional[int] = None  # line number of source code

    def try_negate(self) -> Optional["TraceSource"]:
        if self.kind != TraceSourceKind.GUARD:
            return None

        if not self.src.startswith("!"):
            return None

        guard_src = self.src[1:]
        if guard_src[-1] == ")" and guard_src[0] == "(":
            guard_src = guard_src[1:-1]

        guard_val = None if self.val is None else not self.val
        return replace(self, src=guard_src, val=guard_val)

    # __cache: ClassVar[dict[tuple, "TraceSource"]] = {}
    # __src_cache: ClassVar[dict["TraceSource", "TraceSource"]] = {}
    # __src_with_ln_cache: ClassVar[dict["TraceSource", "TraceSource"]] = {}

    # def __copy__(self):
    #     return self

    # def __deepcopy__(self, _):
    #     return self

    # def __new__(cls, *args, **kwargs):
    #     obj = super().__new__(cls)
    #     obj.__init__(*args, **kwargs)

    #     tup = astuple(obj)
    #     if tup not in cls.__cache:
    #         cls.__cache[tup] = obj
    #         cls.__src_cache[obj] = replace(obj, line_number=None, val=None)
    #         cls.__src_with_ln_cache[obj] = replace(obj, val=None)

    #     return cls.__cache[tup]

    def without_val(self):
        # return self.__src_with_ln_cache[self]
        return replace(self, val=None)

    def without_ln_and_val(self):
        # return self.__src_cache[self]
        return replace(self, line_number=None, val=None)

    def __repr__(self):
        match self.kind:
            case TraceSourceKind.GUARD:
                res = [f"{self.src}?"]
                if self.line_number is not None:
                    res.append(f"({self.line_number})")
                if self.val is not None:
                    res.append(f", {self.val}")
            case _:
                res = [self.src]
                if self.line_number is not None:
                    res.append(f"({self.line_number})")
        return " ".join(res)

    def __eq__(self, __o: object) -> bool:
        if not isinstance(__o, TraceSource):
            return False
        if self is __o:
            return True
        return (
            self.src == __o.src
            and (
                self.line_number == __o.line_number
                or self.line_number is None
                or __o.line_number is None
            )
            and (self.val == __o.val or self.val is None or __o.val is None)
        )

    def without_ln(self):
        return replace(self, line_number=None)


@dataclass(frozen=True, slots=True, repr=False, eq=False)
class SlimTraceItem:
    source: TraceSource
    pre_state: MappingProxyType[str, str]
    post_state: MappingProxyType[str, str]

    def __repr__(self) -> str:
        return repr(self.source)


class Trace:
    """Class for tracking trace information."""

    # static variables
    trace_id: int = 0

    # instance variables
    inputs: tuple[str, ...]
    items: Sequence[SlimTraceItem]
    sources: Sequence[TraceSource]

    def __init__(
        self,
        items: Sequence[SlimTraceItem],
        inputs: Optional[Sequence[str]] = None,
        ret_val: Optional[str] = None,
    ):
        self.ret_val = ret_val or ""  # Function return value
        self.inputs = tuple(inputs or [])  # List of inputs for trace
        self.items = tuple(items)
        self.sources = tuple(item.source for item in self.items)

        self.header_path = "/DUMMY_HEADER"  # Path to saved header for this trace
        self.c_header_path = None  # Path to saved header for this trace
        self.cpp_header_path = None  # Path to saved header for this trace
        self.c_path = None  # Path to saved c for this trace
        self.cpp_path = None  # Path to saved cpp for this trace
        self.c_o_path = None  # Path to saved object file for this trace
        self.cpp_o_path = None  # Path to saved object file for this trace
        self.vs = None  # Tracks all declared variables in trace
        self.trace_id = Trace.trace_id  # Unique id for this trace
        Trace.trace_id += 1

    def minimized_copy(
        self,
        min_vars: set[str],
        decl_vars: dict[str, set[tuple[str, str]]],
        used_vars: dict[str, set[str]],
        remove_unused_stmts: bool = False,
        remove_unused_vars: bool = True,
    ):
        """Create a copy of the trace that
        (1) removes declarations of variables not in min_vars, and
        (2) includes variable states that in min_vars.

        Returns:
            Trace: A copy of the trace with the above modifications if the trace is not empty, otherwise None.
        """

        minimized = []
        for _, item in enumerate(self.items):
            if any((v not in min_vars) for _, v in decl_vars.get(item.source.src, [])):
                continue

            if (
                remove_unused_stmts
                and not statement_contains_control_flow(item.source.src)
                and all((v not in min_vars) for v in used_vars.get(item.source.src, []))
                and all(
                    (v not in min_vars) for _, v in decl_vars.get(item.source.src, [])
                )
                and not item.source.src == "1"
            ):
                continue

            pre_state = MappingProxyType(
                {
                    k: v
                    for k, v in item.pre_state.items()
                    if k in min_vars or not remove_unused_vars
                }
            )
            post_state = MappingProxyType(
                {
                    k: v
                    for k, v in item.post_state.items()
                    if (k in min_vars or not remove_unused_vars)
                    and (
                        k in pre_state
                        # enforce var only appear in post_state if it is already defined
                        # or just declared
                        or any(v == k for _, v in decl_vars.get(item.source.src, []))
                    )
                }
            )

            stmt_used_vars = used_vars.get(item.source.src, set())
            stmt_decl_vars = {v for _, v in decl_vars.get(item.source.src, set())}
            stmt_required_vars = stmt_used_vars - stmt_decl_vars
            if any(v not in pre_state for v in stmt_required_vars):
                continue
            if any(v not in post_state for v in stmt_required_vars):
                continue
            if any(v not in pre_state for v in stmt_decl_vars):
                continue

            minimized.append(
                SlimTraceItem(
                    pre_state=pre_state,
                    post_state=post_state,
                    source=item.source,
                )
            )
        if minimized:
            return Trace(inputs=self.inputs, ret_val=self.ret_val, items=minimized)
        else:
            return None

    def __iter__(self):
        return iter(self.items)

    def __len__(self):
        return len(self.items)

    def gen_c_lib(self):
        indent = "  "

        # Build function to check equality of trace elements and build struct variable declations
        check_body = []
        var_decs = []
        var_params = []
        var_assns = []
        for typ, var in self.vs:
            var_assn = c_set_var_template.format(
                var=var, present="{}_present".format(var)
            )
            if typ == "string":
                var_param = "char {}[]".format(var)
                var_check = c_var_check_string_template.format(var=var)
                var_dec = c_var_dec_template.format(typ="char", var=var, arr="[50]")
            elif typ in ["int", "bool"]:
                var_param = "{} {}".format(typ, var)
                var_check = c_var_check_int_bool_template.format(var=var)
                var_dec = c_var_dec_template.format(typ=typ, var=var, arr="")
            else:
                raise Exception("Unrecognized type: {}".format(type(var)))

            check_body.append(var_check)
            var_decs.append(var_dec)
            var_params.append(var_param)
            var_params.append("bool {}_present".format(var))
            var_assns.append(var_assn)

        # Build functions to check each statement
        stmt_checks = []
        unique_sources = set(self.sources)
        fdefs = []
        tdecs = []
        theads = []
        build_body = []
        for src in unique_sources:
            # Build one function for each unique statement
            src_idx = self.sources.index(src)
            src_entries = [
                (j, val) for (j, val) in enumerate(self.trace) if self.sources[j] == src
            ]
            tcheck_body = []
            for i, (trace_idx, val) in enumerate(src_entries):
                eid = "{}_{}".format(src_idx, i)
                var_sets = []
                for _, var in self.vs:
                    if var in val:
                        var_set = c_set_present_var_template.format(
                            eid=eid, var=var, val=val[var], idx=trace_idx
                        )
                    else:
                        var_set = c_set_absent_var_template.format(
                            eid=eid, var=var, idx=trace_idx
                        )
                    var_sets.append(var_set)
                add_elem = c_struct_elem_template.format(
                    eid=eid, var_sets="\n".join(var_sets)
                )
                set_elem = c_trace_set_template.format(eid=eid, idx=i, sid=src_idx)
                build_body.append(add_elem)
                build_body.append(set_elem)

            fdef = c_trace_check_template.format(
                sid=src_idx,
                var_params=", ".join(var_params),
                build_trace_elem=c_struct_elem_template.format(
                    eid="", var_sets="\n".join(var_assns)
                ),
                slen=len(src_entries),
            )
            tdec = c_trace_dec_template.format(sid=src_idx, slen=len(src_entries))
            thead = c_trace_func_dec_template.format(
                sid=src_idx, var_params=", ".join(var_params)
            )
            fdefs.append(fdef)
            tdecs.append(tdec)
            theads.append(thead)

        # Build header/cpp file strings
        c_header_str = c_header_template.format(
            var_decs="\n".join(var_decs), trace_func_decs="\n".join(theads)
        )
        c_lib_str = c_lib_template.format(
            trace_decs="\n".join(tdecs),
            trace_build=c_trace_build_template.format(body="\n".join(build_body)),
            trace_elem_check=c_elem_check_template.format(body="\n".join(check_body)),
            trace_checks="\n\n".join(fdefs),
            tid=self.trace_id,
        )

        # Remove temporary characters
        c_header_str = c_header_str.replace("$LCURLY$", "{")
        c_header_str = c_header_str.replace("$RCURLY$", "}")
        c_lib_str = c_lib_str.replace("$LCURLY$", "{")
        c_lib_str = c_lib_str.replace("$RCURLY$", "}")

        if not os.path.exists(TMP_PATH):
            # Make tmp directory if not already made
            os.makedirs(TMP_PATH)

        # Build paths
        self.header_path = os.path.join(TMP_PATH, "libtrace_{}.h".format(self.trace_id))
        self.c_path = os.path.join(TMP_PATH, "libtrace_{}.c".format(self.trace_id))
        self.c_o_path = os.path.join(TMP_PATH, "libtrace_{}.o".format(self.trace_id))

        # Write header/cpp to file
        with open(self.header_path, "w") as f:
            f.write(c_header_str)
        with open(self.c_path, "w") as f:
            f.write(c_lib_str)

        # Build object file
        gcc_cmd = gcc_cmd_template.format(cpath=self.c_path, out=self.c_o_path)
        try:
            subprocess.call(gcc_cmd.split(), timeout=60)
        except subprocess.CalledProcessError as e:
            raise Exception("Building trace object file failed!\n{}".format(gcc_cmd))
        except subprocess.TimeoutExpired as e:
            raise Exception("Building trace object file timed out!\n{}".format(gcc_cmd))

    def gen_cpp_lib(self):
        indent = "  "

        # Build functions to check each statement
        stmt_checks = []
        unique_sources = set(self.sources)
        fdefs = []
        for src in unique_sources:
            # Build one function for each unique statement
            src_idx = self.sources.index(src)
            src_entries = [
                (j, val) for (j, val) in enumerate(self.trace) if self.sources[j] == src
            ]
            tcheck_body = []
            for i, (trace_idx, val) in enumerate(src_entries):
                # Make check for each possible trace entry
                idx_check = "trace_idx < {}".format(trace_idx)
                val_str = ", ".join(
                    ['{{"{}", {}}}'.format(var, value) for var, value in val.items()]
                )
                val_check = "check_vals(val, {{{}}})".format(val_str)
                cond = "{} && {}".format(idx_check, val_check)
                ret_str = "{}return {};".format(indent * 2, trace_idx)
                full_check = if_template.format(cond=cond, body=ret_str, indent=indent)
                tcheck_body.append(full_check)
            # No match = assert false
            tcheck_body.append("{}assert(false);".format(indent))

            stmt_check = cpp_trace_check_template.format(
                sid=src_idx, body="\n".join(tcheck_body)
            )
            stmt_checks.append(stmt_check)
            fdefs.append(cpp_trace_func_template.format(sid=src_idx))

        # Build header/cpp file strings
        header_str = cpp_header_template.format(
            headers=cpp_headers, fdefs="\n".join(fdefs)
        )
        cpp_str = cpp_template.format(
            check_vals=cpp_check_vals,
            stmt_checks="\n\n".join(stmt_checks),
            tid=self.trace_id,
        )

        if not os.path.exists(TMP_PATH):
            # Make tmp directory if not already made
            os.makedirs(TMP_PATH)

        # Build paths
        self.header_path = os.path.join(TMP_PATH, "libtrace_{}.h".format(self.trace_id))
        self.cpp_path = os.path.join(TMP_PATH, "libtrace_{}.cpp".format(self.trace_id))
        self.cpp_o_path = os.path.join(TMP_PATH, "libtrace_{}.o".format(self.trace_id))

        # Write header/cpp to file
        with open(self.header_path, "w") as f:
            f.write(header_str)
        with open(self.cpp_path, "w") as f:
            f.write(cpp_str)

        # Build object file
        try:
            gpp_cmd = gpp_cmd_template.format(
                cpppath=self.cpp_path, out=self.cpp_o_path
            )
            subprocess.call(gpp_cmd.split(), timeout=10)
        except subprocess.CalledProcessError as e:
            raise Exception("Building trace object file failed!\n{}".format(self))
        except subprocess.TimeoutExpired as e:
            raise Exception("Building trace object file timed out!\n{}".format(self))

    def __repr__(self):
        return f"Trace(input=({', '.join(map(str, self.inputs))}), ret_val={self.ret_val}, len={len(self)})"

    def __str__(self) -> str:
        def format_state(s: dict[str, str]) -> str:
            items = [f"{k}: {v}" for k, v in s.items()]
            return f"{{{', '.join(items)}}}"

        results: dict[str, Any] = {
            "inputs": ", ".join(map(str, self.inputs)),
            "ret_val": self.ret_val,
        }
        results["srcs"] = list(map(str, self.items))
        results["trace"] = [format_state(s.post_state) for s in self.items]

        return yaml.safe_dump(results)
