#pragma once
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <unordered_set>
#include <iostream>

template<class T>
auto breadthFirstSearch(std::map<T, std::vector<T>> graph, T start);

template<class T>
auto depthFirstSearch(std::map<T, std::vector<T>> graph, T start);

template<class T>
std::ostream & operator<<(std::ostream & ostream, const std::unordered_set<T> & set);

#include "bfs.tpp"