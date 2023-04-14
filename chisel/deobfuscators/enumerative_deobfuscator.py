from inspect import trace
from args import get_cline_args
import re
import sys
import time
from typing import *

from analysis import Analysis
from checkers import *
from formatters import Formatter
from grammar import *
from priority_queue import PriorityQueue
from program import *
from pruners import Pruner, NoPruner
from search_models import SearchModel
from stats import Stats
from extractor import *


class EnumerativeDeobfuscator():
    """Performs top-down synthesis starting with the start symbol of the grammar."""

    def __init__(self, grammar: Grammar):
        self.grammar = grammar
        self.cache = set()

    def deobfuscate(self, src_path: str, search_model: SearchModel,
                    checker: EquivalenceChecker,
                    pruner: Pruner, next_unk: Callable[[Program], Node],
                    analysis: Analysis, formatter: Formatter,
                    stats: Stats) -> Program:
        """
        Deobfuscates the given program, enumerating
        in order of priority (low to high).

        Arguments:
        src_path (str) -- path to obfuscated program
        search_model (SearchModel -- model for guiding synthesis search
        checker (EquivalenceChecker) -- checks equivalence of two programs from grammar
        pruner (Pruner) -- pruning engine for removing infeasible partial programs
        next_unk (Program -> Node) -- function for retrieving next unknown
        config (Config) -- synthesis configuration info
        analysis (Analysis) -- static analyzer for source programs
        formatter (Formatter) -- pretty printer for target programs
        stats (Stats) -- object to track synthesis statistics

        Returns:
        prog (Program) -- program matching specification (or None if timeout reached)
        """
        start_time = time.time()

        args = get_cline_args()

        # Retrieve type information of function parameters
        func_decls = parse_c_decls(src_path)
        obfus_func_signature = next(filter(lambda x: x.name == "OBF_FUNC", func_decls))
        obfus_func_params_type = obfus_func_signature.params

        prog = Program(self.grammar.start, function_signature=obfus_func_signature) # Initial program

        # Generate random inputs
        inputs = [[generate_examples(t.type,1)[0] for t in obfus_func_params_type] for _ in range(10)]

        if args.debug in ["all", "inputs"]:
            print("[DEBUG] inputs: {}".format(inputs))
            sys.stdout.flush()

        # Generate traces
        trace_start = time.time()
        traces = generate_traces(src_path, inputs, "OBF_FUNC")
        trace_time = time.time() - trace_start
        stats.gdb_times.append(trace_time)

        # Retrieve relevant guards and statements
        extraction_start = time.time()
        guards, stmts = analysis.get_guards_and_stmts_from_path(src_path, traces)

        # Add stmts/guard from traces to grammar
        self.grammar.add_stmts_and_guards(stmts, guards)
        stats.extraction_time = time.time()-extraction_start

        if args.debug in ["all", "extracted"]:
            print("[DEBUG]: Extracted statements/guards:")
            print("--Statements--")
            for s in stmts:
                print(s)
            print("--Guards--")
            for g in guards:
                print(g)

        # Create trace check libs
        if args.enable_compile and not args.disable_trace_pruning and not args.disable_precompile:
            decl_vars = analysis.get_decl_vars(stmts)
            vs = list(set([v for dvars in decl_vars.values() for v in dvars]+[("int", "i")]))
            for trace in traces:
                trace.vs = vs
                if args.precompile_type == "c":
                    trace.gen_c_lib()
                elif args.precompile_type == "cpp":
                    trace.gen_cpp_lib() # TODO: Remove this after testing!
                else:
                    raise Exception("Unrecognized precompile type: {}".format(args.precompile_type))

        # Run analysis on statements to extract declared variables and their types
        decl_vars = analysis.get_decl_vars(stmts)
        used_vars = analysis.get_used_vars(stmts+guards)
        # TODO: This is hacky ... make cleaner
        checker.formatter.stmt_decl_vars = decl_vars
        if hasattr(pruner, "formatter"):
            pruner.formatter.stmt_decl_vars = decl_vars
        for obj in [pruner, checker]:
            if hasattr(obj, "runner"):
                obj.runner.decl_vars = decl_vars
                obj.runner.used_vars = used_vars

        # Compute stmt/guard dominators
        cfg = analysis.generate_cfg_from_path(src_path)
        node_dom_map = cfg.get_preceded_by()
        dom_map = {}
        for n, ds in node_dom_map.items():
            d_strs = [d.code for d in ds]
            if not n.code in dom_map:
                dom_map[n.code] = set(d_strs)
            else:
                dom_map[n.code] = dom_map[n.code].intersection(set(d_strs))

        # Update guards in trace with values from CFG
        for trace in traces:
            trace.update_guard_vals(cfg)

        # print(cfg)
        # for stmt, stmts in dom_map.items():
        #     print(stmt)
        #     for s in stmts:
        #         print("\t{}".format(s))
        # raise Exception()

        worklist = PriorityQueue(priority=search_model.priority)

        worklist.add(prog, stats)

        # Keep track of grammar per program (b/c we can remove stmts/guards from grammar)
        grammars = {}
        grammars[prog] = self.grammar

        cands = set()

        while len(worklist) > 0:
            if time.time() - start_time > args.timeout:
                # exit synthesis loop if timeout passed
                stats.deobfuscation_time = time.time()-start_time
                break

            stats.num_iter += 1

            prog = worklist.pop() # Get highest priority program
            grammar = grammars[prog] # Get associated grammar

            prog_str = formatter.format(prog)
            if args.debug in ["all", "print-partial"]:
                print(prog_str)
                print("--")

            if prog_str in self.cache:
                # Ignore partial programs that have already been processed
                continue

            self.cache.add(prog_str) # add partial program to cache

            if prog.complete():
                # If program is complete, check if it matches specification
                stats.num_candidates += 1
                stats.candidates.append(prog)
                if checker.check_eq(prog, src_path, traces, inputs, stats):
                    stats.solution = prog
                    stats.deobfuscation_time = time.time()-start_time
                    return prog
                continue # Try another program if doesn't sat spec

            # Run label pruning if it is provided
            if args.label_path != None:
                if not self.label_check(prog, args.label_path, formatter):
                    continue

            analysis_start = time.time()
            if not args.disable_analysis_pruning and \
               not analysis.is_valid(prog, decl_vars, used_vars):
                stats.num_pruned += 1
                stats.pruned.append(prog)
                stats.pruned_times.append(time.time()-analysis_start)
                stats.num_analysis_pruned += 1
                stats.analysis_pruned.append(prog)
                stats.analysis_pruned_times.append(time.time()-analysis_start)
                continue

            prune_start = time.time()
            if pruner.prune(prog, src_path, traces, inputs, stats):
                # If partial program should be pruned, continue withut adding expansions
                stats.num_pruned += 1
                stats.pruned.append(prog)
                stats.pruned_times.append(time.time()-prune_start)
                continue

            stats.num_not_pruned += 1
            stats.not_pruned.append(prog)
            stats.not_pruned_times.append(time.time()-prune_start)

            # Add all expansions of partial program for next unknown
            unk = next_unk(prog)
            prods = grammar.productions[unk.nonterm]

            for prod in prods:
                new_prog = prog.copy()
                new_prog.expand(unk.id, prod)

                # construct grammar for program to be added
                new_grammar = grammar
                if not args.disable_syntax_pruning:
                    if unk.nonterm in [SOURCE_GUARD_NONTERM, SOURCE_STMT_NONTERM]:
                        # Adjust DSL to remove stmts/guards which dominate current
                        new_grammar = grammar.copy()
                        sg = prod.args[0]
                        if sg in dom_map:
                            doms = dom_map[sg]
                            new_grammar.remove_codes(doms)
                        # Remove production for current stmt/guard
                        new_grammar.remove_prod(prod)

                    # See if program can be pruned because too few stmts/guards
                    min_needed_stmts = 0
                    min_needed_guards = 0
                    for uid in new_prog.unknowns:
                        unode = new_prog.nodes[uid]
                        if unode.nonterm in self.grammar.stmt_nterms:
                            min_needed_stmts += 1
                        elif unode.nonterm in self.grammar.guard_nterms:
                            min_needed_guards += 1
                    if len(new_grammar.productions[SOURCE_STMT_NONTERM]) < min_needed_stmts or \
                       len(new_grammar.productions[SOURCE_GUARD_NONTERM]) < min_needed_guards:
                        stats.num_pruned += 1
                        stats.pruned.append(new_prog)
                        stats.pruned_times.append(time.time()-prune_start)
                        stats.num_syntax_pruned += 1
                        stats.syntax_pruned.append(new_prog)
                        continue

                worklist.add(new_prog, stats)
                grammars[new_prog] = new_grammar

        stats.deobfuscation_time = time.time()-start_time
        return None

    def label_check(self, prog: Program, label_path: str, formatter: Formatter) -> bool:
        """Check if program matches label.

        Arguments:
        prog (Program) -- program to check
        label_path (str) -- path to label to check against
        formatter (Formatter) -- program formatter

        Returns:
        matches (bool) -- True if matches label, False otherwise
        """
        # Get function body string
        prog_body = formatter.format(prog, only_body=True)
        prog_body = ' '.join(prog_body.split())

        # Build regex to test against
        regex = prog_body
        unk_patt = re.compile(r"\?\[[^\]]*\]")
        unks = unk_patt.findall(regex)
        if len(unks) == 0:
            raise Exception("Should be at least one unknown here!:\n{}".format(regex))
        for unk in unks:
            regex = regex.replace(unk, "__DOTSTAR__")
        regex = re.escape(regex)
        regex = regex.replace("__DOTSTAR__", ".*")

        # Fetch label
        with open(label_path, "r") as f:
            label = f.read()
        lpatt = re.compile("// BODY BEGIN(.*)// BODY END", re.DOTALL)
        lbodies = lpatt.findall(label)
        if len(lbodies) != 1:
            raise Exception("Function body not found in label!:\n{}".format(label))
        label = ' '.join(lbodies[0].split())

        # Check label match
        label_patt = re.compile(regex)
        check = len(label_patt.findall(label)) > 0

        return check
