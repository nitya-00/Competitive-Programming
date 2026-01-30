#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a , b , c , d;
    cin>>a >>b>>c>>d;
    if(b<=d&&c<=a+d-b) {
        cout<<(d-b)+(a+d-b-c)<<"\n";
    }
    else{
        cout<<"-1\n";
    }
    
        
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
