from argparse import ArgumentParser, Namespace
from collections import defaultdict
import json
import matplotlib.pyplot as plt
import matplotlib.gridspec as gridspec
import numpy as np
import os
from pathlib import Path
from statistics import mean, median
from datetime import timedelta

from extract_source_stats import get_stats

REAL_OBF1_PATH = os.path.join("evaluation", "output", "sampled-obfus1")
REAL_OBF2_PATH = os.path.join("evaluation", "output", "sampled-obfus2")
REAL_OBF3_PATH = os.path.join("evaluation", "output", "sampled-obfus3")

SYNTHETIC_PATH = os.path.join("evaluation", "output", "sampled")

OUTPUT_PATH = os.path.join("figures")

TIMEOUT_SECONDS = timedelta(minutes=20).total_seconds()

# TODO: Add ablation paths

def get_cline_args():
    """ Fetches the arguments passed in at the command line

    return: argument object
    """
    parser = ArgumentParser()
    parser.add_argument("--pie", help="creates pie charts", action="store_true")
    parser.add_argument("--bar", help="creates bar charts", action="store_true")
    parser.add_argument("--sizegraph", help="creates graph for size experiment", action="store_true")
    parser.add_argument("--cdf", help="creates cdf graph for ablation", action="store_true")

    args = parser.parse_args()

    return args

def get_synthetic_source_label_path(num_obfus, size, file_name: str) -> tuple[str, str]:
    size_str, idx_str, _ = file_name.removeprefix(".c").split("-")
    assert int(size_str) == size
    source_path = f"benchmarks/sampled-random/obfus{num_obfus}/size-{size}/{Path(file_name).stem}.c"
    label_path = f"benchmarks/random-programs/size-{size_str}/{size_str}-{idx_str}.c"
    return source_path, label_path

def fetch_results():
    results = {}
    invalid_result_filenames = set()

    TIMEOUT_KEYWORDS = [
        "concurrent.futures.process.BrokenProcessPool",
        "KeyboardInterrupt",
        "waiter.acquire(True, timeout)",
        "TIMEOUT"
    ]

    TRACE_EXTRACTION_FAILED_KEYWORDS = [
        "RuntimeError",
        "subprocess.CalledProcessError"
    ]

    # Fetch real results
    results["real"] = defaultdict(list)
    real_paths = [REAL_OBF1_PATH, REAL_OBF2_PATH, REAL_OBF3_PATH]
    for i, real_path in enumerate(real_paths):
        for res_json in os.listdir(real_path):
            res_json_path = os.path.join(real_path, res_json)
            try:
                with open(res_json_path, "r") as f:
                    res = json.load(f)
                    if res["Status"] == "TIMEOUT" and int(res["Time (sec)"]) < 2:
                        res["Time (sec)"] = str(TIMEOUT_SECONDS)
                results["real"][i+1].append(res)
            except:
                with open(res_json_path, "r") as f:
                    s = f.read()
                if any(k in s for k in TRACE_EXTRACTION_FAILED_KEYWORDS):
                    print(f"Skipping because trace extraction failed for {res_json_path}!")
                    pass
                elif any(k in s for k in TIMEOUT_KEYWORDS):
                    # TODO: could you also consider this to be timeout?
                    results["real"][i+1].append({"Status": "TIMEOUT"})
                    print(f"timed out -- skipping {res_json_path}")
                else:
                    invalid_result_filenames.add(os.path.basename(res_json_path))
                    # print(f"Failed to add {res_json_path}!")

    # Fetch synthetic results
    results["synthetic"] = {}
    for res_fold in os.listdir(SYNTHETIC_PATH):
        res_fold_path = os.path.join(SYNTHETIC_PATH, res_fold)
        s = res_fold.split("_")
        if len(s) < 2:
            continue
        
        num_obf = int(s[0][5])
        tigress_size = int(s[1])
        if not num_obf in results["synthetic"]:
            results["synthetic"][num_obf] = defaultdict(list)
        for res_json in os.listdir(res_fold_path):
            src, _ = get_synthetic_source_label_path(num_obf, tigress_size, os.path.basename(res_json))

            res_json_path = os.path.join(res_fold_path, res_json)
            try:
                with open(res_json_path, "r") as f:
                    res = json.load(f)
                    if res["Status"] == "TIMEOUT" and int(res["Time (sec)"]) < 2:
                        res["Time (sec)"] = str(TIMEOUT_SECONDS)
                results["synthetic"][num_obf][tigress_size].append(res)
            except:
                with open(res_json_path, "r") as f:
                    s = f.read()
                if any(k in s for k in TRACE_EXTRACTION_FAILED_KEYWORDS):
                    # print(f"Skipping because trace extraction failed for {res_json_path}!")
                    pass
                else:
                    if os.path.exists(src):
                        results["synthetic"][num_obf][tigress_size].append({"Status": "TIMEOUT", "Num Guards": get_stats(src).num_guards})
                    print(f"timed out -- skipping {res_json_path}")
                # else:
                #     invalid_result_filenames.add(os.path.basename(res_json_path))
                #     print(f"Failed to add {res_json_path}!")

    print(f"Invalid result filenames: {invalid_result_filenames}")
    return results

