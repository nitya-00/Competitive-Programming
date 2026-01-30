#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
   
    cout<< ((a[0]==1)? "YES ": "NO");
}


int main() {
    int t;
    cin >> t;
    while (t--) {
       solve() ;
       cout << endl;
    }
}
