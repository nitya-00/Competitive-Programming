#include <bits/stdc++.h>
using namespace std;
void solve(){
    int x , k;
    cin>>x>>k;
    vector<int>result;
    if(x%k!=0){
        cout<<1<<endl;
        cout<<x;
    }
    else {
        cout<<2<<endl;
        cout<< x-1 << " " <<1;
        }
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
       cout << endl;
    }
}
