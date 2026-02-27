#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    unordered_map<int,int> freq;

    int ans = 0;

    for(int i = 0; i < n; i++) {
        freq[a[i]]++;

        if(freq[a[i]] == 2) {
            ans += 2;
            freq.clear();  
        }
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}