#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    int n , x;
    cin >> n ;
    int k = n / 2;

        for(int i = 0; i < n-1; i++) cout << '0';
        //for(int i = k; i < n; i++) 
        cout << '1';
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}