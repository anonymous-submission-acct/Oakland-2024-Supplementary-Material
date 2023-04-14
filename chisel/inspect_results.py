from argparse import Namespace
import os
from typing import *

from args import get_cline_args
from utils import load_from_bin

def inspect(args: Namespace):
    stats = load_from_bin("tmp.bin")
    # stats = load_from_bin(os.path.join("results", "manual", "flatten2.c.bin"))

    # print(stats.formatter.format(stats.candidates[-1]))
    print(stats)

if __name__ == "__main__":
    args = get_cline_args()
    inspect(args)