def graph(args: Namespace):
    results = fetch_results()

    if args.pie:
        pie(results)

    if args.bar:
        bar(results)

    if args.sizegraph:
        # sizegraph(results)
        # sizegraph_tigress(results)
        # sizegraph_guards(results)
        sizegraph_guards_bar(results)

    if args.cdf:
        raise NotImplementedError

def pie(results):
    # Loop through results per each number of obfuscations
    size_results = []
    for num_obf in [1,2,3]:
        deobf_results = results["real"][num_obf]
        solved = [r for r in deobf_results if r["Status"] == "COMPLETE"]
        num_solved = len(solved)
        num_timed_out = len(deobf_results) - num_solved
        size_results.append([num_solved, num_timed_out])

    gs = gridspec.GridSpec(2,4)
    gs.update(wspace=0.5)
    ax1 = plt.subplot(gs[0,:2],)
    ax2 = plt.subplot(gs[0, 2:])
    ax3 = plt.subplot(gs[1, 1:3])

    labels = ["Solved", "Timed Out"]

    ax1.pie(size_results[0], labels=labels, textprops={'fontsize':14}, autopct='%1.1f%%')
    ax1.set_title("One Obfuscation Applied", fontsize=16)

    ax2.pie(size_results[1], labels=labels, textprops={'fontsize':14}, autopct='%1.1f%%')
    ax2.set_title("Two Obfuscations Applied", fontsize=16)

    ax3.pie(size_results[2], labels=labels, textprops={'fontsize':14}, autopct='%1.1f%%')
    ax3.set_title("Three Obfuscations Applied", fontsize=16)

    plt.show()

def bar(results):
    loc_results = defaultdict(list)
    for num_obf in [1,2,3]:
        deobf_results = results["real"][num_obf]
        obf_loc = [r["LOC"] for r in deobf_results]
        obf_loc_solved = [r["LOC"] for r in deobf_results if r["Status"] == "COMPLETE"]
        deobf_loc = [r["LOC Deobfuscated"] for r in deobf_results if r["Status"] == "COMPLETE"]
        og_loc = [0 for r in deobf_results]
        og_loc_solved = [0 for r in deobf_results if r["Status"] == "COMPLETE"]
        loc_res = [mean(l) for l in [og_loc_solved, obf_loc_solved, deobf_loc]]
        loc_results["Original LOC"].append(loc_res[0])
        loc_results["Obfuscated LOC"].append(loc_res[1])
        loc_results["Deobfuscated LOC"].append(loc_res[2])

    xtitles = ["One Obfuscation", "Two Obfuscations", "Three Obfuscations"]
    x = np.arange(len(xtitles))
    width = 0.25
    multiplier = 0

    fig, ax = plt.subplots(layout='constrained')

    for prog_type,loc_res in loc_results.items():
        print(loc_res)
        offset = width*multiplier
        rects = ax.bar(x+offset, loc_res, width, label=prog_type)
        ax.bar_label(rects, padding=3)
        multiplier += 1

    ax.set_ylabel('LOC', fontsize=16)
    ax.set_title("Lines of Code Before and After Deobfuscation", fontsize=20)
    ax.set_xticks(x+width, xtitles, fontsize=16)
    ax.legend()

    plt.show()

