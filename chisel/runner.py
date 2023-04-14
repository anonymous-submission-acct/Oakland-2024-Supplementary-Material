from argparse import Namespace
import os
import logging
import traceback
import time
import json
from concurrent.futures import ProcessPoolExecutor, as_completed, TimeoutError as CFTimeoutError
import copy

from args import get_cline_args
from checkers import *
from deobfuscators import *
from langs.c import *
from pruners import *
from search_models import *
from stats import Stats, Status
from utils import SynthesisTimeoutException
from input_spec import InputSpec
import input_spec_data as isd

# FIX: rearrange imports
from extractor import *
import extractor.source_analyzer as src_analysis
from langs.c.c_parser import CParser
from config import HeuristicConfig, get_minimal_config, MAX_GDB_GENERATION_TIME, get_all_configs

search_models = {
    "size": SizeSearchModel(),
    "random": RandomSearchModel()
}

lang_tools = {
    "c": {
        "analysis": CAnalysis(),
        "checkers": {
            "io": CIOEquivalenceChecker(),
        },
        "formatter": CFormatter(),
        "grammar": CGrammar,
        "pruners": {
            "trace": CTracePruner(),
        },
        "search_models": {},
    }
}


def parse_and_generate_trace(
    src_path: str,
    inputs: list[InputSpec],
    func_name: str
):
    # Retrieve type information of function parameters
    func_decls = parse_c_decls(src_path)
    obfus_func_signature = next(filter(lambda x: x.name == func_name, func_decls))

    extraction_start = time.time()

    # Run analysis on statements to extract declared variables and their types
    ast = CParser().parse(src_path)
    config = src_analysis.SourceParseConfig()
    visitor = src_analysis.SourceLineExtractor(config)
    visitor.visit(ast)
    visitor.finalize()

    source_file_info = visitor.to_source_file_info()
    decl_vars = visitor.decl_vars
    used_vars = visitor.used_vars
    left_vars = visitor.left_vars
    num_loc = sum(1 for _ in open(src_path)) - visitor.first_func_decl_line

    # Generate traces
    logging.info(f"Generating traces for {src_path}")
    trace_start = time.time()
    traces, negation_map = generate_traces(src_path, inputs, source_file_info, config, func_name)
    trace_time = time.time() - trace_start
    extraction_time = time.time() - extraction_start - trace_time
    logging.info(f"Time taken to generate traces (minutes): {trace_time / 60}")

    for k, v in negation_map.items():
        decl_vars[v] = decl_vars[k]
        used_vars[v] = used_vars[k]
        left_vars[v] = left_vars[k]

    return inputs, func_decls, obfus_func_signature, decl_vars, used_vars, left_vars, traces, trace_time, extraction_time, num_loc

def run_inner(args: Namespace, config: HeuristicConfig, trace_info) -> tuple[bool, str, str]:
    lang = args.lang
    assert(lang in lang_tools)

    # Get client specific things
    analysis = lang_tools[lang]["analysis"]
    formatter = lang_tools[lang]["formatter"]
    grammar = lang_tools[lang]["grammar"](args.src_path)
    pruner = NoPruner()
    if not args.disable_trace_pruning:
        pruner = lang_tools[lang]["pruners"]["trace"]
    if args.search_model in search_models:
        search_model = search_models[args.search_model]
    elif args.search_model in lang_tools[lang]["search_models"]:
        search_model = lang_tools[lang]["search_models"][args.search_model]
    else:
        raise Exception("Search model '{}' not found for lang '{}'".format(args.search_model, lang))

    checker = lang_tools[lang]["checkers"][args.checker]

    next_unk = lambda p: p.leftmost_unknown() # Just get the first unknown to expand

    stats = Stats(args.src_path, formatter)

    try:
        if args.deobfuscator == "decomp":
            deobfuscator = DecompositionalDeobfuscator(grammar)
            deobfuscator.deobfuscate_decomp(str(args.src_path), search_model, checker, pruner,
                                            next_unk, analysis, formatter, stats, trace_info, config, args.func_name)
        else:
            raise Exception("[ERROR] Unrecognized deobfuscator type: {}".format(args.deobfuscator))
        stats.status = Status.COMPLETE
    except SynthesisTimeoutException:
        stats.status = Status.TIMEOUT
    except KeyboardInterrupt:
        stats.status = Status.PENDING
    except Exception:
        stats.status = Status.ERROR
        stats.comment = traceback.format_exc()
        logging.error(stats.comment)
        if args.debug is not None:
            raise
    logging.info(f"Deobfuscation complete! {stats.status}; solution? {stats.solution is not None}")
    stats.compute_deobfuscated_stats()

    return stats.solution is not None, json.dumps(stats.to_dict(), indent=2), str(stats)

def prepare_run(args: Namespace) -> tuple:
    src_name = args.src_path.name.replace(".out.c", ".c")
    if src_name not in isd.BASIC_ALGORITHMS_INPUT_MAP:
        logging.info(f"No input spec found for {src_name}, using legacy")
        src_name = "legacy"
    input_specs = isd.INPUT_SPECS[isd.BASIC_ALGORITHMS_INPUT_MAP[src_name]]
    return parse_and_generate_trace(str(args.src_path), input_specs, args.func_name)

def run(args: Namespace) -> tuple[bool, str, str]:
    info = prepare_run(args)
    return run_inner(args, get_minimal_config(), info)

def run_processes(args: Namespace) -> tuple[bool, str, str]:
    trace_info = prepare_run(args)

    configs = get_all_configs()
    with ProcessPoolExecutor(max_workers=4) as executor:
        futures = [
            executor.submit(run_inner, args, config, copy.deepcopy(trace_info))
            for config in configs
        ]
        try:
            for future in as_completed(futures, timeout=args.timeout + MAX_GDB_GENERATION_TIME):
                res, s1, s2 = future.result()
                if res:
                    print("Found solution!")
                    return res, s1, s2
            return futures[-1].result(timeout=2)
        except (TimeoutError, CFTimeoutError, KeyboardInterrupt):
            for f in futures:
                f.cancel()
            if executor._processes is not None:
                for _, p in executor._processes.items():
                    p.kill()
            # os.kill(os.getpid(), 9)
        finally:
            for f in futures:
                f.cancel()
            if executor._processes is not None:
                for _, p in executor._processes.items():
                    p.terminate()
    return False, "KeyboardInterrupt", "KeyboardInterrupt"
    
def main():
    args = get_cline_args()
    logging.basicConfig(level=logging.DEBUG)
    
    try:
        if args.disable_parallel or args.ablation == "1a":
            res, s1, s2 = run(args)
        else:
            res, s1, s2 = run_processes(args)
    except Exception:
        res = False
        s1 = traceback.format_exc()
        s2 = ""
        if args.debug is not None:
            raise

    if args.save_results is not None:
        prog_name = args.src_path.stem.removesuffix(".out")
        if args.save_results.is_dir() or args.save_results.suffix != ".json":
            args.save_results.mkdir(parents=True, exist_ok=True)
            args.save_results = args.save_results / f"{prog_name}.json"
        
        with args.save_results.open("w") as f:
            f.write(s1)
    else:
        logging.info(s1)
        logging.info(s2)

if __name__ == "__main__":
    main()
