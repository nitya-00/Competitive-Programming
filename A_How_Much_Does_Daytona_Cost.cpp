#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n , k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int cnt=count(a.begin() , a.end() , k);
    if(cnt>=1){
        cout<<"YES\n";
        return;
    }
    else if(cnt==0){
       cout<<"NO\n";
       return; 
    }
    
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
       //cout << endl;
    }
}
