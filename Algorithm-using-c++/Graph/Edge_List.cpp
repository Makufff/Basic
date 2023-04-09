#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> edges;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0) , cin.tie(0) ;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
        edges.push_back({v, u});
    }
    for (auto e : edges) {
        cout << e.first << " " << e.second << "\n";
    }
    return 0;
}
