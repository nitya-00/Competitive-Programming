#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin>>n;
    if(n%2==1)cout<<-1<<endl;
    else if(n%6==0 && n%4==0){
        cout<<n/6<<" "<<n/4<<endl;
        
    }
    else if(n%6==0 || n%4==0){
        long long x=round(n/6);
        cout<<std::max(1LL , n/6+1 )<<" " <<n/4<<endl;
    }
   
}


int main() {
    int t;
    cin >> t;
    while (t--) {
       solve();
    }
}
