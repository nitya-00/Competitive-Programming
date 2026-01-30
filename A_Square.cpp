#include <iostream>
#include <unordered_map>
using namespace std;

void solve() {
   int n;
   cin>>n;
   string s="" , t="";
    cin >> s >> t;
    unordered_map<char, int> countS, countT;
    for (char c : s) {
        countS[c]++;
    }
    for (char c : t) {
        countT[c]++;
    }
    // int cnt=0;
    // for (char c : s) {
    //     if (countS[c] == countT[c]) {
    //         cnt+=countS[c];
    //     }
    // }
    if (countS==countT)
        cout << "YES";
    else
        cout << "NO";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}