def sizegraph(results):
    size_and_res = []
    for num_obf in [1,2,3]:
        for tigress_size, res_jsons in results["synthetic"][num_obf].items():
            size_and_res += [(r["LOC"], 1 if r["Status"] == "COMPLETE" else 0) for r in res_jsons]

    sorted_size_and_res = sorted(size_and_res)
    obf_locs = [s[0] for s in sorted_size_and_res]
    solved = [s[1] for s in sorted_size_and_res]

    bin_size = 20
    binned_obf_locs = [mean(obf_locs[i:i+bin_size]) for i in range(0,len(obf_locs), bin_size)]
    binned_solved = [float(sum(solved[i:i+bin_size])*100)/bin_size for i in range(0, len(solved), bin_size)]

    ax = plt.plot(binned_obf_locs, binned_solved)

    plt.ylabel('% Deobfuscated', fontsize=16)
    plt.xlabel('LOC in Obfuscated Program', fontsize=16)
    plt.title("Percentage of Synthetic Programs Deobfuscated by Size", fontsize=20)

    plt.show()

def sizegraph_tigress(results):
    obf_locs_per_size = {}
    for num_obf in [1,2,3]:
        for tigress_size, res_jsons in results["synthetic"][num_obf].items():
            obf_locs_per_size[tigress_size] = [1 if r["Status"] == "COMPLETE" else 0 for r in res_jsons]

    sizes = sorted(obf_locs_per_size.keys())
    solved = [float(sum(obf_locs_per_size[s]))*100/len(obf_locs_per_size[s]) for s in sizes]

    ax = plt.plot(sizes, solved)

    plt.ylabel('% Deobfuscated', fontsize=16)
    plt.xlabel('Tigress Size', fontsize=16)
    plt.title("Percentage of Synthetic Programs Deobfuscated by Size", fontsize=20)

    plt.show()

def sizegraph_guards(results):
    size_and_res = []
    for num_obf in [1,2,3]:
        for tigress_size, res_jsons in results["synthetic"][num_obf].items():
            size_and_res += [(r["Num Guards"], 1 if r["Status"] == "COMPLETE" else 0) for r in res_jsons]

    sorted_size_and_res = sorted(size_and_res)
    num_guards = [s[0] for s in sorted_size_and_res]
    solved = [s[1] for s in sorted_size_and_res]

    bin_size = 10
    binned_num_guards = [mean(num_guards[i:i+bin_size]) for i in range(0,len(num_guards), bin_size)]
    binned_solved = [float(sum(solved[i:i+bin_size])*100)/bin_size for i in range(0, len(solved), bin_size)]

    print(binned_num_guards)

    ax = plt.plot(binned_num_guards, binned_solved)

    plt.ylabel('% Deobfuscated', fontsize=16)
    plt.xlabel('# Guards', fontsize=16)
    plt.title("Percentage of Synthetic Programs Deobfuscated by Size", fontsize=20)

    plt.show()

def sizegraph_guards_bar(results):
    size_and_res = []
    for num_obf in [1,2,3]:
        for tigress_size, res_jsons in results["synthetic"][num_obf].items():
            size_and_res += [(r["Num Guards"], 1 if r["Status"] == "COMPLETE" else 0) for r in res_jsons]

    guard_labels = ["0-9", "10-19", "20-29", "30-39", "40-49", ">50"]
    categories = [(lambda x: x < 10), (lambda x: x>=10 and x < 20), (lambda x: x >= 20 and x < 30), (lambda x: x >= 30 and x < 40), (lambda x: x >= 40 and x < 50), (lambda x: x >= 50)]

    binned_solved = []
    for category in categories:
        binned_solved.append([res for num_guards, res in size_and_res if category(num_guards)])
    
    print(binned_solved)

    binned_solved_perc = [float(sum(s)*100)/len(s) for s in binned_solved]

    print(guard_labels)
    print(binned_solved_perc)

    ax = plt.bar(guard_labels, binned_solved_perc, width=0.5, color='maroon')

    plt.ylabel('% Deobfuscated', fontsize=16)
    plt.xlabel('# Control-Flow Operators', fontsize=16)
    plt.title("Percentage of Synthetic Programs Deobfuscated by Control-Flow Complexity", fontsize=12)

    plt.show()


if __name__ == "__main__":
    if not os.path.exists(OUTPUT_PATH):
        os.makedirs(OUTPUT_PATH)
    args = get_cline_args()
    graph(args)
