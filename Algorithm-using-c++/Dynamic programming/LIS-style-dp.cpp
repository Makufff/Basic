#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0) , cin.tie(0) ;
    int n ; cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
    vector<int> dp(n, 1);
    int ans = 1 ;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (vec[j] < vec[i]) {
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
        ans = max(ans, dp[i]);
    }

    cout << ans << "\n";

    return 0;
}
