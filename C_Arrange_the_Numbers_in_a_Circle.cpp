#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {

    int n;
    cin >> n;

    vector<long long> c(n);

    long long ans = 0;

    for(int i = 0; i < n; i++) {

        cin >> c[i];

        if(c[i] >= 3) {
            ans = max(ans, c[i]);
        }
    }

    for(int i = 0; i + 1 < n; i++) {

        ans = max(ans, 2LL * min(c[i], c[i + 1]));
    }

    cout << ans << '\n';
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int multTestQ;
    cin >> multTestQ;

    while(multTestQ--) {
        solve();
    }

    return 0;
}