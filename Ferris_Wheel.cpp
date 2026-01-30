#include <bits/stdc++.h>
using namespace std;
int solve(){
   int n;
   long long x;
    cin>>n>>x;
    vector<long long>a(n);
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    long long count=0;
    for(int i=0;i<n;i++){
        if(a[i]<=x/3){
            count++;
        }
    }

    long long res=(sum+x-1)/x;
    return res + count;
}


int main() {
    cout <<solve() << endl;
   
}
