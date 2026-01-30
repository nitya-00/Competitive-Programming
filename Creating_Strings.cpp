#include <bits/stdc++.h>
using namespace std;
void solve(){
       string s;
       cin>>s;
       vector<string>res;
       for(int i=0;i<s.size();i++){
              for(int j=0;j<s.size();j++){
                     s.replace(s[i],s[j]);
                     res.push_back(s);
              }
       }
       for(int i=0;i<res.size();i++){
              cout<<res[i]<<endl;
       }
}


int main() {
       solve();
       return 0;
}