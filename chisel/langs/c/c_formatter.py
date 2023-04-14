import os
from typing import *

from args import get_cline_args
from formatters.formatter import Formatter
from grammar import SOURCE_GUARD_NAME, SOURCE_STMT_NAME
from program import *
from trace import Trace
from utils import cached_format

default_val = {
    "string": '""',
    "int": "0",
    "bool": "true",
}

ARG_PARSE_TEMPLATE_MAP = {
    "int": "int {var_name} = atoi({input_name});",
    "long": "long {var_name} = atol({input_name});",
    "long int": "long {var_name} = atol({input_name});",
    "long long": "long long {var_name} = atoll({input_name});",
    "unsigned int": "unsigned int {var_name} = atoi({input_name});",
    "unsigned long int": "unsigned long {var_name} = atol({input_name});",
    "unsigned long long int": "unsigned long long {var_name} = atoll({input_name});",
    "double": "double {var_name} = atof({input_name});",
    "char": "char {var_name} = *{input_name};",
    "char *": "char *{var_name} = {input_name};",
    "char []": "char {var_name}[{size}] = {input_name};",
    "int []": "int {var_name}[{size}] = {input_name};",
    "int *": "int *{var_name} = {input_name};",
    "int [10]": "int {var_name}[10] = {input_name};",
    "unsigned long [1]": "unsigned long {var_name}[1] = {input_name};",
}

headers="""#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int _ZERO_ = 0;
"""

precomp_cpp_headers='''#include "{hpath}"

int _ZERO_ = 0;

using namespace trace;
'''

precomp_c_headers='''#include "{hpath}"

int _ZERO_ = 0;'''

RET_CHECK_TEMPLATE="""{return_type} CHECK_RET({params_decl}) {{
   {return_type} deobf_ret = {func_name}({params});
   assert(deobf_ret == {ret_val});
   return deobf_ret;
}}
"""

RET_CHECK_THROW_TEMPLATE="""
{return_type} CHECK_RET({params_decl}) {{
   {return_type} deobf_ret = {func_name}({params});
   if (!(deobf_ret == {ret_val})) throw "Output failure!";
   return deobf_ret;
}}
"""

RET_CHECK_EMPTY_TEMPLATE="""
{return_type} CHECK_RET({params_decl}) {{
   {return_type} deobf_ret = {func_name}({params});
   return 0;
}}
"""

DEOBF_FUNC_TEMPLATE="""
{return_type} {func_name} ({params_decl}) {{
{body}
}}
"""

MAIN_TEMPLATE="""
{deobf_funcs}
int main(int argc, char **argv) {{
{parse_args}
  {build_trace}CHECK_RET({func_args});
  return 0;
}}
"""

TRACE_CHECK_TEMPLATE="""
int trace_check_{name_ext} ({args}, int trace_idx) {{
{indent}bool check = true;
{body}
}}
"""

IF_TEMPLATE="""
{indent}if ({cond}) {{
{body}
{indent}}}
"""

ELIF_TEMPLATE="""else if ({cond}) {{
{body}
{indent}}}
"""

ELSE_TEMPLATE=""" else {{
{body}
{indent}}}"""

