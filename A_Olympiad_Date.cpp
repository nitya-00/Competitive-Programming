#include <bits/stdc++.h>
using namespace std;

int min_steps(vector<int>& a, int n) {
    vector<int> target = {0, 1, 0, 3, 2, 0, 2, 5}; 
    unordered_map<int, int> required_freq, current_freq;
    for (int num : target) required_freq[num]++;

    int count = 0; 
    for (int i = 0; i < n; i++) {
        if (required_freq[a[i]] > 0 && current_freq[a[i]] < required_freq[a[i]]) {
            current_freq[a[i]]++;
            count++;
        }
        if (count == 8) return i + 1; 
    }

    return 0; 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout <<min_steps(a, n) << endl;
    }
}
