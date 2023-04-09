#include <iostream>
#include <cstring>
using namespace std;

const int INF = 1e9;
const int MAXN = 100;

int dist[MAXN][MAXN], n;

void floyd_warshall() {
  for (int k = 0; k < n; k++) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
      }
    }
  }
}

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(0) , cin.tie(0) ;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> dist[i][j];
      if (dist[i][j] == -1) {
        dist[i][j] = INF;
      }
    }
  }
  floyd_warshall();
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (dist[i][j] == INF) {
        cout << "INF ";
      } else {
        cout << dist[i][j] << " ";
      }
    }
    cout << "\n";
  }
  return 0;
}
