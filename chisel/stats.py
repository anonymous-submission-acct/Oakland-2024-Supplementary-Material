from args import get_cline_args
from collections import deque
import os
from statistics import mean
from enum import Enum, auto
from program import ValueNode

from formatters import Formatter

class Status(Enum):
    PENDING = auto()
    COMPLETE = auto()
    TIMEOUT = auto()
    ERROR = auto()

class Stats():
    """Class for evaluating runtime statistics."""

    def __init__(self, src_path: str, formatter: Formatter):
        args = get_cline_args()

        self.src_path = src_path
        self.formatter = formatter

        self.candidates = deque([], args.max_cand_record) # track last N complete candidates processed
        self.pruned = deque([], args.max_cand_record) # track last N partial candidates pruned
        self.trace_pruned = deque([], args.max_cand_record) # track last N trace pruned candidates
        self.trace_pruned_assert = deque([], args.max_cand_record) # track last N trace pruned candidates b/c of assertion failure
        self.trace_pruned_compile = deque([], args.max_cand_record) # track last N trace pruned candidates b/c of compilation failure
        self.trace_pruned_timeout = deque([], args.max_cand_record) # track last N trace pruned candidates b/c of timeout
        self.analysis_pruned = deque([], args.max_cand_record) # track last N candidates pruned using analysis
        self.syntax_pruned = deque([], args.max_cand_record) # track last N candidates pruned using syntactic constraints
        self.not_pruned = deque([], args.max_cand_record) # track last N partial candidates not pruned

        self.pruned_times = [] # track time taken for each time a candidate is pruned
        self.not_pruned_times = [] # track time taken for each time a candidate is not pruned
        self.trace_pruned_times = [] # track time taken for each time a candidate is trace pruned
        self.analysis_pruned_times = [] # Track time for each time candidate prune w/ analysis
        self.trace_pruned_assert_times = [] # track time taken for each time a candidate is trace pruned b/c of assert failure
        self.trace_pruned_compile_times = [] # track time taken for each time a candidate is trace pruned b/c of compile error
        self.trace_pruned_timeout_times = [] # track time taken for each time a candidate is trace pruned b/c of timeout
        self.gdb_times = [] # track time taken to generate gdb traces
        self.extraction_time = 0 # track time taken to extract gdb traces

        self.num_iter = 0 # track total iterations of synthesis loop
        self.num_candidates = 0 # track total complete candidates considered
        self.num_pruned = 0 # track total number of pruned candidates
        self.num_trace_pruned = 0 # track total number of trace pruned candidates
        self.num_trace_pruned_cached = 0 # track total number of trace pruned candidates
        self.num_trace_pruning_eval = 0
        self.num_trace_pruning_eval_cached = 0
        self.num_trace_pruned_assert = 0 # track total number of trace pruned candidates b/c of assertion failure
        self.num_trace_pruned_compile = 0 # track total number of trace pruned candidates b/c of compilation failure
        self.num_trace_pruned_timeout = 0 # track total number of trace pruned candidates b/c of timeout
        self.num_analysis_pruned = 0 # track total number of candidates pruned using analysis
        self.num_syntax_pruned = 0 # track total number of candidates pruned using syntactic constraints
        self.num_not_pruned = 0 # track total number of candidates not pruned

        # source code statistics
        self.num_lines = 0 # track total number of lines in source code
        self.num_lines_deobfuscated = 0 # track total number of lines in deobfuscated source code
        self.num_guards = 0 # track total number of guards in source code
        self.num_guards_deobfuscated = 0 # track total number of guards in deobfuscated source code
        self.num_statements = 0 # track total number of statements in source code
        self.num_statements_deobfuscated = 0 # track total number of statements in deobfuscated source code

        # sketch
        self.num_complete_sketches = 0
        self.num_partial_sketches = 0
        self.num_pruned_sketches = 0
        self.num_pruned_complete_sketches = 0

        self.solution = None # record satisfying program (or None if not found)
        self.phantom_solution = None # record satisfying program (or None if not found)
        self.deobfuscation_time = 1 # time to find solution (in seconds)

        self.prune_times = []
        self.total_pruner_calls = 0

        self.status = Status.PENDING
        self.comment = "None"

    def compute_deobfuscated_stats(self):
        if self.solution is None:
            return

        self.num_lines_deobfuscated = sum(1 for _ in filter(None, map(lambda s: s.strip(), self.formatter.format(self.solution).splitlines())))
        self.num_guards_deobfuscated = sum(1 for _ in self.solution.nodes.values() if isinstance(_, ValueNode) and _.val == "SourceGuard")
        self.num_statements_deobfuscated = sum(1 for _ in self.solution.nodes.values() if isinstance(_, ValueNode) and _.val == "SourceStmt")


    def my_mean(self, x):
        if len(x) == 0:
            return "NA"

        return "{:.4f}".format(mean(x))

    def gen_report(self):
        res = [["Source", "Result", "Time (sec)", "# Cands", "# Pruned", "Avg Prune Time (sec)", "Total/Avg GDB Time (sec)", "Extraction Time (sec)"], []]

        res[1].append(os.path.basename(self.src_path))
        res[1].append("Found" if self.solution != None else "Not Found")
        res[1].append("{:.2f}".format(self.deobfuscation_time))
        res[1].append(self.num_candidates)
        res[1].append(self.num_pruned)
        res[1].append(self.my_mean(self.pruned_times+self.not_pruned_times))
        res[1].append("{:.2f}/{}".format(sum(self.gdb_times), self.my_mean(self.gdb_times)))
        res[1].append("{:.2f}".format(self.extraction_time))

        return res

    def to_dict(self):
        res = {
            "Source": os.path.basename(self.src_path),
            "LOC": self.num_lines,
            "LOC Deobfuscated": self.num_lines_deobfuscated,
            "Num Guards": self.num_guards,
            "Num Guards Deobfuscated": self.num_guards_deobfuscated,
            "Num Statements": self.num_statements,
            "Num Statements Deobfuscated": self.num_statements_deobfuscated,

            "Status": self.status.name,
            "Result": str(self.solution),
            "Formatted Result": self.formatter.format(self.solution),
            "Phantom Result": self.phantom_solution,
            "Time (sec)": "{:.2f}".format(self.deobfuscation_time),
            "Total/Avg GDB Time (sec)": "{:.2f}/{}".format(sum(self.gdb_times), self.my_mean(self.gdb_times)),
            "Extraction Time (sec)": "{:.2f}".format(self.extraction_time),

            "Num Complete Sketches": self.num_complete_sketches,
            "Num Partial Sketches": self.num_partial_sketches,
            "Num Pruned Sketches": self.num_pruned_sketches,
            "Num Pruned Complete Sketches": self.num_pruned_complete_sketches,

            "Num Iterations": self.num_iter,
            "Num Candidates": self.num_candidates,
            "Num Pruned": self.num_pruned,
            "Num Trace Pruned": self.num_trace_pruned,
            "Avg Prune Time (sec)": self.my_mean(self.pruned_times+self.not_pruned_times),
            "Comment": self.comment,
        }

        return res

    def __repr__(self):
        s = []
        s.append("--Statistics for {}--".format(self.src_path))
        s.append("Result: {}".format("Success!" if self.solution != None else "Failure!"))
        if self.solution != None:
            s.append("Solution: \n********\n{}\n********".format(self.formatter.format(self.solution)))
        s.append("Time (seconds): {}".format(self.deobfuscation_time))

        s.append("\nPreprocessing Statistics:")
        s.append("  - Total/Avg GDB time (sec): \t{}".format("{:.2f}/{}".format(sum(self.gdb_times), self.my_mean(self.gdb_times))))
        s.append("  - Extraction time (sec): \t{:.2f}".format(self.extraction_time))
        s.append("  - Num Lines: \t\t\t{}".format(self.num_lines))
        s.append("  - Num Lines Deobfuscated: \t{}".format(self.num_lines_deobfuscated))
        s.append("  - Num Guards: \t\t{}".format(self.num_guards))
        s.append("  - Num Guards Deobfuscated: \t{}".format(self.num_guards_deobfuscated))
        s.append("  - Num Statements: \t\t{}".format(self.num_statements))
        s.append("  - Num Statements Deobf.: \t{}".format(self.num_statements_deobfuscated))


        s.append("\nHeuristic Sketch Enumerator Statistics:")
        s.append("  - Num Complete Sketches: \t{}".format(self.num_complete_sketches))
        s.append("  - Num Pruned Comp. Sketches: \t{}".format(self.num_pruned_complete_sketches))
        s.append("  - Num Partial Sketches: \t{}".format(self.num_partial_sketches))
        s.append("  - Num Pruned Part. Sketches: \t{}".format(self.num_pruned_sketches))
        
        s.append("\nEnumerative Synthesis Statistics:")
        s.append("  - Synthesis Iterations: {}".format(self.num_iter))
        s.append("  - Complete Candidates Tried: {}".format(self.num_candidates))
        if self.deobfuscation_time is not None:
            s.append("  - Iteratrions per minute: {}".format(int(self.num_iter/(self.deobfuscation_time/60))))
        s.append("  - Num Pruned: {}".format(self.num_pruned))
        s.append("  - Num Not Pruned: {}".format(self.num_not_pruned))
        s.append("  - Avg Pruning Times (all/pruned/not pruned): {}/{}/{}".format(self.my_mean(self.pruned_times+self.not_pruned_times),
                                                                              self.my_mean(self.pruned_times),
                                                                              self.my_mean(self.not_pruned_times)))

        s.append("  - Num Trace Pruning Evaluations: {}".format(self.num_trace_pruning_eval))
        s.append("  - Num Trace Pruning Evaluations Cached: {}".format(self.num_trace_pruning_eval_cached))
        s.append("  - Num Trace Pruned: {}".format(self.num_trace_pruned))
        s.append("  - Num Trace Prune Calls Cached: {}".format(self.num_trace_pruned_cached))
        s.append("  - Avg Trace Pruning Times (pruned not including cached): {}".format(self.my_mean(self.trace_pruned_times)))

        s.append("  - Num Trace Assert Pruned: {}".format(self.num_trace_pruned_assert))
        s.append("  - Avg Trace Assert Pruning Times (pruned): {}".format(self.my_mean(self.trace_pruned_assert_times)))

        s.append("  - Num Trace Compile Pruned: {}".format(self.num_trace_pruned_compile))
        s.append("  - Avg Trace Compile Pruning Times (pruned): {}".format(self.my_mean(self.trace_pruned_compile_times)))

        s.append("  - Num Trace Timeout Pruned: {}".format(self.num_trace_pruned_timeout))
        s.append("  - Avg Trace Timeout Pruning Times (pruned): {}".format(self.my_mean(self.trace_pruned_timeout_times)))

        s.append("  - Num Analysis Pruned: {}".format(self.num_analysis_pruned))
        s.append("  - Avg Analysis Pruning Times (pruned): {}".format(self.my_mean(self.analysis_pruned_times)))

        s.append("  - Num Syntax Pruned: {}".format(self.num_syntax_pruned))
        return "\n".join(s)
