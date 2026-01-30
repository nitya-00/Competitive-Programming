#include <bits/stdc++.h>
using namespace std;
long long solve(){
    long long x , y;
    cin>>x>>y;
    if(x==1 && y==1)return 1;
    long long res=pow(y , x)-1;
    return res;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
       cout <<solve() << endl;
    }
}