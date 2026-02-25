#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void solve() {
    int n;
    cin>> n ;
    string s;
    cin>> s ;
    int cnt=0;
    int diff=0;
    for(int i=0;i<n;i++){
        if(s[i]!=s[(i+1)%n]) diff++;
    }
    int ans;
    if(diff==n)ans=n;
    else ans=diff+1;
    cout<<ans<<'\n';
    
   
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        int t;
        cin>>t;
        while(t--){
            solve();
        }
    return 0;
}
