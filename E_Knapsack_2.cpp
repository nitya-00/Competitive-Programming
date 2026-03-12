#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    long long W;
    cin >> n >> W;

    vector<int> w(n), v(n);
    int sumValue = 0;

    for(int i = 0; i < n; i++){
        cin >> w[i] >> v[i];
        sumValue += v[i];
    }

    const long long INF = 1e18;
    vector<long long> dp(sumValue + 1, INF);

    dp[0] = 0;

    for(int i = 0; i < n; i++){
        for(int val = sumValue; val >= v[i]; val--){
            dp[val] = min(dp[val], dp[val - v[i]] + w[i]);
        }
    }

    int ans = 0;

    for(int val = sumValue; val >= 0; val--){
        if(dp[val] <= W){
            ans = val;
            break;
        }
    }
    //cout<< (*min_element(dp.begin(), dp.end()))<<endl;
    cout << ans << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}