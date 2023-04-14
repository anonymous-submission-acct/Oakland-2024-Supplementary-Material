cmake_minimum_required(VERSION 3.19)

# Set the project name
project(Evaluation)

# Read environment variables
set(TIMEOUT "$ENV{timeout}" CACHE STRING "Timeout in seconds")
set(INPUT_DIR "$ENV{input_dir}" CACHE STRING "Input directory path")
set(STATS_DIR "$ENV{stats_dir}" CACHE STRING "Stats directory path")
set(CHISEL_ARGS "$ENV{chisel_args}" CACHE STRING "Chisel arguments")

set(ROOT_DIR "${CMAKE_CURRENT_SOURCE_DIR}/..")

add_custom_target(benchmark)

file(GLOB input_files "${INPUT_DIR}/*.c")
foreach(input_file ${input_files})
  # Get the file name without the directory path
  get_filename_component(input_file_name ${input_file} NAME)
  get_filename_component(input_file_name_without_ext ${input_file_name} NAME_WE)

  # Define the command to run
  set(output_file "${STATS_DIR}/${input_file_name_without_ext}.json")

  # Add the command to the build target
  add_custom_command(
    COMMAND ./timeout_runner --save_results ${output_file} --timeout=${TIMEOUT} ${CHISEL_ARGS} ${input_file}
    DEPENDS ${input_file}
    OUTPUT ${output_file}
    WORKING_DIRECTORY ${ROOT_DIR}
  )

  add_custom_target(
    ${input_file_name}
    DEPENDS ${output_file}
  )

  add_dependencies(benchmark ${input_file_name})
endforeach()