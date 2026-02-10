#include <iostream>
using namespace std;

void solve() {
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i]; 
    }
    long long S = 0;
        for (int i = 0; i < n; i++) {
            S += (a[i] / x) * y;
        }

        long long ans = 0;
        for (int i = 0; i < n; i++) {
            // gain = a[i] - (a[i] / x) * y
            long long cur = S + a[i] - (a[i] / x) * y;
            ans = max(ans, cur);
        }

        cout << ans << '\n';

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
