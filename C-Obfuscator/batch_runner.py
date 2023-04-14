from typing import Any
from pathlib import Path
from shutil import copy, which
from argparse import ArgumentParser, Namespace
from collections import defaultdict
from datetime import timedelta

from pydantic_yaml import YamlModel as BaseModel
from pydantic import Field
from pydantic.dataclasses import dataclass
import json

import subprocess
from subprocess import run as subprocess_run
import glob
import itertools
import random

import multiprocessing

from obfuscator import main as obf_main

TIGRESS_ENV = "x86_64:Linux:Gcc:4.6"
TIGRESS_PARAMS = [f"--Environment={TIGRESS_ENV}"]
CLANG_FORMAT_STYLE = "{ColumnLimit: 114514}"

ObfuscationVariant = tuple[str, ...]

random.seed(1919)

TIMEOUT_TIGRESS = timedelta(minutes=1).total_seconds()
TIMEOUT_C_OBFUS = timedelta(seconds=10).total_seconds()

class ObfuscationDirectoryStatistics(BaseModel):
    obfuscation_count: dict[str, int] = Field(default_factory=dict)
    failed_obfuscation_count: dict[str, int] = Field(default_factory=lambda: defaultdict(int))
    obfuscation_variant_count: dict[str, dict[str, int]] = Field(default_factory=lambda: defaultdict(lambda: defaultdict(int)))
    detailed_config: dict[str, ObfuscationVariant] = Field(default_factory=dict)
    failed_files: list[str] = Field(default_factory=list)


@dataclass(frozen=True)
class TigressObfuscationVariant:
    name: str
    args: dict[str, str]

    def __post_init__(self):
        def _format_str(x: Any) -> str:
            if x is None:
                return "none"
            if isinstance(x, bool):
                return str(x).lower()
            return str(x)

        for k, v in self.args.items():
            self.args[k] = _format_str(v)


class TigressSpec(BaseModel):
    global_options: list[str]
    global_params: dict[str, str]
    templates: dict[str, list[str]]
    obfuscations: dict[str, list[TigressObfuscationVariant]]

    def __init__(self, **data):
        data["obfuscations"] = {
            k: [TigressObfuscationVariant(*t) for t in v.items()]
            for k, v in data["obfuscations"].items()
        }
        super().__init__(**data)

    def complete_obfuscations(self) -> dict[str, dict[str, list[str]]]:
        result = {}
        for obf_name, variants in self.obfuscations.items():
            result.setdefault(obf_name, {})

            for variant in variants:
                template = self.templates[f"{obf_name}-base"]
                result[obf_name][variant.name] = [
                    line.format(**{**self.global_params, **variant.args})
                    for line in template
                ]
        return result


class ObfuscationSpec(BaseModel):
    name: str
    tigress: str
    variants: list[ObfuscationVariant]


def get_args() -> Namespace:
    parser = ArgumentParser(description="Run obfuscation on a set of programs.")
    parser.add_argument(
        "--sample",
        "-n",
        help="Number of samples per benchmark to run",
        type=int,
        default=0,
    )
    parser.add_argument("--repeat", "-r", help="Number of times to repeat", type=int, default=1)
    parser.add_argument("--spec", "-s", help="Path to spec file", required=True)
    parser.add_argument(
        "--output", "-o", help="Path to output directory", required=True
    )
    parser.add_argument("input", help="Path to input directory", nargs="+")
    return parser.parse_args()


def tigress_obfuscate_file(
    in_src: Path, out_src: Path, tigress_cli_args: list[str]
) -> str:
    tigress_exec = which("tigress")
    if tigress_exec is None:
        raise RuntimeError("Could not find tigress executable")

    try:
        cmd = (
            ["tigress", f"--out={out_src}"]
            + TIGRESS_PARAMS
            + tigress_cli_args
            + [str(in_src)]
        )
        if not any(x.startswith("--Seed=") for x in cmd):
            cmd.append(f"--Seed={random.randint(0, 2 ** 32)}")
        output = subprocess.run(
            cmd,
            encoding="utf-8",
            check=True,
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            timeout=TIMEOUT_TIGRESS,
        ).stdout
        return output.strip()
    except subprocess.CalledProcessError as ex:
        print("".join([ex.output, ex.stderr, str(ex)]).strip())
        raise RuntimeError(ex)


def obfuscate_file(
    in_src: Path,
    out_src: Path,
    var_op: str,
    tigress_options: dict[str, dict[str, list[str]]],
) -> bool:
    try:
        if ":" in var_op:
            base, v = var_op.split(":")
            cli_args = tigress_options[base][v]
            out = tigress_obfuscate_file(in_src, out_src, cli_args)
            if out:
                print(out)
        else:
            # builtin obfuscation
            args = Namespace()
            args.obfuscations = [var_op]
            args.output_path = out_src
            args.prog_path = in_src
            p = multiprocessing.Process(target=obf_main, args=(args, False))
            p.start()
            p.join(TIMEOUT_C_OBFUS)
            if p.is_alive():
                print(f"Timeout while obfuscating {in_src} with {var_op}")
                p.kill()
                p.join()
                return False
        return True
    except Exception as ex:
        print(f"Failed to obfuscate {in_src} with {var_op}")
        print(ex)
        return False


def expand_variant(
    v: ObfuscationVariant, tigress_options: dict[str, dict[str, list[str]]]
) -> list[ObfuscationVariant]:
    variants_per_step = [
        [f"{s}:{k}" if k else s for k in tigress_options.get(s, {"": []})] for s in v
    ]
    return list(itertools.product(*variants_per_step))


