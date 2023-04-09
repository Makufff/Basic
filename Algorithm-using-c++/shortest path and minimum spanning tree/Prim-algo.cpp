#include <iostream>
#include <cstring>
using namespace std;

const int INF = 1e9;
const int MAXN = 100;

int adj[MAXN][MAXN], n;

int prim() {
  int dist[MAXN], visited[MAXN];
  memset(dist, INF, sizeof(dist));
  memset(visited, 0, sizeof(visited));
  dist[0] = 0;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int u = -1;
    for (int j = 0; j < n; j++) {
      if (!visited[j] && (u == -1 || dist[j] < dist[u])) {
        u = j;
      }
    }
    if (dist[u] == INF) {
      return -1;
    }
    visited[u] = 1;
    ans += dist[u];
    for (int v = 0; v < n; v++) {
      if (adj[u][v] < dist[v]) {
        dist[v] = adj[u][v];
      }
    }
  }
  return ans;
}

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(0) , cin.tie(0) ;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> adj[i][j];
    }
  }
  int mst_cost = prim();
  cout << "Minimum Spanning Tree cost: " << mst_cost << "\n";
  return 0;
}
