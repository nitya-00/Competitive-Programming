#include <bits/stdc++.h>
using namespace std;
int solve(){
    int n , k;
    cin>> n>>k;
    vector<int>a(n);
    int mul=1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mul*=a[i];
    }
    int count=0;
    if(mul%k==0)return 0;
   for(int i=0;i<n;i++){
        mul=(mul/a[i])*(a[i]+1);
        count++;
   }
   return count;
    
}


int main() {
    int t;
    cin >> t;
    while (t--) {
       cout <<solve() << endl;
    }
}
