#!/bin/bash

source ./run_benchmark.sh
export proc_timeout="22m"

timeout=1200
max_parallelism=14
benchmark_name="benchmark_sampled_obfus1"
stats_dir="../evaluation/output/sampled-obfus1"

input_dir="../benchmarks/sampled/obfus1/basic-algorithms"
run_benchmark "${benchmark_name}" "${timeout}" "${max_parallelism}" "${input_dir}" "${stats_dir}"

input_dir="../benchmarks/sampled/obfus1/simple-hash-functions"
run_benchmark "${benchmark_name}" "${timeout}" "${max_parallelism}" "${input_dir}" "${stats_dir}"

input_dir="../benchmarks/sampled/obfus1/small-programs"
run_benchmark "${benchmark_name}" "${timeout}" "${max_parallelism}" "${input_dir}" "${stats_dir}"
