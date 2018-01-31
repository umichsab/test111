cmake_minimum_required(VERSION 3.8)
project(jsonhpp_test)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp json.hpp)
add_executable(jsonhpp_test ${SOURCE_FILES})