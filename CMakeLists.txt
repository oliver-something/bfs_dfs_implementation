cmake_minimum_required(VERSION 3.28)
project(third_project)

set(CMAKE_CXX_STANDARD 23)

add_executable(third_project main.cpp
        bfs.hpp)
