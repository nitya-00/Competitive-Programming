#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    std::map<int ,int> countt;
    for (int i = 1; i <= n; ++i) {
      int x;
      cin >> x;
      countt[x]++;
    }
    if (countt.size() >= 3) puts("No");
    else {
      if (abs(countt.begin()->second - countt.rbegin()->second) <= 1) {
        puts("Yes");
      } else {
        puts("No");
      }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
      solve() ;
    }
}
