#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <string>
using namespace std;

void solve() {
    string s;
    int n;
    cin >> n;
    cin >> s;
    int openb=0;
    int closeb=0;
    for(int i=0; i<n; i++){
        if(s[i]=='('){
            openb++;
        }else{
            closeb++;
        }
    }
    if(openb==closeb){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}