#include "bfs.hpp"

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