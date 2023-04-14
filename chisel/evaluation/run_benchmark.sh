function run_benchmark() {
    local benchmark_name=$1
    local timeout=$2
    local max_parallelism=$3
    local input_dir=$4
    local stats_dir=$5
    local chisel_args=$6

    mkdir -p "${stats_dir}" && mkdir -p "${input_dir}"

    # Set environment variables
    export timeout="${timeout}"
    export input_dir=`cd "${input_dir}"; pwd`
    export stats_dir=`cd "${stats_dir}"; pwd`
    export chisel_args="${chisel_args}"

    # Create a directory for the benchmark
    mkdir -p "${benchmark_name}" && cd "${benchmark_name}"

    echo "Running benchmark ${benchmark_name} with timeout ${timeout} seconds"
    echo "parallelism ${max_parallelism}, input directory ${input_dir}, statistics directory ${stats_dir}"
    echo "chisel arguments ${chisel_args}"
    echo "max timeout variable ${proc_timeout}"

    # Run CMake to generate the Makefile
    cmake .. || {
        # If there's an error, go back and remove the directory
        cd ..
        rm -rf "${benchmark_name}"
        exit 1
    }

    # Run make with the specified parallelism
    make -j"${max_parallelism}" -k benchmark

    # Return to the parent directory
    cd .. && rm -rf "${benchmark_name}"
}

