#!/bin/bash

source ./run_benchmark.sh
export timeout=1200
export max_parallelism=8

run_sampled_random() {
    local num_obfus=$1
    local size=$2
    local benchmark_name="benchmark_sr${num_obfus}_${size}"
    run_benchmark "${benchmark_name}" "${timeout}" "${max_parallelism}" "../benchmarks/sampled-random/obfus${num_obfus}/size-${size}" "../evaluation/output/sampled/obfus${num_obfus}_${size}"
}

export benchmark_name="benchmark_sampled_random"

run_sampled_random 1 5
run_sampled_random 1 10
run_sampled_random 1 15
run_sampled_random 1 20
run_sampled_random 1 30

run_sampled_random 2 5
run_sampled_random 2 10
run_sampled_random 2 15
run_sampled_random 2 20
run_sampled_random 2 30

run_sampled_random 3 5
run_sampled_random 3 10
run_sampled_random 3 15
run_sampled_random 3 20
run_sampled_random 3 30