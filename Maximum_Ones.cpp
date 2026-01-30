#include <bits/stdc++.h>
using namespace std;
int solve(string s , int n , int k){
    int count=0;
    int initial = 0;
    for (char c : s) {
        if (c == '1') {
            initial++;
        }
    }
        for(int i=0;i<n-1;i++){
            if(s[i]=='0' && s[i+1]=='1'){
                s[i]='1';
                count++;
                i=-1;
            }
        }
    int ans=min(count , k);
    return initial+ans;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n , k;
        cin >> n>>k;
        string s;
        cin>>s;
        cout <<solve(s , n , k) << endl;
    }
}
