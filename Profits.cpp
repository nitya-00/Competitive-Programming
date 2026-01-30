#include <iostream>
using namespace std;

void solve() {
    long long N, X;
    cin >> N >> X;
    if (N <= X) {
        cout << 0;
        return;
    }
    long long m = N - X;
    long long p = m * (m + 1) / 2;
    cout << p;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << '\n';
    }
    return 0;
}
