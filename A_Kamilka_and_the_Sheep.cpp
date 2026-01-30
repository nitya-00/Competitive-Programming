#include <bits/stdc++.h>
using namespace std;
void max_pleasure(vector<long long int> &a, int n){
    sort(a.begin() , a.end());

    cout<<  a[n-1]-a[0];
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
         max_pleasure(a, n);
         cout<<endl;
    }
}
