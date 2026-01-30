#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, l, r;
    cin >> n >> m >> l >> r;
    int l_prime = 0;
    int r_prime = 0;
    if(m<=r) {
        l_prime=0;
        r_prime=m;
    }
    else{
        l_prime=r-m;
        r_prime=r;
    }
    

    cout << l_prime << " " << r_prime << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
