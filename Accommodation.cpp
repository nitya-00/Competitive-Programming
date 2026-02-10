#include <iostream>
using namespace std;

void solve() {
    long long B, G, X, Y, N;
    cin >> B >> G >> X >> Y >> N;
    if (X + Y > N) {
        cout << -1 << '\n';
        return;
    }

    long long Rmin = (B + G + N - 1) / N;  
    long long Rmax = min(B / X, G / Y);

    if (Rmin > Rmax)
        cout << -1 << '\n';
    else
        cout << Rmin << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
