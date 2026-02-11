#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n);
    long long sum = 0;
    bool equal = true;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        if (i > 0 && a[i] != a[0])
            equal = false;
    }

    if (equal) {
        cout << "YES\n";
        return;
    }

    if (n % 2 == 0 && sum == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
