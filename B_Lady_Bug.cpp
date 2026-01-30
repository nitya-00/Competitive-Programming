#include <bits/stdc++.h>
using namespace std;

void save(string a, string b, int n) {
    if (a.find('1') == string::npos) {
        cout << "YES\n";
        return;
    }

    int left = -1, right = -1;
   
    for (int i = 0; i < n; i++) {
        if (a[i] == '1') {
            if (left == -1) left = i;
            right = i;
        }
    }
    for (int i = left; i <= right; i++) {
        if (b[i-1] == '0') {
            cout << "YES\n";
            return;
        }
    }


    cout << "NO\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        save(a, b, n);
    }
    return 0;
}
