cmake_minimum_required(VERSION 3.16.3)
project(inheritance)
add_executable(inheritance main.cpp Toyota.cpp Toyota.hpp Car.cpp Car.hpp)
target_compile_options(inheritance PRIVATE -std=c++17)