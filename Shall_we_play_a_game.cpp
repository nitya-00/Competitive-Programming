#include <bits/stdc++.h>
using namespace std;
int solve(int n){
    long  alice=0 , bob=0 ,score=0;
    for(int i=1;i<n;i++){
        if(n%2!=0){
            alice++;
            score+=power(2, (i-1));
        }
        else{
            bob++;
            score-=power(2,(i-1));
        }
    }
    
return score %998244353;
        
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        cout <<solve(n) << endl;
    }
}
