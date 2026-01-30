#include <bits/stdc++.h>
using namespace std;
int floorDiv(int a, int b) {
    return (a / b) - ((a % b) && ((a < 0) ^ (b < 0)));
}
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = 0;
   for(int i = n - 2; i >= 0; i--){
        while(a[i] >= a[i + 1] && a[i] > 0){
            a[i] /= 2;
            ans++;
        }
        if(a[i] == a[i+1]){
            cout << -1 << '\n';
            return;
        }
    }
    cout << ans << '\n';
}


int main() {
    int t;
    cin >> t;
    while (t--) {
       solve();
    }
}