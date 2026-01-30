#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int k=1;
    vector<int>per(n);
    per[0]=1;
    for(int i=1;i<n;i++){
        per.push_back(k*i+(i-1));
        k++;
    }
    for(int i=0;i<n;i++){
        cout<<per[i]<<" ";
    }
}


int main() {
    int t;
    cin >> t;
    while (t--) {
       solve();
       cout<<endl;
    }
}
