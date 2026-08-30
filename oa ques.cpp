#include<iostream>
#include<unordered_map>
using namespace std;


void solve(){
    //tc = O(n*m)
    string s;
    string t;
    cin>>s;
    cin>>t;
    int n=s.size();
    int m=t.size();
    unordered_map<char,int>mp;
    // {a-true},  a- false 
    //
    int ans=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            mp[s[i]]=1;
        }
        else{
            mp[s[i]]=false;
        }
        

    }

    for(int i=0;i<m;i++){
        char c=t[i];
        if(mp.find(c)!=mp.end()){
            if(i%2==0 && mp[c]==true){
                ans++;
            }
            else if(i%2!=0 && mp[c]==false){
                ans++;
            }
        }

    }
    cout<<ans<<endl;
    //0123
    //aaxb - 

}
int main(){
    solve();
}
