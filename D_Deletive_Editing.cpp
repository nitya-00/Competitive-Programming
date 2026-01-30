#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s , t;
    cin >> s >> t;
    int n = s.size();
    int m = t.size();   
  vector<int> mp(26,0);
    for (int i = 0; i < m; i++) {
        mp[t[i]-'A']++;
    }

    int count = 0;
    for (int i = n-1; i >= 0; i--) {
        if(mp[s[i]-'A']>0){
            mp[s[i]-'A']--;
        }
        else{
            s[i]='.';
        }
         
    }
    string final="";
    for (int i = 0; i < n; i++) {
        if(s[i]!='.'){
            final+=s[i];
        }
    }
   if(final==t){
        cout << "YES" << endl;
        return;
    }
    else{
        cout << "NO" << endl;
        return;
    }
    

}


int main() {
    int t;
    cin >> t;
    while (t--) {
       solve();
    }
}