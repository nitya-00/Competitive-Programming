#include <bits/stdc++.h>
using namespace std;
void solve(){
   int n ;
   cin>> n;
   string s;
   cin>>s;
   int i=0;
   int j=n-1;
   int count=0;
   while(i<j){
        if((s[i]=='1' && s[j]=='0')|| (s[i]=='0' &&s[j]=='1') ){
            count++;
            i++;
            j--;
        }
        else{
            break;
        }
        
   } 
   cout<< n-(count*2);

}


int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
       cout << endl;
    }
}
