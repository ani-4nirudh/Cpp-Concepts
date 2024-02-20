cmake_minimum_required(VERSION 3.16.3)
project(share_header_files)
add_executable(share_header_files main.cpp print_some.cpp print_some.hpp)
target_compile_options(share_header_files PRIVATE -std=c++17)