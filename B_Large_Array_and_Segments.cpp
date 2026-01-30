#include <iostream>
#include <vector>

using namespace std;

long long solve(const vector<int>& a, int n, int k, long long x) {
    long long count = 0;
    long long total_sum = 0;
    for (int val : a) {
        total_sum += val;
    }

    for (int l = 0; l < n*k ; ++l) {
        long long current_sum = 0;
        for (int r = l; r < n; ++r) {
            current_sum += a[r % n];
            if (current_sum >= x) {
                count++;
                break;
            }
        }
    }
    return count *k;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        long long x;
        cin >> n >> k >> x;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << solve(a, n, k, x) << endl;
    }
    return 0;
}