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
    
    vector<int> arr(2 * n);
    for (int i = 0; i < 2 * n; i++) {
        cin >> arr[i];
    }
    
    int ans = 0;
    int len = 2 * n;
    
    for (int c = 0; c < len; c++) {
        vector<int> cnt(n, 0);
        cnt[arr[c]]++;
        
        int mex = 0;
        while (mex < n && cnt[mex] > 0) mex++;
        ans = max(ans, mex);
        
        int l = c - 1, r = c + 1;
        while (l >= 0 && r < len && arr[l] == arr[r]) {
            cnt[arr[l]]++;
            cnt[arr[r]]++;
            
            while (mex < n && cnt[mex] > 0) mex++;
            ans = max(ans, mex);
            
            l--;
            r++;
        }
    }
    
    for (int c = 0; c < len - 1; c++) {
        if (arr[c] == arr[c + 1]) {
            vector<int> cnt(n, 0);
            cnt[arr[c]]++;
            cnt[arr[c + 1]]++;
            
            int mex = 0;
            while (mex < n && cnt[mex] > 0) mex++;
            ans = max(ans, mex);
            
            int l = c - 1, r = c + 2;
            while (l >= 0 && r < len && arr[l] == arr[r]) {
                cnt[arr[l]]++;
                cnt[arr[r]]++;
                
                while (mex < n && cnt[mex] > 0) mex++;
                ans = max(ans, mex);
                
                l--;
                r++;
            }
        }
    }
    
    cout << ans << "\n";
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