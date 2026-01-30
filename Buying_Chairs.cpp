#include <iostream>
using namespace std;

void solve() {
   int a, b , c;
   cin>>a>>b>>c;
   int maxStyle ;
   int wood = min(a, c);
        maxStyle = wood * 2 + (c - wood);
    cout<<maxStyle;
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << '\n';
    }
    return 0;
}
