#include <bits/stdc++.h>
using namespace std;
int solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int cnt_minus=count(a.begin() , a.end() , -1);
    int cnt_plus=n-cnt_minus;
    int ops=0;
   while(cnt_minus>cnt_plus || cnt_minus%2==1){
    ops++;
    cnt_minus--;
    cnt_plus++;
   }

    return ops;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
       cout <<solve() << endl;
    }
}
