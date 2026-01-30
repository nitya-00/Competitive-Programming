#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n , k;
    cin>>n>>k;
    if(n%2==0 && k%2==1){
        cout<<"YES";
        return;
    }
    cout<< (((n-k)%2==0)?"YES":"NO");
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
       cout << endl;
    }
}