class CFormatter(Formatter):
    """Formatter for C programs"""

    def __init__(self, stmt_decl_vars: Dict[str, Set[Tuple[str,str]]]=None):
        self.stmt_decl_vars = stmt_decl_vars or {}
        self.indent = "   " # Amount to indent per level

    def _build_trace_check_func(self, args: Set[Tuple[str, str]], stmt_id: int, stmt: str, trace: Trace, throw: bool=False) -> str:
        """ Build function to check trace for given argument types/vars.

        Arguments:
        args ({(str, str)}) -- argument types/vars passed to trace check
        stmt_id (int) -- statement identifier
        stmt (str) -- statement string
        trace (Trace) -- trace to check against
        throw (bool) -- use throw instead of assert

        Returns:
        trace_check_func (str) -- function to check trace
        """
        name_ext = "s{}_".format(stmt_id) + "_".join(["{}{}".format(t,v) for t,v in args])
        args_str = ", ".join(["{} {}".format(t, v) for t,v in args])
        arg_vars = [v for _,v in args]

        trace_check_body = []
        start = True
        for idx in range(len(trace)):
            trace_stmt = trace.items[idx].source.src
            if trace_stmt != stmt:
                continue
            val = trace.items[idx].pre_state
            trace_check = "" # body of if/elif where trace values checked against args
            for v in arg_vars:
                if not v in val:
                    # Can always return false if some variable is not yet in trace at idx
                    trace_check += "{}check = false;\n".format(self.indent*2)
                    break
                trace_check += "{}check = check && {} == {};\n".format(self.indent*2, v, val[v]) # TODO: Handle arrays?
            if throw:
                trace_check += '{}if (!check) throw "Trace failure!";\n'.format(self.indent*2)
            else:
                trace_check += "{}assert(check);\n".format(self.indent*2)
            trace_check += "{}return {};\n".format(self.indent*2, idx)
            idx_check = "trace_idx < {}".format(idx)
            if start:
                trace_check_body.append(cached_format(IF_TEMPLATE, indent=self.indent, cond=idx_check, body=trace_check))
                start = False
            else:
                trace_check_body.append(cached_format(ELIF_TEMPLATE, indent=self.indent, cond=idx_check, body=trace_check))

        if throw:
            trace_check_body.append('\n\n{}throw "Trace failure!";'.format(self.indent))
        else:
            trace_check_body.append("\n\n{}assert(false);".format(self.indent))

        return cached_format(TRACE_CHECK_TEMPLATE,
                                name_ext=name_ext,
                                args=args_str,
                                indent=self.indent,
                                body="".join(map(str, trace_check_body)))

    def _build_trace_assert(self, decl_vars: List[Tuple[str, str]],
                            stmt_id: int, trace: Trace, precomp: bool,
                            indent_lvl: int=0) -> str:
        """ Build the assert of the trace check.

        Arguments:
        decl_vars ([(str,str)]) -- list of type/variable pairs
        stmt_id (int) -- statement identifier
        trace (Trace) -- current trace
        precomp (bool) -- whether or not to use precompiled trace func
        indent_lvl (int) -- level of indentation

        Returns:
        assert_str (str) -- string of assertion
        """
        args = get_cline_args()
        sid = "s{}".format(stmt_id)

        indent_str = self.indent*indent_lvl
        if precomp:
            if args.precompile_type == "c":
                call_temp = "{indent}trace_idx = trace_check_{sid}(trace_idx, {ps});\n"
                ps = []
                for typ,var in trace.vs:
                    if (typ,var) in decl_vars:
                        ps.append(var)
                        ps.append("true")
                    else:
                        ps.append(default_val[typ])
                        ps.append("false")
                assert_str = call_temp.format(indent=indent_str, sid=sid, ps=", ".join(ps))
            elif args.precompile_type == "cpp":
                val_str = ", ".join(['$LCURLY$"{0}", {0}$RCURLY$'.format(var)
                                     for _,var in decl_vars])
                call_temp = "{indent}trace_idx = trace_check_{sid}(trace_idx, $LCURLY${val}$RCURLY$);\n"
                assert_str = call_temp.format(indent=indent_str, sid=sid, val=val_str)
            else:
                raise Exception("[ERROR] Unrecognized precompile type: {}".format(args.precompile_type))
        else:
            typ_str = "_".join(["{}{}".format(t,v) for t,v in decl_vars])
            var_str = ", ".join([v for _,v in decl_vars])
            call_temp = "{indent}trace_idx = trace_check_{sid}_{typs}({args}, trace_idx);\n"
            assert_str = call_temp.format(indent=indent_str, sid=sid,
                                          typs=typ_str, args=var_str)
            assert_str = "{indent}trace_idx = trace_check_{sid}_{typs}({args}, trace_idx);\n".format(indent=self.indent*indent_lvl,sid = sid,typs=typ_str,args=var_str)

        return assert_str

    @staticmethod
    def _build_args_parsing(prog: Program) -> tuple[str, list[str]]:
        """ Build the argument parsing for the trace check.

        Arguments:
        prog (Program) -- program to build argument parsing for

        Returns:
        args_str (str) -- string of argument parsing
        arg_vars (list[str]) -- list of argument variables
        """

        def fill_in(typ: str, decl_var: str, input_var: str) -> str:
            """ Fill in the type and variable for the argument parsing.

            Arguments:
            typ (str) -- type of argument
            var (str) -- variable name of argument

            Returns:
            arg_str (str) -- string of argument
            """
            template = ARG_PARSE_TEMPLATE_MAP.get(typ)
            if not template:
                raise ValueError("Unknown type: {}".format(typ))

            return cached_format(template, var_name=decl_var, input_name=input_var)


        args_c_types = [p.type for p in prog.signature.params]
        args_c_vars = [f"arg_{idx}" for idx, _ in enumerate(args_c_types)]
        input_vars = [f"argv[{idx+1}]" for idx, _ in enumerate(args_c_types)]

        positional_decls = [fill_in(*t) for t in zip(args_c_types, args_c_vars, input_vars)]

        return "\n".join(map(str, positional_decls)), args_c_vars



    # pylint: disable=arguments-differ
    def format(self, prog: Program, trace: Trace=None,
               ret_val: str=None, unk: str=None, throw: bool=False,
               only_body: bool=False, precomp: bool=False) -> str:
        """ Formats the given program as a string using trace if given.

        Arguments:
        prog (Program) -- complete program to be evaluated
        trace (Trace) -- trace to instrument with if not None
        ret_val (str) -- expected return value if not None
        unk (str) -- string to replace unknown with (if None, just use default)
        throw (bool) -- use throw instead of assert
        only_body (bool) -- if true, only returns body of function
        precomp (bool) -- use precompiled trace check funcs instead

        Returns:
        result (str) -- string resulting from formatting
        """
        args = get_cline_args()
        trace_check_args = defaultdict(list) # Set of args used to assert each trace stmt
        curr_sid = [0] # Hold current sid (in list to enable editing in nested func)
        sids = {}

        def _format_node(node: Node, decl_vars: Set[Tuple[str,str]], indent_lvl: int=1) -> Tuple[str,Set[Tuple[str,str]]]:
            """ Formats the given node as a string.

            Arguments:
            node (Node) -- node to be formatted
            indent_lvl (int) -- level of indentation

            Returns:
            node_str (str) -- node string representation
            decl_vars ({(str, str)}) -- set of currently declared vars/types (up to this program point)
            """
            if isinstance(node, UnknownNode):
                indent = self.indent*indent_lvl
                if not unk:
                    return "{}{}".format(indent, node), decl_vars
                else:
                    return "{}{}".format(indent, unk), decl_vars
            elif isinstance(node, DummyNode):
                indent = self.indent*indent_lvl
                return "\n".join("{}{}".format(indent, n) for n in node.codes), decl_vars

            func = node.val
            if func == "Stmt":
                return _format_node(prog.nodes[prog.children[node.id][0]], decl_vars, indent_lvl)
            elif func == SOURCE_GUARD_NAME:
                return str(prog.nodes[prog.children[node.id][0]]), decl_vars
            elif func == SOURCE_STMT_NAME:
                stmt = str(prog.nodes[prog.children[node.id][0]])
                node_str = "{}{}".format(self.indent*indent_lvl,stmt)
                if trace != None:
                    trace_check_args[stmt].append(decl_vars)
                    try:
                        sid = trace.sources.index(stmt)
                        # if stmt in sids:
                        #     sid = sids[stmt]
                        # else:
                        #     sid = curr_sid[0]
                        #     sids[stmt] = curr_sid[0]
                        #     curr_sid[0] += 1
                        node_str = self._build_trace_assert(decl_vars, sid, trace,
                                                            precomp, indent_lvl)+node_str
                    except:
                        # Should never reach this code if it isn't in trace
                        node_str = "{}assert(false);\n".format(self.indent*indent_lvl)+node_str
                    decl_vars = decl_vars.union(self.stmt_decl_vars[stmt])
                return node_str, decl_vars

            if func == "Single":
                return _format_node(prog.nodes[prog.children[node.id][0]],
                                    decl_vars, indent_lvl)
            elif func == "Seq":
                p_str, decl_vars = _format_node(prog.nodes[prog.children[node.id][0]],
                                                decl_vars, indent_lvl)
                s_str, decl_vars  = _format_node(prog.nodes[prog.children[node.id][1]],
                                                 decl_vars, indent_lvl)

                if unk != None and p_str.endswith(unk):
                    # Ignore anything after a return
                    return "{}".format(p_str), decl_vars

                return "{}\n{}".format(p_str, s_str), decl_vars

            assert_str = "" # Hold trace assert string

            if func == "If":
                cond, _ = _format_node(prog.nodes[prog.children[node.id][0]], decl_vars, 0)
                body, _ = _format_node(prog.nodes[prog.children[node.id][1]],
                                       decl_vars, indent_lvl+1)
                indent = self.indent*indent_lvl

                if trace != None:
                    # Add args to tracker for builder functions later and build assert
                    if cond == unk:
                        return "{}{}".format(indent, unk), decl_vars
                    else:
                        trace_check_args[cond].append(decl_vars)
                        try:
                            sid = trace.sources.index(cond)
                            # if cond in sids:
                            #     sid = sids[cond]
                            # else:
                            #     sid = curr_sid[0]
                            #     sids[cond] = curr_sid[0]
                            #     curr_sid[0] += 1
                            assert_str = self._build_trace_assert(decl_vars, sid, trace,
                                                                  precomp, indent_lvl)
                        except:
                            # Should never reach this code if it isn't in trace
                            assert_str = "{}assert(false);\n".format(indent)

                return "{assert_str}{indent}if ({cond}) $LCURLY$\n{body}\n{indent}$RCURLY$".format(indent=indent, assert_str=assert_str, cond=cond, body=body), decl_vars
            elif func == "ITE":
                cond, _ = _format_node(prog.nodes[prog.children[node.id][0]], decl_vars, 0)
                then_body, _ = _format_node(prog.nodes[prog.children[node.id][1]],
                                            decl_vars, indent_lvl+1)
                else_body, _ = _format_node(prog.nodes[prog.children[node.id][2]],
                                            decl_vars, indent_lvl+1)
                indent = self.indent*indent_lvl

                if trace != None:
                    # Add args to tracker for builder functions later and build assert
                    if cond == unk:
                        return "{}{}".format(indent, unk), decl_vars
                    else:
                        trace_check_args[cond].append(decl_vars)
                        try:
                            sid = trace.sources.index(cond)
                            # if cond in sids:
                            #     sid = sids[cond]
                            # else:
                            #     sid = curr_sid[0]
                            #     sids[cond] = curr_sid[0]
                            #     curr_sid[0] += 1
                            assert_str = self._build_trace_assert(decl_vars, sid, trace,
                                                                  precomp, indent_lvl)
                        except:
                            # Should never reach this code if it isn't in trace
                            assert_str = "{}assert(false);\n".format(indent)

                return "{assert_str}{indent}if ({cond}) $LCURLY$\n{then_body}\n{indent}$RCURLY$ else $LCURLY$\n{else_body}\n{indent}$RCURLY$".format(indent=indent,assert_str=assert_str,cond=cond,then_body=then_body,else_body=else_body), decl_vars
            elif func == "While":
                cond, _ = _format_node(prog.nodes[prog.children[node.id][0]], decl_vars, 0)
                body, _ = _format_node(prog.nodes[prog.children[node.id][1]],
                                       decl_vars, indent_lvl+1)
                indent = self.indent*indent_lvl

                if trace != None:
                    # Add args to tracker for builder functions later and build assert
                    if cond == unk:
                        return "{}{}".format(indent, unk), decl_vars
                    else:
                        trace_check_args[cond].append(decl_vars)
                        try:
                            sid = trace.sources.index(cond)
                            # if cond in sids:
                            #     sid = sids[cond]
                            # else:
                            #     sid = curr_sid[0]
                            #     sids[cond] = curr_sid[0]
                            #     curr_sid[0] += 1
                            assert_str = self._build_trace_assert(decl_vars, sid, trace,
                                                                  precomp, indent_lvl)
                        except:
                            # Should never reach this code if it isn't in trace
                            assert_str = "{}assert(false);\n".format(indent)

                assert_str2 = assert_str
                if unk != None and body.endswith(unk):
                    assert_str2 = ""

                return "{assert_str}{indent}while ({cond}) $LCURLY$\n{body}\n{assert_str2}{indent}$RCURLY$".format(indent=indent,assert_str=assert_str,assert_str2=assert_str2, cond=cond, body=body), decl_vars

            raise Exception("Unrecognized function: {}".format(func))

        if prog is None or prog.root is None:
            # Catch unitialized program case
            return str(prog)

        decl_vars = {(param.type, param.name) for param in prog.signature.params}
        body_str, _ = _format_node(prog.root, decl_vars)

        # function signature and type declarations
        sig_return_type = prog.signature.return_type
        sig_name = "DEOBF_FUNC"
        sig_params_decl = ", ".join([p.decl for p in prog.signature.params])
        sig_params = ", ".join([p.name for p in prog.signature.params])
        # end of function signature and type declarations

        if only_body:
            return body_str.replace("$LCURLY$", "{").replace("$RCURLY$", "}")

        if trace is not None:
            # Add initialization of trace index variable
            body_str = "{}int trace_idx = -1;\n{}".format(self.indent, body_str)

        ret_check = RET_CHECK_EMPTY_TEMPLATE if ret_val is None \
                        else RET_CHECK_TEMPLATE if not throw \
                        else RET_CHECK_THROW_TEMPLATE

        ret_check = cached_format(ret_check,
                                  return_type=sig_return_type,
                                  params_decl=sig_params_decl,
                                  func_name=sig_name,
                                  params=sig_params,
                                  ret_val=ret_val)

        # Add body to main function
        header_str = headers
        build_trace = ""
        if precomp:
            hpath = os.path.basename(trace.header_path)
            if args.precompile_type == "c":
                build_trace = "build_trace();\n  "
                header_str = cached_format(precomp_c_headers, hpath=hpath)
            elif args.precompile_type == "cpp":
                header_str = cached_format(precomp_cpp_headers, hpath=hpath)
            else:
                raise Exception("[ERROR] Uncrecognized precompile type: {}".format(args.precompile_type))


        deobf_func_str = cached_format(DEOBF_FUNC_TEMPLATE,
                            return_type=sig_return_type,
                            func_name=sig_name,
                            params_decl=sig_params_decl,
                            body=body_str)

        # CLI argument parsing
        parse_args_str, c_vars = CFormatter._build_args_parsing(prog)
        # end of CLI argument parsing

        prog_str = cached_format(MAIN_TEMPLATE,
                            headers=header_str,
                            deobf_funcs=deobf_func_str,
                            build_trace=build_trace,
                            ret_check=ret_check,
                            parse_args=parse_args_str,
                            func_args=", ".join(c_vars))

        if trace is not None and not precomp:
            # Add other functions for trace checking
            tffuncs = []
            for stmt, args_sets in trace_check_args.items():
                seen_args = []
                for args in args_sets:
                    if len(args) > 0 and tuple(args) not in seen_args and stmt in trace.sources:
                        tffuncs.append(self._build_trace_check_func(args, trace.sources.index(stmt),
                                                                    stmt, trace, throw))
                        seen_args.append(tuple(args))

            prog_str = cached_format(prog_str, trace_check_funcs="\n\n".join(map(str, tffuncs)))
        else:
            prog_str = cached_format(prog_str, trace_check_funcs="")

        prog_str = str(prog_str).replace("$LCURLY$", "{").replace("$RCURLY$", "}")
        return prog_str
