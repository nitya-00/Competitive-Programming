#include <bits/stdc++.h>
using namespace std;
long long solve(long long n){
    if(n==9){
        return 1;
    }
    long long  c=round((n+1)/10);
    return c;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout<<solve(n);
        cout<<endl;
    }
}
