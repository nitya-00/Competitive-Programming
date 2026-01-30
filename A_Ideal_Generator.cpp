#include <bits/stdc++.h>
using namespace std;
string solve(){
    int n;
    cin>>n;
    return n%2!=0?"YES":"NO";
}


int main() {
    int t;
    cin >> t;
    while (t--) {
       cout <<solve() << endl;
    }
}
