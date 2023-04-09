#include <bits/stdc++.h>
#define INF 1e9
using namespace std;

void printPath(int parent[], int dest) {
    if (parent[dest] == -1) {
        return;
    }
    printPath(parent, parent[dest]);
    cout << parent[dest] << " -> " << dest << "\n";
}

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(0) , cin.tie(0) ;
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> edges[m];
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        edges[u].push_back({v, w});
    }
    vector<int> dist(n, INF);
    int parent[n];
    memset(parent, -1, sizeof(parent));
    int src, dest;
    cin >> src >> dest;
    dist[src] = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < m; j++) {
            int u = edges[j].first;
            int v = edges[j].second;
            int w = edges[j].third;
            if (dist[u] != INF && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                parent[v] = u;
            }
        }
    }
    cout << "Shortest distance from " << src << " to " << dest << ": " << dist[dest] << "\n";
    cout << "Shortest path: " << "\n";
    printPath(parent, dest);
    return 0;
}
