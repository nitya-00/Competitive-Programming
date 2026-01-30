#include <bits/stdc++.h>
using namespace std;

int solve() {
    string s;
    cin >> s;
    int n = s.size();
    if (n == 0) return 1;
    int cnt0=0, cnt1=0;
    for(int i=0;i<n;i++){
        (s[i]=='0')?cnt0++:cnt1++;
    }
    int len=0;
    for (int i = 0; i < n; ++i) {
          if(s[i]=='0' && cnt1>0){
            len++;
            cnt1--;
          }
          else if(s[i]=='1' && cnt0>0){
            cnt0--; 
            len++;
          }
          else{
            break;
          } 
    }

    return n-len;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
}
