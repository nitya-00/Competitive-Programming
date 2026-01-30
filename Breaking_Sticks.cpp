#include <bits/stdc++.h>
using namespace std;
int solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0;
    int sum=0;
    for(int i=0;i<n;i++){
        if(a[i]<=1)count= 0;
        else {
            count=a[i]-1;
        }
        sum+=count;
    }
    return sum;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
       cout <<solve() << endl;
    }
}
