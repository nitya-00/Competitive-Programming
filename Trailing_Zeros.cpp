#include <bits/stdc++.h>
using namespace std;
long long fact(long long n){
    if(n<=1)return 1;
    return n * fact(n-1);
}
void solve(){
   long long n;
    cin>>n;
    string s=to_string(fact(n));
    int count=0;
    for(int i=s.size()-1;i>=0 ;i--){
        if(s[i]=='0' ){
            count++;
        }
        else break;
    }
    cout<<count;
}


int main() {
    solve();
}
