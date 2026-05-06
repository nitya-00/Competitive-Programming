#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <string>
using namespace std;

void solve() {
    int n , x;
    cin >> n >> x;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }   
    sort(a.rbegin(), a.rend());
    for(int i=0;i<n;i++){
        if(a[i]%x==0){
            cout << a[i] << endl;
            return;
        }
        // else{
        //     cout << (a[i]/x)*x << endl;
        //     return;
        // }
    }
    cout << 0 << endl;
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