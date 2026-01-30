#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int mygcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> diff;
    for (int i = 1; i < n; i++) {
        diff.push_back(a[i] - a[i-1]);
    }
    
    int g = diff[0];
    for (int i = 1; i < diff.size(); i++) {
        g = mygcd(g, diff[i]); 
    }
    
    int cnt = 0;
    for (int i = 0; i < diff.size(); i++) {
        cnt += (diff[i] / g) - 1;
    }
    
    cout << cnt << "\n";
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}