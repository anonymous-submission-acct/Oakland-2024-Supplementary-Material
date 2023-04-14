from argparse import ArgumentParser, Namespace
import json
import openai
import os
import pickle
import random
import re

openai.api_key = ""

REAL_OBF1_PATH = os.path.join("evaluation", "output", "sampled-obfus1")
REAL_OBF2_PATH = os.path.join("evaluation", "output", "sampled-obfus2")
REAL_OBF3_PATH = os.path.join("evaluation", "output", "sampled-obfus3")

OBF1_PATH = os.path.join("benchmarks", "sampled", "obfus1", "basic-algorithms")
OBF2_PATH = os.path.join("benchmarks", "sampled", "obfus2", "basic-algorithms")
OBF3_PATH = os.path.join("benchmarks", "sampled", "obfus3", "basic-algorithms")

ORIG_PATH = os.path.join("benchmarks", "basic-algorithms")

OUTPUT_PATH = os.path.join("final_chatgpt_results.bin")

PROGRAM_PROMPT_1 ="""
The following C program has been obfuscated. Please return a deobfuscated version of the code.
```
{prog}
```
"""

PROGRAM_PROMPT_2 ="""
The following C program has been obfuscated using possibly one or more control-flow obfuscations from the following set of obfuscations: flattening, dead-code insertion, basic-block fission, loop unrolling, loop fission, and irrelevant code insertion. Please return a deobfuscated version of the code.
```
{prog}
```
"""

PROGRAM_PROMPT_3 ="""
The following C program has been obfuscated using the following sequence of control-flow obfuscations: {obfs}. Please return a deobfuscated version of the code.
```
{prog}
```
"""

def get_cline_args():
    """ Fetches the arguments passed in at the command line

    return: argument object
    """
    parser = ArgumentParser()
    parser.add_argument("--review", help="run review of results", action="store_true")
    parser.add_argument("--chisel", help="fetch results of chisel on benchmarks", action="store_true")

    args = parser.parse_args()

    return args

def get_benchmarks():
    progs = []
    regex = re.compile("(int|void) OBF_FUNC\([^)]*\) {")
    for bpath in [OBF1_PATH, OBF2_PATH, OBF3_PATH]:
        for prog_name in os.listdir(bpath):
            if prog_name == "stats.json":
                continue
            prog_path = os.path.join(bpath, prog_name)
            with open(prog_path, "r") as f:
                src = f.read()
            src_lines = src.split("\n")
            new_src_lines = []
            start = False
            obfs = []
            for line in src_lines:
                if regex.findall(line):
                    start = True
                if start and not "// variants" in line and not "// expanded variants" in line:
                    new_src_lines.append(line)
                else:
                    if "// variants" in line:
                        obfs = [s.replace(" ", "") for s in line[12:].split(", ")]
            src = "\n".join(new_src_lines)
            orig_path = os.path.join(ORIG_PATH, "{}.c".format(prog_name.split("-")[0]))
            with open(orig_path, "r") as f:
                orig_src = f.read()
            progs.append((prog_name, src, orig_src, obfs))

    return progs

def run_prompt(prompt, obf_prog, orig_prog, obfuscations):
    message = {"role": "user", "content": prompt}

    # print(prog)
    # print(prompt)

    chat = openai.ChatCompletion.create(model="gpt-3.5-turbo", messages=[message])
    reply = chat.choices[0].message.content

    return {"prompt": prompt, "obf_prog": obf_prog, "chatgpt": reply, "orig_prog": orig_prog, "obfuscations": obfuscations}


def run_experiment(args):
    benchmarks = get_benchmarks()
    N = 20

    random.shuffle(benchmarks)

    results = {}

    total_run = 0
    for name, obf_prog, orig_prog, obfuscations in benchmarks:
        if total_run == N:
            break # Only do first N random programs
        prompt1 = PROGRAM_PROMPT_1.format(prog=obf_prog)
        prompt2 = PROGRAM_PROMPT_2.format(prog=obf_prog)
        prompt3 = PROGRAM_PROMPT_3.format(prog=obf_prog, obfs=", ".join(obfuscations))

        try:
            prompt1_res = run_prompt(prompt1, obf_prog, orig_prog, obfuscations)
            prompt2_res = run_prompt(prompt2, obf_prog, orig_prog, obfuscations)
            prompt3_res = run_prompt(prompt3, obf_prog, orig_prog, obfuscations)
            results[name] = [prompt1_res, prompt2_res, prompt3_res]
            total_run += 1
        except openai.error.InvalidRequestError as e:
            print(f"Failed to run through ChatGPT: {name}")

    with open(OUTPUT_PATH, "wb") as f:
        pickle.dump(results, f)

def review():
    with open(OUTPUT_PATH, "rb") as f:
        results = pickle.load(f)

    for bmark, bmark_results in results.items():
        obf_str = ', '.join(bmark_results[0]['obfuscations'])
        print(f"{bmark}: {obf_str}")
        print("--ORIGINAL PROGRAM--")
        print(bmark_results[0]["orig_prog"])
        print("--CHATGPT RESPONSE PROMPT 1--")
        print(bmark_results[0]["chatgpt"])
        print("--CHATGPT RESPONSE PROMPT 2--")
        print(bmark_results[1]["chatgpt"])
        print("--CHATGPT RESPONSE PROMPT 3--")
        print(bmark_results[2]["chatgpt"])
        print("--"*8)
        x = input()
        while (x in ["p1", "p2", "p3"]):
            if x == "p1":
                print(bmark_results[0]["prompt"])
            elif x == "p2":
                print(bmark_results[1]["prompt"])
            elif x == "p3":
                print(bmark_results[2]["prompt"])
            print("--"*8)
            x = input()

def fetch_chisel_results():
    with open(OUTPUT_PATH, "rb") as f:
        results = pickle.load(f)

    chisel_results = {}

    for bmark, bmark_results in results.items():
        num_obfs = len(bmark_results[0]["obfuscations"])
        if num_obfs == 1:
            rpath = REAL_OBF1_PATH
        elif num_obfs == 2:
            rpath = REAL_OBF2_PATH
        elif num_obfs == 3:
            rpath = REAL_OBF3_PATH
        else:
            raise Exception()
        for res_json in os.listdir(rpath):
            res_json_path = os.path.join(rpath, res_json)
            try:
                with open(res_json_path, "rb") as f2:
                    res = json.load(f2)
                if not res["Source"] == bmark:
                    continue
                chisel_results[bmark] = res["Status"]
            except json.decoder.JSONDecodeError as e:
                print(f"Unable to parse json from: {res_json_path}")
                pass


    print(chisel_results)
    print(f"TOTAL: {len(chisel_results.keys())}")
    print(f"SOLVED: {len([f for f,r in chisel_results.items() if r == 'COMPLETE'])}")

if __name__ == "__main__":
    random.seed(1234)
    args = get_cline_args()
    if args.review:
        review()
    elif args.chisel:
        fetch_chisel_results()
    else:
        run_experiment(args)
