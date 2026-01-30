#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a , b , c;
    cin>> a>>b>>c;
    if( c % 2 == 0){
        if (a > b)
        cout<<"First";
    else
        cout<<"Second";
    }
    
    else{
        if (b > a)
            cout<<"Second";
        else
            cout<<"First";
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
