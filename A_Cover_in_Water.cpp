#include <bits/stdc++.h>
using namespace std;
int solve(){
    int n;
    cin>>n;
    string s;
    cin>> s;
    int countt=0;
    for(int i=1;i<n-1;i++){
        if(s[i-1]=='.' && s[i]=='.' && s[i+1]=='.'){
            return 2;
        }
    }
        return count(s.begin(), s.end() , '.');
}


int main() {
    int t;
    cin >> t;
    while (t--) {
       cout <<solve() << endl;
    }
}
