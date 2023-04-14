#!/bin/bash

source ./run_benchmark.sh
export timeout=1200
export max_parallelism=20
export proc_timeout="22m"

run_sampled_ablation() {
    local num_obfus=$1
    local ablation=$2
    local num_parallelism=$3
    local benchmark_name="benchmark_sampled_obfus${num_obfus}_ablation_${ablation}_sp"
    local chisel_args="--ablation=${ablation}"

    if [ -z "${num_parallelism}" ]; then
        num_parallelism=${max_parallelism}
    fi

    run_benchmark "${benchmark_name}" "${timeout}" "${num_parallelism}" "../benchmarks/sampled/obfus${num_obfus}/basic-algorithms" "../evaluation/output/sampled-obfus${num_obfus}-${ablation}" "${chisel_args}"
    run_benchmark "${benchmark_name}" "${timeout}" "${num_parallelism}" "../benchmarks/sampled/obfus${num_obfus}/simple-hash-functions" "../evaluation/output/sampled-obfus${num_obfus}-${ablation}" "${chisel_args}"
    run_benchmark "${benchmark_name}" "${timeout}" "${num_parallelism}" "../benchmarks/sampled/obfus${num_obfus}/small-programs" "../evaluation/output/sampled-obfus${num_obfus}-${ablation}" "${chisel_args}"
}

run_sampled_ablation 1 1a 50
run_sampled_ablation 1 1b
run_sampled_ablation 1 2
run_sampled_ablation 1 3

run_sampled_ablation 2 1a 50
run_sampled_ablation 2 1b
run_sampled_ablation 2 2
run_sampled_ablation 2 3

run_sampled_ablation 3 1a 50
run_sampled_ablation 3 1b
run_sampled_ablation 3 2
run_sampled_ablation 3 3