cmake_minimum_required(VERSION 3.3)
project(ConsoleProgressBar)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp ProgressBar.cpp ProgressBar.h ProgressBar.cpp ProgressBar.h)
add_executable(ConsoleProgressBar ${SOURCE_FILES})