#include <bits/stdc++.h>
using namespace std;
int solve(){
    int n , k , d;
    cin>>n>>k>>d;
    vector<int>t(n);
    for(int i=0;i<n;i++){
        cin>>t[i];
    }
    int total=0;
    if(n==k)return 0;
    vector<bool> plucked (10001 , false);
    for(int i=0;i<n;i++){
        if(t[i]<d && !plucked[t[i]]){
            total+=t[i];
            plucked[t[i]]=true; 
        }
         //if(d-1>t[i]) plucked(t[i])=false;
    }
    return total;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
       cout <<solve() << endl;
    }
}
