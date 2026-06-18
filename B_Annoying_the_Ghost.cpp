#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <climits>
#include <string>
#include <numeric>
#include <algorithm>
#include <set>
using namespace std;


struct Fenwick {
    int n;
    vector<long long> bit;

    Fenwick(int n) : n(n), bit(n + 1, 0) {}

    void add(int idx, long long val) {
        for (; idx <= n; idx += idx & -idx)
            bit[idx] += val;
    }

    long long sum(int idx) {
        long long res = 0;
        for (; idx > 0; idx -= idx & -idx)
            res += bit[idx];
        return res;
    }
};

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n + 1), b(n + 1);

    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];

    vector<vector<int>> start(n + 2);

    for (int i = 1; i <= n; i++) {
        int pos = lower_bound(b.begin() + 1, b.begin() + n + 1, a[i]) - b.begin();

        if (pos > n) {
            cout << -1 << '\n';
            return;
        }

        start[pos].push_back(i);
    }

    set<int> available;
    vector<int> ord;
    ord.reserve(n);

    for (int j = 1; j <= n; j++) {

        for (int idx : start[j])
            available.insert(idx);

        if (available.empty()) {
            cout << -1 << '\n';
            return;
        }

        int idx = *available.begin();
        available.erase(available.begin());

        ord.push_back(idx);
    }

    Fenwick fw(n);

    long long ans = 0;

    for (int i = n - 1; i >= 0; i--) {
        ans += fw.sum(ord[i] - 1);
        fw.add(ord[i], 1);
    }

    cout << ans << '\n';
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