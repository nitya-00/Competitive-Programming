#include <bits/stdc++.h>
using namespace std;

int longestPalindrome(int a, int b) {
    int total = a + b;
    if (total == 0) return 0;
    if (a % 2 == 1 && b % 2 == 1) {
        return total - 1;
    }
    return total;
}

int solve(int x, int y, int z) {
    int res1 = longestPalindrome(y, z);
    int res2 = longestPalindrome(x, z); 
    int res3 = longestPalindrome(x, y); 
    return min({res1, res2, res3});
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int x, y, z;
        cin >> x >> y >> z;
        cout << solve(x, y, z) << endl;
    }
    return 0;
}
