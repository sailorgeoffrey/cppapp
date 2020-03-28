cmake_minimum_required(VERSION 3.15)
project(cppapp)

set(CMAKE_CXX_STANDARD 20)

add_executable(cppapp main.cpp fibonacci.cpp fibonacci.h)