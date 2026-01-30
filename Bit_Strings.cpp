#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9+7;
typedef long long ll;
void solve(){
    long long n ; 
    cin>>n;
    ll res=1;
    ll a=2;
    while(n>0){
        if(n&1){
            res=(res*a)%MOD;
            
        }
        a=(a*a)%MOD;
         n/=2;
    }
    cout<<res<<endl;
}


int main() {
   solve();
}
