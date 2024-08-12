cmake_minimum_required(VERSION 3.28)
project(bfs_dfs_impl)

set(CMAKE_CXX_STANDARD 23)

add_executable(bfs_dfs_impl main.cpp
        bfs.hpp
        bfs.tpp)
