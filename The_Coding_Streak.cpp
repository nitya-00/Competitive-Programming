#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int top = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        if(a[i]!=0){
            top++;
        }
        else{
            top=0;
        }
        cnt=max(cnt, top);
    }
        
        cout << cnt << endl;
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        solve();
        //cout << '\n';
    }
    return 0;
}
