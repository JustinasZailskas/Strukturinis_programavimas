cmake_minimum_required(VERSION 3.26)
project(struct_first_example)

set(CMAKE_CXX_STANDARD 17)

add_executable(struct_first_example main.cpp
        struct_second_example.cpp)
