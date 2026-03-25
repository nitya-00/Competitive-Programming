

#include <iostream>
using namespace std;

 bool isImperfect(int x){
        return (x % 2 == 0) ^ (x % 5 == 0);
    }

int solve() {
    int n, k;
    cin >> n >> k;
   vector<int> A(n), B(n);
    for(int i = 0; i < n; i++) cin >> A[i];
    for(int i = 0; i < n; i++) cin >> B[i]; 
        int ans = 0;

        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                int mx = max(A[i], A[j]);
                int mn = min(A[i], A[j]);

                int d = min(mx / 2, 100);
                int cost = mn + (mx - d);

                if(cost <= k){
                    ans = max(ans, B[i] + B[j]);
                }
            }
        }

        return ans;
    }

int main() {
    int t;
    cin >> t;
    while(t--) {
        cout << solve() << endl;
    }
}

