#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (is_sorted(a.begin(), a.end())) {
        return a;
    }

    vector<int> b = a;
    sort(b.begin(), b.end());

    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            for (int j = 0; j < n; j++) {
                if ((a[j] % 2) != (b[i] % 2)) {
                    swap(a[i], a[j]);
                }
            }
        }
    }

    return a;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> ans = solve();
        for (int x : ans) cout << x << " ";
        cout << endl;
    }
    return 0;
}
