#include <iostream>
#include <vector>
#include <climits>
using namespace std;

using int64 = long long;

long long a;
long long ans;
vector<int> d;

void dfs(long long cur, int len, int targetLen) {

    if (len == targetLen) {
        ans = min(ans, llabs(a - cur));
        return;
    }

    for (int digit : d) {
        if (len == 0 && targetLen > 1 && digit == 0)
            continue;

        dfs(cur * 10 + digit, len + 1, targetLen);
    }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> a >> n;

        d.resize(n);

        for (int i = 0; i < n; i++)
            cin >> d[i];

        ans = LLONG_MAX;
        for (int len = 1; len <= 18; len++) {
            dfs(0, 0, len);
        }

        cout << ans << '\n';
    }

    return 0;
}