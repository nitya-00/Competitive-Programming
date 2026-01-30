#include<bits/stdc++.h>
using namespace std;
void solve(string s ){
    int n=s.length();
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1' ){
            for(int j=i+1;j<n;j++){
                if(s[j]=='0' &&s[i+j+1]=='1')count ++;
            }
            
        }
           
    }
    cout<<count;
   
}
int main(){
    int t;
    cin>> t;
    string s;
    while(t--){
        cin>>s;
        solve(s);
        cout<<endl;
    }
}