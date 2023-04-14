#!/bin/bash

source ./run_benchmark.sh
export proc_timeout="22m"

timeout=1200
max_parallelism=14
benchmark_name="benchmark_sampled_obfus3"
stats_dir="../evaluation/output/sampled-obfus3"

input_dir="../benchmarks/sampled/obfus3/basic-algorithms"
run_benchmark "${benchmark_name}" "${timeout}" "${max_parallelism}" "${input_dir}" "${stats_dir}"

input_dir="../benchmarks/sampled/obfus3/simple-hash-functions"
run_benchmark "${benchmark_name}" "${timeout}" "${max_parallelism}" "${input_dir}" "${stats_dir}"

input_dir="../benchmarks/sampled/obfus3/small-programs"
run_benchmark "${benchmark_name}" "${timeout}" "${max_parallelism}" "${input_dir}" "${stats_dir}"