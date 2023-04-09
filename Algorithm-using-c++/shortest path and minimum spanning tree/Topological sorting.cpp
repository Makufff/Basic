#include <bits/stdc++.h>
using namespace std;

void topoSortUtil(int v, vector<int> adj[], stack<int>& st, bool visited[]) {
    visited[v] = true;
    for (int i = 0; i < adj[v].size(); i++) {
        int u = adj[v][i];
        if (!visited[u]) {
            topoSortUtil(u, adj, st, visited);
        }
    }
    st.push(v);
}

void topoSort(int n, vector<int> adj[]) {
    stack<int> st;
    bool visited[n];
    memset(visited, false, sizeof(visited));
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            topoSortUtil(i, adj, st, visited);
        }
    }
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << "\n";
}

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(0) , cin.tie(0) ;
    int n, m;
    cin >> n >> m;
    vector<int> adj[n];
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    topoSort(n, adj);
    return 0;
}
