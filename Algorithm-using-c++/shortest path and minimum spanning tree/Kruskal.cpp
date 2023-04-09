#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int u, v, w;
};

bool compare(Edge e1, Edge e2) {
    return e1.w < e2.w;
}

int find(int x, int parent[]) {
    if (x != parent[x]) {
        parent[x] = find(parent[x], parent);
    }
    return parent[x];
}

void merge(int x, int y, int parent[], int rank[]) {
    int px = find(x, parent), py = find(y, parent);
    if (rank[px] < rank[py]) {
        parent[px] = py;
    } else if (rank[px] > rank[py]) {
        parent[py] = px;
    } else {
        parent[py] = px;
        rank[px]++;
    }
}

void kruskal(int n, Edge edges[], int m) {
    sort(edges, edges + m, compare);
    int parent[n], rank[n];
    for (int i = 0; i < n; i++) {
        parent[i] = i;
        rank[i] = 0;
    }
    vector<pair<int, int>> mst;
    for (int i = 0; i < m; i++) {
        Edge e = edges[i];
        int u = e.u, v = e.v, w = e.w;
        if (find(u, parent) != find(v, parent)) {
            merge(u, v, parent, rank);
            mst.push_back({u, v});
        }
    }
    for (auto edge : mst) {
        cout << edge.first << " - " << edge.second << "\n";
    }
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0) , cin.tie(0) ;
    int n, m;
    cin >> n >> m;
    Edge edges[m];
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        edges[i] = {u, v, w};
    }
    kruskal(n, edges, m);
    return 0;
}
