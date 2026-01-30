#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin>>n;
    vector<long long>num(n-1);
    for(int i =0;i<n-1;i++)cin>>num[i];
    long long sum=0;
    long long tot_sum=(n*(n+1))/2;
    for(int i=0;i<n-1;i++){
        sum+=num[i];
    }

cout<<abs(tot_sum-sum);
}


int main() {
     solve();
}
