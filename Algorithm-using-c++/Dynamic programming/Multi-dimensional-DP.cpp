#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
    ios_base::sync_with_stdio(0) , cin.tie(0) ;
    int m, n; cin >> m >> n;
    vector<vector<int>> matrix(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    vector<vector<int>> dp(m, vector<int>(n));
    for (int j = 0; j < n; j++) {
        dp[0][j] = matrix[0][j];
    }

    for (int i = 1; i < m; i++) {
        for (int j = 0; j < n; j++) {
            dp[i][j] = dp[i-1][j];
            if (j > 0) dp[i][j] = max(dp[i][j], dp[i-1][j-1]);
            if (j < n-1) dp[i][j] = max(dp[i][j], dp[i-1][j+1]);
            dp[i][j] += matrix[i][j];
        }
    }

    int ans = dp[m-1][0];
    for (int j = 1; j < n; j++) {
        ans = max(ans, dp[m-1][j]);
    }
    cout << ans << "\n";

    return 0;
}
