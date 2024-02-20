cmake_minimum_required(VERSION 3.16.3)
project(classes_pointers)
add_executable(classes_pointers main.cpp Car.cpp Car.hpp)
target_compile_options(classes_pointers PRIVATE -std=c++17)