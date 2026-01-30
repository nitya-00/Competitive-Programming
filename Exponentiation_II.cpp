#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9 + 7;
long long solve(long long a , long long b){
    
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
        long long a , b , c;
        cin>>a>>b>>c;
        long long res=solve( b , c) ;

       cout <<solve( a , res) << endl;
    }
}