#include <iostream>
using namespace std;

void solve() {
    int n;
        cin >> n;

        string s;
        cin >> s;

        int top = 0, current = 0;
        for (int i = 0; i < 2 * n; i++) {
            if (s[i % n] == '0') {
                current++;
            } 
            else {
                top = max(top, current);
                current = 0;
            }
        }

        top = max(top, current);

        cout << top << endl;
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        solve();
        //cout << '\n';
    }
    return 0;
}
