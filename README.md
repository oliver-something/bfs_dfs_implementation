# Implementation of simple BFS and DFS in c++ using STL

There are also tests written in main.cpp to show how to use the program.

```c++
int main() {
    std::map<char, std::vector<char>> graph {
            {'A', {'B', 'C'}},
            {'B', {'A', 'D', 'E'}},
            {'C', {'A', 'F'}},
            {'D', {'B'}},
            {'E', {'B', 'F'}},
            {'F', {'C', 'E'}}
    };

    auto visited_nodes_bfs = breadthFirstSearch(graph, 'A');
    std::cout << "Visited nodes : " << visited_nodes_bfs << '\n';

    auto visited_nodes_dfs = depthFirstSearch(graph, 'A');
    std::cout << "Visited nodes : " << visited_nodes_dfs << '\n';
}
```

### To Build the application : 

``` shell
cmake -G "Unix Makefiles" -B cmake-build-debug
cd cmake-build-debug
make
./bfs_dfs_impl
```