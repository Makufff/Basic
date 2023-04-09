#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0) , cin.tie(0) ;
    int n ; cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];

    vector<int> dp(n);
    dp[0] = vec[0];

    for (int i = 1; i < n; i++) {
        dp[i] = max(vec[i], dp[i-1] + vec[i]);
    }

    int max_sum = dp[0];
    for (int i = 1; i < n; i++) {
        max_sum = max(max_sum, dp[i]);
    }

    cout << "Maximum sum: " << max_sum << "\n";

    return 0;
}
