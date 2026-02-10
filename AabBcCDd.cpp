#include <iostream>
using namespace std;

void solve() {
    int N;
    cin >> N;
    string S;
    cin >> S;

   vector<int> freq(26, 0);
    for (char &c : S) {
        if (c >= 'A' && c <= 'Z') {
            c = c - 'A' + 'a';
        }
        freq[c - 'a']++;
    }

    int max1 = 0, max2 = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i] > max1) {
            max2 = max1;
            max1 = freq[i];
        } else if (freq[i] > max2) {
            max2 = freq[i];
        }
    }

    cout << max1 + max2 << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
