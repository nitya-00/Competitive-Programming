#include <bits/stdc++.h>
using namespace std;
int solve(){
    long long a, b;
    int n;
    cin>>a >>b>>n;
    vector<long long>x(n);
    for( int i = 0; i < n ; i ++){
		cin>>x[i];
	}
    long long maxi=b;

    for( int i = 0; i < n ; i ++){
		maxi += min(a - 1, x[i]);
	}
     
    return maxi;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
       cout <<solve() << endl;
    }
}
