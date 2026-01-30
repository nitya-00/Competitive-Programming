#include <bits/stdc++.h>
using namespace std;
int solve(){
    int n ;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(is_sorted(a.begin() , a.end()))return n;
        else {
            return n-1;
        }
    }
    
}


int main() {
    int t;
    cin >> t;
    while (t--) {
       cout <<solve() << endl;
    }
}
