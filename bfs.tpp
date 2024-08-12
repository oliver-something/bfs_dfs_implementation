//
// Created by Oliver on 8/12/24.
//

template<class T>
auto breadthFirstSearch(std::map<T, std::vector<T>> graph, T start) {
    auto queue = std::queue<T>();
    queue.emplace(start);
    auto visited = std::unordered_set<T>({start});

    while (!queue.empty()) {
        auto v = queue.front();
        queue.pop();
        std::cout << "Visiting : " << v <<'\n';

        for (auto & neighbor: graph[v]) {
            if (!visited.contains(neighbor)) {
                queue.push(neighbor);
                visited.insert(neighbor);
            }
        }
    }
    return visited;
}

template<class T>
auto depthFirstSearch(std::map<T, std::vector<T>> graph, T start) {
    auto stack = std::stack<T>();
    stack.push(start);
    auto visited = std::unordered_set<T>();
    while (!stack.empty()) {
        auto v = stack.top();
        stack.pop();

        if (!visited.contains(v)) {
            std::cout << "Visiting : " << v << '\n';
            visited.insert(v);

            for (const auto & neighbor: graph.at(v)) {
                if (!visited.contains(neighbor)) {
                    stack.push(neighbor);
                }
            }
        }
    }
    return visited;
}

template<class T>
std::ostream & operator<<(std::ostream & ostream, const std::unordered_set<T> & set) {
    ostream << "{";
    for (auto it = set.begin(); it != set.end(); ++it) {
        ostream << *it;
        if (std::next(it) != set.end()) {
            ostream << ", ";
        }
    }
    ostream << "}";
    return ostream;
}
