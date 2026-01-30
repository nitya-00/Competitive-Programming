#include <iostream>
#include <string>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int zeros = 0, ones = 0;
    
    for (char c : s) {
        if (c == '0') zeros++;
        else ones++;
    }
    
    int min_pairs = min(zeros, ones);
    cout << (min_pairs % 2 ? "DA" : "NET") << endl;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
       solve();
    }
}