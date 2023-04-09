#include <iostream>
#include <vector>
#include <limits>

using namespace std;

void BellmanFord(vector<vector<int>>& graph, int source) {
    int n = graph.size();
    vector<int> dist(n, numeric_limits<int>::max());
    dist[source] = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int u = 0; u < n; u++) {
            for (int v = 0; v < n; v++) {
                if (graph[u][v] != 0 && dist[u] != numeric_limits<int>::max() && dist[u] + graph[u][v] < dist[v]) {
                    dist[v] = dist[u] + graph[u][v];
                }
            }
        }
    }
    for (int u = 0; u < n; u++) {
        for (int v = 0; v < n; v++) {
            if (graph[u][v] != 0 && dist[u] != numeric_limits<int>::max() && dist[u] + graph[u][v] < dist[v]) {
                cout << "Negative cycle detected!" << "\n";
                return;
            }
        }
    }
    cout << "Shortest paths from source " << source << ":" << "\n";
    for (int i = 0; i < n; i++) {
        cout << "Vertex " << i << ": " << dist[i] << "\n";
    }
}

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(0) , cin.tie(0) ;
    vector<vector<int>> graph = {{0, 4, 0, 0, 0, 0, 0, 8, 0},
                                 {4, 0, 8, 0, 0, 0, 0, 11, 0},
                                 {0, 8, 0, 7, 0, 4, 0, 0, 2},
                                 {0, 0, 7, 0, 9, 14, 0, 0, 0},
                                 {0, 0, 0, 9, 0, 10, 0, 0, 0},
                                 {0, 0, 4, 14, 10, 0, 2, 0, 0},
                                 {0, 0, 0, 0, 0, 2, 0, 1, 6},
                                 {8, 11, 0, 0, 0, 0, 1, 0, 7},
                                 {0, 0, 2, 0, 0, 0, 6, 7, 0}};
    BellmanFord(graph, 0);
    return 0;
}
