#include <iostream>
#include <vector>
using namespace std;
const int MOD = 1e9 + 7;
int solve(){
    int n;
    cin >> n;

    vector<int> dp(n + 1, 0);
    dp[0] = 1;

    for(int i = 1; i <= n; i++){
        for(int dice = 1; dice <= 6; dice++){
            if(i - dice >= 0){
                dp[i] += dp[i - dice];
                dp[i] %= MOD;
            }
        }
    }

    return dp[n];
}

int main() {
    cout << solve() << endl;
}