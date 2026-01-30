#include <bits/stdc++.h>
using namespace std;
int solve(){
    int x;
    cin>>x;
    int i=1;
    int count=0;
    while(i<x){
        if(x%i==0)count++;
        i++;
    }
    return count+1;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
       cout <<solve() << endl;
    }
}