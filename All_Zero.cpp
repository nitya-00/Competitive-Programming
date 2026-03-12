#include <iostream>
using namespace std;

void solve() {
    int a, b , c;
    cin >> a >> b >> c;
        if(c % 3 != 0) {
                cout << "No\n";
                return;
        }

        int y = c    / 3;

        if(b == 2*a + y)
            cout << "Yes\n";
        else
            cout << "No\n";
    }


int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
