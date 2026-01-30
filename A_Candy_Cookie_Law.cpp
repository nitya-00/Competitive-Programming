#include <iostream>
using namespace std;

void solve() {
   int a, b , c, d;
   cin>>a>>b>>c>>d;
   if(a==b && c==d) cout<<"No";
   else
   (c>=a && d>=b) ? cout<<"No" : cout<<"Yes";
}

int main() {

   
        solve();
        cout << '\n';
    return 0;
}
