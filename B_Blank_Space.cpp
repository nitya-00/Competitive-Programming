#include <bits/stdc++.h>
using namespace std;
int solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    int ans=0;
    for(int i=0;i<n;i++)cin>>a[i];
    int maxlen=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            maxlen++;
        }
        else {
            ans=max(ans, maxlen);
            maxlen=0;
        }
       
    }
    return max(ans , maxlen);
}


int main() {
    int t;
    cin >> t;
    while (t--) {
       cout <<solve() << endl;
    }
}
