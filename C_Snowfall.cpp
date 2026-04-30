#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <string>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> six, two, three, ot;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x % 6 == 0) {
            six.push_back(x);
        } 
        else if (x % 2 == 0) {
            two.push_back(x);
        } 
        else if (x % 3 == 0) {
            three.push_back(x);
        } 
        else {
            ot.push_back(x);
        }
    }
    for (int x : six) cout << x << " ";
    for (int x : two) cout << x << " ";
    for (int x : ot) cout << x << " ";
    for (int x : three) cout << x << " ";

    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}