#include<iostream>
#include<stack>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    stack<char> st;

    for(char c : s) {
        if(!st.empty() && st.top() == c) {
            st.pop();
        } else {
            st.push(c);
        }
    }

    if(st.empty())
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}