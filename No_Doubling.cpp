#include <iostream>
using namespace std;

void solve() {
   int n;
   cin>>n;
   vector<int>a(n);
   for(int i=0;i<n;i++)cin>>a[i];
   int cnt=0;
   vector<int> noZero, zero;
    
    for (int x : a) {
        if (x == 0) {
            zero.push_back(x);
        } else {
            noZero.push_back(x);
        }
    }
   
    for (int x : noZero) {
        cout << x << " ";
    }
    for (int x : zero) {
        cout << x << " ";
    }
   
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
