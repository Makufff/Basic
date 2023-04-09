#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100001];
bool vis[100001];

void dfs(int u) {
    vis[u] = true;
    for (int v : adj[u]) {
        if (!vis[v]) {
            dfs(v);
        }
    }
}

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
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            cnt++;
            dfs(i);
        }
    }
    cout << "Number of Components: " << cnt << "\n";

    memset(vis, false, sizeof(vis));
    dfs(1);
    for (int i = 1; i <= n; i++) {
        if (vis[i]) {
            cout << i << " is reachable from 1\n";
        } else {
            cout << i << " is NOT reachable from 1\n";
        }
    }
    return 0;
}
