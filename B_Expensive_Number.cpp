#include <bits/stdc++.h>
using namespace std;
int solve(){
    string n;
    cin>>n;
    int l=n.length();
    int ans=0;
    bool flag=false;
    
    for(int i=l-1;i>=0;i--){
        if(flag){
            if(n[i]!='0'){
                ans++;
            }
        }
        else{
            if(n[i]!='0'){
                flag=true;
            }
            else{
                ans++;
            }
        }
    }
    return ans ;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
       cout <<solve() << endl;
    }
}
