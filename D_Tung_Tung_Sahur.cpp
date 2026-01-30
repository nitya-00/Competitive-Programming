#include <bits/stdc++.h>
using namespace std;

void solve() {
    string p, s;
    cin >> p >> s;

    int i = 0, j = 0; 
    while (i < p.size() && j < s.size()) {
        if (p[i] != s[j]) {
            cout << "NO\n";
            return;
        }
        char curr = p[i];
        int cnt = 0;
        while (j < s.size() && s[j] == curr && cnt < 2) {
            cnt++;
            j++;
        }
        i++;
    }

    if (i == p.size() && j == s.size()) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
