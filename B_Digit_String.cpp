#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void solve() {

    string s;
    cin >> s;

    int n = s.size();

    vector<int> twos(n + 1, 0);
    vector<int> odds(n + 1, 0);
    for(int i = 0; i < n; i++) {

        twos[i + 1] = twos[i];

        if(s[i] == '2') {
            twos[i + 1]++;
        }
    }
    for(int i = n - 1; i >= 0; i--) {

        odds[i] = odds[i + 1];

        if(s[i] == '1' || s[i] == '3') {
            odds[i]++;
        }
    }

    int maxi = 0;

    for(int i = 0; i <= n; i++) {

        maxi = max(maxi, twos[i] + odds[i]);
    }

    cout << n - maxi << '\n';
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