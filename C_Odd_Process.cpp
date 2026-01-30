#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        sort(a.begin(), a.end(), greater<long long>()); // biggest first

        // prefix sums
        vector<long long> pref(n + 1, 0);
        for (int i = 1; i <= n; ++i)
            pref[i] = pref[i - 1] + a[i - 1];

        // smallest odd/even inside first i (1..n)
        vector<long long> smallOdd(n + 1, -1), smallEven(n + 1, -1);
        long long so = -1, se = -1;
        for (int i = 1; i <= n; ++i) {
            long long x = a[i - 1];
            if (x % 2) {
                if (so == -1) so = x;
                else so = min(so, x);
            } else {
                if (se == -1) se = x;
                else se = min(se, x);
            }
            smallOdd[i] = so;
            smallEven[i] = se;
        }

        // largest odd/even in suffix starting at i (i..n)
        vector<long long> largeOdd(n + 2, -1), largeEven(n + 2, -1);
        long long lo = -1, le = -1;
        for (int i = n; i >= 1; --i) {
            long long x = a[i - 1];
            if (x % 2) lo = max(lo, x);
            else       le = max(le, x);
            largeOdd[i] = lo;
            largeEven[i] = le;
        }

        // for each k compute answer
        for (int k = 1; k <= n; ++k) {
            long long S = pref[k];
            if (S % 2 == 1) {
                cout << S;
            } else {
                long long best = LLONG_MIN;
                // swap smallest odd inside prefix with largest even outside prefix
                if (smallOdd[k] != -1 && largeEven[k + 1] != -1) {
                    best = max(best, S - smallOdd[k] + largeEven[k + 1]);
                }
                // swap smallest even inside prefix with largest odd outside prefix
                if (smallEven[k] != -1 && largeOdd[k + 1] != -1) {
                    best = max(best, S - smallEven[k] + largeOdd[k + 1]);
                }

                if (best != LLONG_MIN && best % 2 == 1) cout << best;
                else cout << 0;
            }
            if (k < n) cout << ' ';
        }
        cout << '\n';
    }

    return 0;
}