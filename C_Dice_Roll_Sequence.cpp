#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<climits>
#include<set>
#include<map>
#include<stack>

using namespace std;

int dp(int i, int prev, vector<int>& a, vector<vector<int>>& memo) {

    if (i == a.size())
        return 0;

    if (memo[i][prev] != -1)
        return memo[i][prev];

    int ans = 1e9;

    for (int v = 1; v <= 6; v++) {

        if (prev == 0 || (v != prev && v != 7 - prev)) {

            int cost = (a[i] == v ? 0 : 1);

            ans = min(ans, cost + dp(i + 1, v, a, memo));
        }
    }

    return memo[i][prev] = ans;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<vector<int>> memo(n, vector<int>(7, -1));
    cout << dp(0, 0, a, memo) << "\n";
}

int main(){
    int t;
    cin>>t;
    while(t--)  {
        solve();
        //cout<<endl;
        
    }
    return 0;
    
}