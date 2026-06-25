


#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <climits>
#include <string>
#include <numeric>
#include <map>
using namespace std;

void solve() {
    int n;
    cin >> n;
        map<int, int> freq;
        map<int, long long> cost;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            int steps = 0;

            while (true) {
                freq[x]++;
                cost[x] += steps;

                if (x == 0) break;

                x /= 2;
                steps++;
            }
        }

        long long ans = LLONG_MAX;

        for (auto &[val, cnt] : freq) {
            if (cnt == n) {
                ans = min(ans, cost[val]);
            }
        }

        cout << ans<< '\n';
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