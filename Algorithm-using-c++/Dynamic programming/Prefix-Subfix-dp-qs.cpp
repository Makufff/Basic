#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[]){
    int n; cin >> n;
    vector<int> array(n);
    for (int i = 0; i < n; i++) cin >> array[i];
    vector<int> prefix(n+1);
    vector<int> suffix(n+2);
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i-1] + array[i-1];
        suffix[n-i+1] = suffix[n-i+2] + array[n-i];
    }

    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        // cout << prefix[r+1] - prefix[l] << "\n";
        // cout << suffix[l+1] - suffix[r+2] << "\n";
    }

    return 0;
}
