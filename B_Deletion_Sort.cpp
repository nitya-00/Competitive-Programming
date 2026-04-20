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
    for(int i = 1; i < a.size(); i++) {
       if(a[i]>a[i-1]) {
           a.erase(a.begin() + i);
           i--;
       }
       // a.erase(remove(a.begin(), a.end(), mn), a.end());
        //count++;
    }

    cout << a.size() << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}