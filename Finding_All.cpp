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
        vector<int> nums(n);
        for(int i = 0 ;i < n ;i++) cin >> nums[i];
        int ans = 0 ;
        
        int row =n-1;
        for(int i = 0 ;i < n ;i++){
            if ((i&row) == i) ans^= nums[i];
        }
        
        cout << ans << endl;

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