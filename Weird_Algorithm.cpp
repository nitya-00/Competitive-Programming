#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin>>n;
    vector<long long>res;
    res.push_back(n);
    while(n>1){
        if(n%2==0){
            res.push_back(n/2);
            n=n/2;
         }
         else{
             res.push_back((n*3)+1);
             n=n*3+1;
         } 
    }
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}


int main() {
    solve();
}
