#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int total = 1 << n; 
    for (int i = 0; i < total; ++i) {
        int gray = i ^ (i >> 1);
        string code = bitset<16>(gray).to_string(); 
        cout << code.substr(16 - n) << endl; 
    }
}


int main() {
    int t;
   solve();
}
