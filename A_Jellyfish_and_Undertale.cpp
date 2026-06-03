#include <iostream>
#include <vector>
using namespace std;
long long solve(){
    long long a, b;
    int n;
    cin>>a >>b>>n;
    vector<long long>x(n);
    for( int i = 0; i < n ; i ++){
		cin>>x[i];
	}
    long long maxi=b;
    long long sum=0;
    long long ans=b;
    for( int i = 0; i < n ; i ++){
        ans += min(a - 1, x[i]);
    }
   
     
    return ans;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
       cout <<solve() << endl;
    }
}
