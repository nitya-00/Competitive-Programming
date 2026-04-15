#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int &x : a) cin >> x;

    sort(a.begin(), a.end());
map<int, int> cnt;
        for (int x : a) cnt[x]++;
        
        bool hasDup = false;
        for (auto& [val, freq] : cnt) {
            if (freq > 1) { hasDup = true; break; }
        }
        
        if (hasDup) {
            cout << -1 << "\n";
        } else {
            sort(a.begin(), a.end(), greater<int>());
            for (int i = 0; i < n; i++) {
                cout << a[i] << " \n"[i == n - 1];
            }
        }
    }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
}