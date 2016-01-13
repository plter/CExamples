cmake_minimum_required(VERSION 3.3)
project(DynamicArray)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c Array.c Array.h)
add_executable(DynamicArray ${SOURCE_FILES})