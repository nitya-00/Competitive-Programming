#include<iostream>
using namespace std;
void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    int maxi = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        maxi = max(maxi, a[i]);
    }

    int count = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == maxi)
            count++;
    }

    cout << count << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}