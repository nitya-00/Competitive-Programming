#include<iostream>
using namespace std;

void solve() {
    long long n, s;
    cin >> n >> s;

    long long maxi= 5 * n;

    if(s <= maxi) {
        cout << 6 * n << "\n";
    }
    else {
        long long six = s - maxi;
        cout << 6 * n - six << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}