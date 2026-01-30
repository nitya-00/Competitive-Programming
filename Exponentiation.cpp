#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9 + 7;
long long solve(){
    long long a , b;
    cin>>a>>b;
    long long pow=1;
    a%=MOD;
    while(b>0){
        if(b &1 )pow= (pow*a)%MOD;
        a=(a*a)%MOD;
        b>>=1;
    }
    return pow;

}


int main() {
    int t;
    cin >> t;
    while (t--) {
       cout <<solve() << endl;
    }
}