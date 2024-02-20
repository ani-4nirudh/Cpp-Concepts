cmake_minimum_required(VERSION 3.16.3)
project(split_files)
add_executable(split_files main.cpp function_file.cpp)
target_compile_options(split_files PRIVATE -std=c++17)