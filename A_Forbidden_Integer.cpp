#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, k , x;
    cin>>n>>k>>x;
    vector<int>result;
    int sum=0;
    if(x!=1){
        cout<<"YES";
        cout<<n;
        cout<< '1' * n <<" ";
    }
    else if(k==1 || (k==2 && n%2==1)){
        cout<<"NO";
    }
    else{
        cout<<"YES";
        cout<<n%2;
        cout<<
    }
    
    
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
       cout  << endl;
    }
}
