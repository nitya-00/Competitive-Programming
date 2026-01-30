#include <bits/stdc++.h>
using namespace std;
int solve(){
    long long n , k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin() , a.end());
    int count=0;int ans=0;
    for(int i=0;i<n-1;i++){
        if(abs(a[i]-a[i+1])<=k)count++;
        else{
            ans=max(ans, count);
            count=0;
        }
    }
    return (n - max(ans , count)-1)  ;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
       cout <<solve() << endl;
    }
}
