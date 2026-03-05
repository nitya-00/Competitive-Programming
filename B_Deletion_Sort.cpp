#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if(is_sorted(a.begin(), a.end())) {
        cout << n << "\n";
        return;
    }

    int mn = *min_element(a.begin(), a.end());

    int count = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == mn)
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