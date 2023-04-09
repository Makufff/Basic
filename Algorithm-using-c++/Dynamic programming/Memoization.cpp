#include <iostream>
#include <vector>

using namespace std;

vector<int> memo;

int fibonacci(int n) {
    // Base cases
    if (n == 0 || n == 1) return 1;
    // Mem cases
    if (memo[n] != -1) return memo[n];

    memo[n] = fibonacci(n - 1) + fibonacci(n - 2);

    return memo[n];
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(0) , cin.tie(0) ;
    int n = 10;
    memo = vector<int>(n + 1, -1);
    cout << " Fibonacci " << n << " is: " << fibonacci(n) << "\n";
    return 0;
}
