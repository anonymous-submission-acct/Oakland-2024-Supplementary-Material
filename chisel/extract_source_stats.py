from argparse import ArgumentParser
from pathlib import Path

from pydantic import BaseModel

import extractor.source_analyzer as src_analysis
from langs.c.c_parser import CParser
from extractor.source_analyzer import SourceLineType

class SourceStats(BaseModel):
    num_loc: int
    num_guards: int
    num_stmts: int
    num_ifs: int
    num_whiles: int
    num_cases: int
    num_switches: int

def get_stats(src_path: str):
    ast = CParser().parse(src_path)
    config = src_analysis.SourceParseConfig()
    visitor = src_analysis.SourceLineExtractor(config)
    visitor.visit(ast)
    visitor.finalize()

    src_file_info = visitor.to_source_file_info()

    num_loc = sum(1 for _ in open(src_path, "r")) - visitor.first_func_decl_line
    
    guards = [code.src for code in src_file_info.sources.values() if SourceLineType.GUARD in code.type and not SourceLineType.GUARD_SWITCH in code.type]
    guards.extend([code.additional_guard for code in src_file_info.sources.values() if code.additional_guard is not None])
    guards = list(set(guards))
    stmts = [code.src for code in src_file_info.sources.values() if SourceLineType.STMT in code.type]

    return SourceStats(
        num_loc=num_loc,
        num_guards=len(guards),
        num_stmts=len(stmts),
        num_ifs=src_file_info.num_ifs,
        num_whiles=src_file_info.num_whiles,
        num_cases=src_file_info.num_cases,
        num_switches=src_file_info.num_switches,
    )


def get_args():
    parser = ArgumentParser()
    parser.add_argument('--output', '-o', required=False, help='Output file', type=Path)
    parser.add_argument('input', help='Input file', type=Path)
    return parser.parse_args()

def main():
    args = get_args()
    stats = get_stats(str(args.input))

    if args.output and args.output.exists():
        stats.json(args.output, mode="a", indent=2)
    else:
        print(stats.json(indent=2))

if __name__ == '__main__':
    main()

