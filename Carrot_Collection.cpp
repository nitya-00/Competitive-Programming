#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <climits>
#include <string>
#include <numeric>
using namespace std;

void solve() {
    int N, l, r;
    cin >> N >> l >> r;
    // vector<int> a(n);
    // for (int i = 0; i < n; i++) {
    //     cin >> a[i];
    // }
    vector<int> A(N + 1);

        for (int i = 1; i <= N; i++) {
            cin >> A[i];
        }

        int lSum = 0;
        for (int i = 1; i < l; i++) {
            lSum += A[i];
        }

        int rSum = 0;
        for (int i = r + 1; i <= N; i++) {
            rSum += A[i];
        }

        cout << max(lSum, rSum) << '\n';

    
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}