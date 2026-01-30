#include <bits/stdc++.h>
using namespace std;
int solve(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    int count=0;
    int girl=0 , boy=0;
    for(int i=0;i<n;i++){
        if(s[i]=='G')girl++;
        else boy++;
        if (girl == 0 && boy > 0) return i+1; 
        if (boy > 2 * girl) return i+1;  
    }
    return n;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
       cout <<solve() << endl;
    }
}
