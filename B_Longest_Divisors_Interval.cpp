#include <bits/stdc++.h>
using namespace std;
int solve(){
    long long n;
    cin>> n;
    int i=1;
    while(n%i==0){
        i++;
    }
    return i-1;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
       cout <<solve() << endl;
    }
}
