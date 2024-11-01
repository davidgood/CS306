cmake_minimum_required(VERSION 3.29)
project(CS306 C)

set(CMAKE_C_STANDARD 17)

add_executable(CS306 main.c
        operators.h
        operators.c
        string_demos.c
        string_demos.h)
