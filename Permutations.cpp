#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    if(n==1){
        cout<<1 <<" ";
        return;
    } 
    if( n>3 ){
        for(int i = 2; i <= n; i += 2)
            printf("%d ", i);
        for(int i = 1; i <= n; i += 2)
            printf("%d ", i);

    }
    else {
        cout<<"NO SOLUTION";
    }
}


int main() {
   solve();
}
