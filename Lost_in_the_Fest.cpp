#include <bits/stdc++.h>
using namespace std;

int seconds(vector<int>& h, int n) {
    if (is_sorted(h.begin(), h.end())) return 0; // Already sorted

    int swapCount = 0;

    // Bubble Sort with swap counting
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (h[j] > h[j + 1]) {
                swap(h[j], h[j + 1]);
                swapCount++;
                swapped = true;
            }
        }
        if (!swapped) break; // Stop if no swaps were made (already sorted)
    }

    return swapCount;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> h(n);
        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }
        cout << seconds(h, n) << endl;
    }
}
