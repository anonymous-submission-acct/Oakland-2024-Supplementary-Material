from argparse import Namespace
import os
from tabulate import tabulate

from args import get_cline_args
from paths import *
from utils import load_from_bin

def report_results(args: Namespace):
    if not os.path.exists(RESULTS_PATH):
        print("No results to report in {}!".format(RESULTS_PATH))
        return

    if not os.path.exists(MANUAL_RESULTS_PATH):
        print("WARNING: No results to report in {}!".format(ARITHMETIC_RESULTS_PATH))
    else:
        print("MANUAL")
        report_results_group(MANUAL_RESULTS_PATH)

def report_results_group(res_path):
    report = None

    for result in os.listdir(res_path):
        rpath = os.path.join(res_path, result)
        stats = load_from_bin(rpath)
        res = stats.gen_report()
        if report == None:
            report = res
        else:
            report.append(res[1])

    print(tabulate(report))

if __name__ == "__main__":
    args = get_cline_args()
    report_results(args)
