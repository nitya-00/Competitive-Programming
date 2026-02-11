#include <iostream>
using namespace std;

void solve() {
    int n, x, y;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    vector<long long> ratio(n);
   long long total = 0;
    long long loss = 1e18;

    for (int i = 0; i < n; i++) {
        total += a[i];
        loss = min(loss, (long long)(a[i] - b[i]));
    }

    cout << total - loss << '\n';
}
int main() {

    int t;
    cin >> t;
    while (t--) {
        solve();
        //cout << '\n';
    }
    return 0;
}
