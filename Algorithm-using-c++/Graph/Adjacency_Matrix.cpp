#include<bits/stdc++.h>
using namespace std;

int adj[1001][1001];

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0) , cin.tie(0) ;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    for (int u = 1; u <= n; u++) {
        cout << u << " : ";
        for (int v = 1; v <= n; v++) {
            if (adj[u][v]) {
                cout << v << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
