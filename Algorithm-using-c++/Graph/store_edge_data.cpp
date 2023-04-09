#include<bits/stdc++.h>
using namespace std;

struct Edge {
    int u, v, w;
};

vector<Edge> edges;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0) , cin.tie(0) ;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back({u, v, w});
        edges.push_back({v, u, w});
    }
    sort(edges.begin(), edges.end(), [](Edge a, Edge b) {
        return a.w < b.w;
    });
    for (auto e : edges) {
        cout << e.u << " " << e.v << " " << e.w << "\n";
    }
    return 0;
}
