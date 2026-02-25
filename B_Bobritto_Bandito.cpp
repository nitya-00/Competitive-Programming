#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, l, r;
    cin >> n >> m >> l >> r;
    int l_e = 0;
    int r_e = 0;
    if(m<=r) {
        l_e=0;
        r_e=m;
    }
    else{
        l_e=r-m;
        r_e=r;
    }
    

    cout << l_e << " " << r_e << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
