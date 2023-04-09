#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100001];

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0) , cin.tie(0) ;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int u = 1; u <= n; u++) {
        cout << u << " : ";
        for (int v : adj[u]) {
            cout << v << " ";
        }
        cout << "\n";
    }
    return 0;
}
