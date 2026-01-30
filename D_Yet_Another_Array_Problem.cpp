#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;
using int64 = long long;

int64 gcdll(int64 a, int64 b) {
    while (b) {
        int64 t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int64 solve() {
    int n;
    cin >> n;
    vector<int64> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int64 g = a[0];
    for (int i = 1; i < n; ++i)
        g = gcdll(g, a[i]);

    int64 ans = -1;
    for (int64 x : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31}) {
        if (gcdll(g, x) == 1) {
            ans = x;
            break;
        }
    }
    if (ans == -1) {
        for (int64 x = 2; x <= 1000; ++x) {
            if (gcdll(g, x) == 1) {
                ans = x;
                break;
            }
        }
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
    return 0;
}
