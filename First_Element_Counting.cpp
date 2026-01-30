#include <iostream>
using namespace std;

void solve() {
    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    sort(A.begin(), A.end());
    vector<long long> ans(N);

    for (int i = 0; i < N; i++) {
        if (i == 0 || i == N - 1) {
            ans[i] = -1;  // Infinite range for first and last
        } else {
            // Compute midpoints
            double L = (A[i - 1] + A[i]) / 2.0;
            double R = (A[i] + A[i + 1]) / 2.0;

            // Count integers strictly between L and R
            long long left = (long long)ceil(L + 1e-9);
            long long right = (long long)floor(R - 1e-9);

            ans[i] = max(0LL, right - left + 1);
        }
    }

    for (int i = 0; i < N; i++) cout << ans[i] << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}
