#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <climits>
#include <string>
#include <numeric>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    // vector<int> a(n);
    // for (int i = 0; i < n; i++) {
    //     cin >> a[i];
    // }
    int ball=1;
    for(int i=1;i<n;i++){
        if(ball+k<=n){
            ball=ball+k;
        }
    }
    cout<<ball<<endl;

    
    
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