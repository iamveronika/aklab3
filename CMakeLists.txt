cmake_minimum_required(VERSION 3.24.2)

project(calculator)

add_executable(calculator main.cpp calculator.h calculator.cpp)
add_library(calc STATIC calculator.h calculator.cpp)
