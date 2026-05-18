#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <climits>
#include <string>
using namespace std;

void solve() {

    long long n , a , b;
    cin >> n >> a >> b; 

    cout << min(((n + 2) / 3) * b,
            min(n * a,
                (n % 3) * a + (n / 3) * b))
     << '\n';
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}