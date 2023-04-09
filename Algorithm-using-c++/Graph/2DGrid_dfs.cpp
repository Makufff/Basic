#include<bits/stdc++.h>
using namespace std;

const int N = 1000;
const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};
int n, m;
char grid[N][N];
bool vis[N][N];

bool is_valid(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m && grid[x][y] != '#' && !vis[x][y];
}

void dfs(int x, int y) {
    vis[x][y] = true;
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (is_valid(nx, ny)) {
            dfs(nx, ny);
        }
    }
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0) , cin.tie(0) ;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] != '#' && !vis[i][j]) {
                cnt++;
                dfs(i, j);
            }
        }
    }
    cout << "Number of connected components: " << cnt << "\n";
    return 0;
}
