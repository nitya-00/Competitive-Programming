#include <iostream>
#include <cmath>
using namespace std;

void solve() {

    long long n, x1, x2, k;
    cin >> n >> x1 >> x2 >> k;

    long long d = llabs(x1 - x2);

    long long dist = min(d, n - d);

    cout << dist + k << '\n';
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