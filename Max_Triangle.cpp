#include <bits/stdc++.h>
using namespace std;
int solve(){
    int n;
    cin>>n;
    return (n>3? 3*n-3 : -1);
}


int main() {
    int t;
    cin >> t;
    while (t--) {
       cout <<solve() << endl;
    }
}
