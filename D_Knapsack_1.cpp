#include <iostream>
#include <vector>
using namespace std;
void solve() {
    int n, W;
    cin >> n >> W;
    vector<int> w(n), v(n);
    for (int i = 0; i < n; i++) {
        cin >> w[i] >> v[i];    
    }
    vector<vector<long long>> dp(n + 1, vector<long long>(W + 1, 0));
    // dp[i][j]=no of items we can take from first i items with weight limit j
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= W; j++) {
            dp[i][j] = dp[i - 1][j];
            if (j >= w[i - 1]) {
                // [j - w[i - 1]] + v[i - 1] ==== current weight - weight of current item + value of current item
                dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i - 1]] + v[i - 1]);
            }
        }
    }
    cout << dp[n][W] << "\n";
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        solve();
    
}