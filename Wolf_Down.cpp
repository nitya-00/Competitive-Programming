#include <iostream>
using namespace std;

void solve() {
   int n;
   cin>>n;
   string s="";
   cin>>s;
   int cnt=0;
   int cnt1=count(s.begin(), s.end(), '1');
   for(int i=0;i<n;i++){
       if(s[i]=='0')cnt+=1;
       else{
              break;
       }
       
   }
    if(cnt1==n)cnt=0;
   cout<<(cnt>=0 ? cnt : n);
   
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << '\n';
    }
    return 0;
}
