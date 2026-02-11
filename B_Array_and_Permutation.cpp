#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> p(n), a(n);
    for(int i = 0; i < n; i++)
        cin >> p[i];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> pos(n + 1);
    for(int i = 0; i < n; i++)
        pos[p[i]] = i;

    int last = -1;

    for(int i = 0; i < n; i++) {
        if(i > 0 && a[i] == a[i-1])
            continue;

        if(pos[a[i]] <= last) {
            cout << "NO\n";
            return;
        }

        last = pos[a[i]];
    }

    cout << "YES\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
