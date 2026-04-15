#include <iostream>
#include <vector>
#include <set>
using namespace std;

void solve() {
    int n;
    long long m;
    cin >> n >> m;

    vector<long long> a(n);
    for (auto &x : a) cin >> x;

    set<long long> f;

    for (int i = 0; i < n; i++) {
        long long bad = (a[i] + i + 1) % m; 
        long long k = (m - bad) % m;
        f.insert(k);
    }

    if ((long long)f.size() == m) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
}