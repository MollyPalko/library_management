cmake_minimum_required(VERSION 3.10)
project(LibraryManagementSystem)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Set up include directory
include_directories(include)

# Collect all source files
file(GLOB_RECURSE SOURCES "src/*.cpp")
file(GLOB_RECURSE TESTS "test/*.cpp")

# Add test executables
foreach(test_file ${TESTS})
    # Get filename without extension
    get_filename_component(test_name ${test_file} NAME_WE)

    add_executable(${test_name} ${test_file} ${SOURCES})
endforeach()

