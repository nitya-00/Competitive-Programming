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
    long long X;
    cin >> n >> X;

    vector<pair<long long,int>> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i].first;
        a[i].second = i;
    }

    string s;
    cin >> s;

    sort(a.begin(), a.end());

    vector<int> pref(n+1, 0);
    for(int i = 0; i < n; i++){
        pref[i+1] = pref[i] + (s[a[i].second] == '1');
    }

    int total = pref[n];

    long long ans = 0;

    int i = 0; 

    for(int j = 0; j < n; j++){ 

        while(i < j){
            long long mn1 = a[i].first;
            long long mn2 = a[i+1].first;
            long long mx = a[j].first;

            int ones1 = pref[j+1] - pref[i];
            int ones2 = pref[j+1] - pref[i+1];

            int len1 = j - i + 1;
            int len2 = j - (i+1) + 1;

            long long cost1 = (len1 - ones1) + (total - ones1);
            long long cost2 = (len2 - ones2) + (total - ones2);

            long long val1 = mn1 * mx - cost1 * X;
            long long val2 = mn2 * mx - cost2 * X;

            if(val2 >= val1) i++;
            else break;
        }

        int ones = pref[j+1] - pref[i];
        int len = j - i + 1;

        long long cost = (len - ones) + (total - ones);
        long long val = a[i].first * a[j].first - cost * X;

        ans = max(ans, val);
    }

    cout << ans << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
}