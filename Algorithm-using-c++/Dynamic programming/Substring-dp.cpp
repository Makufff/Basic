#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0) , cin.tie(0) ;
    string s, t ; cin >> s >> t;
    int m = s.length(), n = t.length();
    vector<vector<int>> dp(m+1, vector<int>(n+1));
    int ans = 0;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (s[i-1] == t[j-1]) {
                dp[i][j] = dp[i-1][j-1] + 1;
                ans = max(ans, dp[i][j]);
            } else {
                dp[i][j] = 0;
            }
        }
    }

    cout << ans << "\n";

    return 0;
}
