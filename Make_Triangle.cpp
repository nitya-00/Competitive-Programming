#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <string>
using namespace std;

void solve() {
    int x, y, z;
    cin >> x >> y >> z;
    vector<int> v = {x, y, z};
        sort(v.begin(), v.end());

        int a = v[0], b = v[1], c = v[2];
        cout << max(0, c - (a + b) + 1) << endl;
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