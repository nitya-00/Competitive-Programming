#include<iostream>
#include<unordered_map>
using namespace std;


void solve(){
    string s;
    string t;
    cin>>s;
    cin>>t;
    int n=s.size();
    int m=t.size();
    int ans=0;
    for(int i=0;i<n-m+1;i++){
        string tt=s.substr(i,m);
        if(tt==t && i%2==0){
            ans++;
        }

    }
    cout<<ans<<endl;
}
int main(){
    solve();
}
