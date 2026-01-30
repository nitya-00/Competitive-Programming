#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, p;
    cin >> n >> p;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];

    vector<pair<int, int>> residents;
    for (int i = 0; i < n; ++i) {
        residents.emplace_back(b[i], a[i]);
    }
    sort(residents.begin(), residents.end());

    long long total_cost = 0;
    int informed = 0;
    // The first resident to inform is Pak Chanek himself, but since he's not in the list,
    // we start by directly informing at least one resident.
    // The minimal cost is to inform 1 resident directly, then use sharing.
    total_cost += p;
    informed = 1;

    for (auto [bi, ai] : residents) {
        if (bi >= p) break;
        int can_share = min(ai, n - informed);
        if (can_share <= 0) break;
        total_cost += (long long)bi * can_share;
        informed += can_share;
        if (informed >= n) break;
    }

    if (informed < n) {
        total_cost += (long long)p * (n - informed);
    }

    cout << total_cost << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}