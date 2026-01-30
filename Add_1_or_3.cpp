#include <iostream>
using namespace std;

void solve() {
    long long n, m;
    cin >> n >> m;
    
    if (3 * n < m) {
        cout << "NO\n";
        return;
    }
    
    long long val = 3 * n - m;
    
    if (val % 2 != 0) {
        cout << "NO\n";
        return;
    }
    
    long long x = val / 2;
    
    if (x >= 0 && x <= n) {
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
    
    return 0;
}