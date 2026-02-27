#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void solve() {
    int n , k;
    cin >> n >> k;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    string s;
    cin >> s;

    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i < n; i++){
        if(s[i] == '0'){    
            pq.push(a[i]);
        }
    }

    if(pq.size() < k){
        cout << -1 << "\n";
        return;
    }

    long long ans = 0;

    for(int i = 0; i < k; i++){
        ans += pq.top();
        pq.pop();
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}