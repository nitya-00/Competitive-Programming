//
#include<iostream>
#include<vector>
using namespace std;

int root(int x) {
    while (x % 2 == 0)
        x /= 2;
    return x;
}

void solve() {
    int n;
    cin >> n;

    vector<int> a(n+1);

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++) {

        int pos = a[i];

        if (root(i) != root(pos)) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
