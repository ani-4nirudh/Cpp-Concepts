cmake_minimum_required(VERSION 3.16.3)
project(mileage)
add_executable(mileage main.cpp Car.hpp Car.cpp Fuel.hpp Fuel.cpp)
target_compile_options(mileage PRIVATE -std=c++17)