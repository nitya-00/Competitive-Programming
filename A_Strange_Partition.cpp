#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    long long k;
    cin>> n>>k;
    vector<int>a(n);
    long long sum=0;
    long long ceil=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        ceil+=(a[i]+k-1)/k;
    } 
    cout<<sum/k<<  " " << ceil<<endl;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
       solve();
    }
}