def obfuscate_directory_with_sampling(
    p: Path,
    output: Path,
    variants: list[tuple[str, ...]],
    tigress_options,
    sample_size: int,
) -> ObfuscationDirectoryStatistics:
    output_path = output / p.name
    output_path.mkdir(parents=True, exist_ok=True)

    stats = ObfuscationDirectoryStatistics()
    for v in variants:
        stats.obfuscation_count[str(v)] = 0

    for idx in range(sample_size):
        for src_in in glob.glob(str(p / "*.c")):
            src_out = output_path / f"{Path(src_in).stem}-{idx:03d}.c"
            src_out_in = src_out.with_suffix(".in.c")

            num_retry = 10
            while num_retry > 0:
                num_retry -= 1
                copy(src_in, src_out_in)
                variant = random.choice(variants)
                expanded_variant = random.choice(expand_variant(variant, tigress_options))

                for step in expanded_variant:
                    if not obfuscate_file(src_out_in, src_out, step, tigress_options) or not src_out.exists():
                        src_out.unlink(missing_ok=True)
                        stats.failed_obfuscation_count[str(variant)] += 1
                        break
                    copy(src_out, src_out_in)

                format_c_source(src_out)
                src_out_in.unlink()

                if src_out.exists() and validate_source(src_out):
                    num_retry = -1
                
                    stats.obfuscation_count[str(variant)] += 1
                    for v in expanded_variant:
                        if ":" not in v:
                            continue
                        var, sub_var = v.split(":")
                        stats.obfuscation_variant_count[var][sub_var] += 1
                    stats.detailed_config[src_out.name] = expanded_variant
                    with src_out.open("a") as f:
                        f.write(f"\n// variants: {', '.join(variant)}\n")
                        f.write(f"// expanded variants: {', '.join(expanded_variant)}\n")
            
            if num_retry != -1:
                stats.failed_files.append(src_out.name)

    with (output_path / "stats.json").open("w") as f:
        json.dump(stats.dict(), f, indent=2)
    
    return stats


def validate_source(src_path: Path) -> bool:
    try:
        subprocess_run(["gcc", str(src_path)],
                                encoding="utf-8",
                                check=True,
                                capture_output=True,
                                timeout=10)
        return True
    except subprocess.CalledProcessError as ex:
        print("".join([ex.output, ex.stderr, str(ex)]).strip())
        return False
    except subprocess.TimeoutExpired:
        return False

def obfuscate_directory(
    p: Path, output: Path, variants: list[tuple[str, ...]], tigress_options, repeat=1
) -> None:
    output_path = output / p.name
    output_path.mkdir(parents=True, exist_ok=True)

    for idx, variant in enumerate(variants):
        expanded_variants = expand_variant(variant, tigress_options)
        for sub_idx, expanded_variant in enumerate(expanded_variants):
            output_variant_dir_path = output_path / f"{idx:04d}-{sub_idx:04d}"
            output_variant_dir_path.mkdir(parents=True, exist_ok=True)

            with open(output_variant_dir_path / "README", "w") as f:
                f.write("\n".join(expanded_variant))

            for _ in range(repeat):
                for src_in in glob.glob(str(p / "*.c")):
                    if _ == 0:
                        src_out = output_variant_dir_path / Path(src_in).name
                    else:
                        src_out = output_variant_dir_path / f"{Path(src_in).stem}_{_}{Path(src_in).suffix}"
                    src_out_in = src_out.with_suffix(".in.c")
                    copy(src_in, src_out_in)
                    for step in expanded_variant:
                        if not obfuscate_file(src_out_in, src_out, step, tigress_options):
                            src_out.unlink(missing_ok=True)
                            break
                        copy(src_out, src_out_in)
                    format_c_source(src_out)
                    src_out_in.unlink()


def format_c_source(src_path: Path) -> None:
    if not src_path.exists():
        return

    FORMAT_COMMAND = ["clang-format", "-style", CLANG_FORMAT_STYLE, "-i", str(src_path)]
    PREPROCESS_COMMAND = [
        "gcc",
        "-E",
        str(src_path),
    ]
    HEADERS = """#define __attribute__(x)
#define __extension__
#define __restrict
#define __inline
#define __asm__(x)

typedef void* __builtin_va_list;"""
    with open(src_path, "r") as src_file:
        src_lines = src_file.readlines()

    with open(src_path, "w") as src_file:
        src_file.write(HEADERS)
        src_file.writelines(src_lines)

    # preprocess the source file for headers, comments removal etc.
    out_preproc = subprocess.check_output(PREPROCESS_COMMAND)
    src_lines = out_preproc.decode("utf8").splitlines()

    # remove lines that are not part of the source code
    src_lines = [
        line for line in src_lines if not line.startswith("#") and line.strip()
    ]

    with open(src_path, "w") as f:
        f.write("\n".join(src_lines))

    # format the source file
    subprocess.run(FORMAT_COMMAND, check=True)


def main():
    args = get_args()
    spec = ObfuscationSpec.parse_file(args.spec)
    tigress_options = TigressSpec.parse_file(
        Path(args.spec).parent / spec.tigress
    ).complete_obfuscations()

    for p in args.input:
        if args.sample:
            obfuscate_directory_with_sampling(
                Path(p),
                Path(args.output) / spec.name,
                spec.variants,
                tigress_options,
                args.sample,
            )
        else:
            obfuscate_directory(
                Path(p), Path(args.output) / spec.name, spec.variants, tigress_options, args.repeat
            )


if __name__ == "__main__":
    main()
