#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <climits>
#include <string>
using namespace std;

void solve() {
    long long a , b ,c;
    cin >> a >> b >> c;
    // if(2*b==a*c){
    //     cout<<"YES\n";
    // }
    int newa=2*b-c;
    if(newa%a==0 && newa>0){
        cout<<"YES\n";
        return;
    }
    int newb=(a+c)/2;
    if((a+c)%2==0 && newb%b==0 && newb>0){
        cout<<"YES\n";  
        return;
    }
    int newc=2*b-a;
    if(newc%c==0 && newc>0){
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}