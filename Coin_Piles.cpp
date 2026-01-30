#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a , b;
    cin>>a >>b;
    if(a==0 && b!=0 || a!=0 && b==0){
        cout<<"NO";
    }
    else if((a%2==1 && b%2==1)|| a%2==0 && b%2==1)cout<<"YES";
    else{
        cout<<"NO";
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
