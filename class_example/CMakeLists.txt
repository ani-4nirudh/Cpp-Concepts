cmake_minimum_required(VERSION 3.16.3)
project(class_example)
add_executable(class_example main.cpp Pen.cpp Pen.hpp)
target_compile_options(class_example PRIVATE -std=c++17)