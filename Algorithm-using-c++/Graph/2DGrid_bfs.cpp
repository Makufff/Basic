#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100001];
bool vis[100001];
int dist[100001];

void bfs(int s) {
    queue<int> q;
    q.push(s);
    vis[s] = true;
    dist[s] = 0;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : adj[u]) {
            if (!vis[v]) {
                vis[v] = true;
                dist[v] = dist[u] + 1;
                q.push(v);
            }
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
    int s;
    cin >> s;
    bfs(s);
    for (int i = 1; i <= n; i++) {
        if (vis[i]) {
            cout << "Shortest distance from " << s << " to " << i << " is " << dist[i] << "\n";
        } else {
            cout << i << " is not reachable from " << s << "\n";
        }
    }
    return 0;
}