cmake_minimum_required(VERSION 3.6)
project(Saper)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Level.cpp Level.h)
add_executable(Saper ${SOURCE_FILES})