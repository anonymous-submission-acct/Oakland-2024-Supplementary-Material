#!/bin/bash

source ./run_benchmark.sh
export timeout=1200
export max_parallelism=9
export proc_timeout="22m"

run_sampled_random_ablation() {
    local num_obfus=$1
    local size=$2
    local ablation=$3
    local num_parallelism=$4
    local benchmark_name="benchmark_size${size}_obfus${num_obfus}_ablation_${ablation}"
    local chisel_args="--ablation=${ablation}"

    if [ -z "${num_parallelism}" ]; then
        num_parallelism=${max_parallelism}
    fi
    # benchmarks/sampled-random/obfus1/size-5
    run_benchmark "${benchmark_name}" "${timeout}" "${num_parallelism}" "../benchmarks/sampled-random/obfus${num_obfus}/size-${size}" "../evaluation/output/sampled/obfus${num_obfus}-${size}-${ablation}" "${chisel_args}"
}

for size in 5 10 15 20 30
do
    run_sampled_random_ablation 1 ${size} 1a 30
    run_sampled_random_ablation 1 ${size} 1b
    run_sampled_random_ablation 1 ${size} 2
    run_sampled_random_ablation 1 ${size} 3

    run_sampled_random_ablation 2 ${size} 1a 30
    run_sampled_random_ablation 2 ${size} 1b
    run_sampled_random_ablation 2 ${size} 2
    run_sampled_random_ablation 2 ${size} 3

    run_sampled_random_ablation 3 ${size} 1a 30
    run_sampled_random_ablation 3 ${size} 1b
    run_sampled_random_ablation 3 ${size} 2
    run_sampled_random_ablation 3 ${size} 3
done