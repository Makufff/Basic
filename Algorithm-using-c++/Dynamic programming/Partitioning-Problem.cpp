#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool partitionPossible(vector<int>& nums, int n) {
    int sum = 0;
    for (int num : nums) sum += num;
    if (sum % n != 0) return false;
    int targetSum = sum / n;
    vector<vector<bool>> dp(n+1, vector<bool>(targetSum+1));
    dp[0][0] = true;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= targetSum; j++) {
            dp[i][j] = dp[i-1][j];
            if (j >= nums[i-1]) {
                dp[i][j] = dp[i][j] || dp[i-1][j-nums[i-1]];
            }
        }
    }
    return dp[n][targetSum];
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0) , cin.tie(0) ;
    vector<int> nums = {1, 5, 11, 5};
    int n = nums.size();
    if (partitionPossible(nums, n)) {
        cout << "Possible to partition" << "\n";
    } else {
        cout << "Not possible to partition" << "\n";
    }
    return 0;
}
