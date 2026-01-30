#include <bits/stdc++.h>
using namespace std;

long long solve() {
    int n;
    cin >> n;

    vector<pair<long long, long long>> intervals(n);
    for (int i = 0; i < n; i++) {
        cin >> intervals[i].first >> intervals[i].second;
    }

    sort(intervals.begin(), intervals.end(), [](auto &a, auto &b) {
        if (a.first == b.first)
            return a.second > b.second;
        return a.first < b.first;
    });

    long long count = 0;
    long long max_end = -1;

    // Walk from right to left to track outer intervals
    for (int i = n - 1; i >= 0; --i) {
        if (intervals[i].second <= max_end) {
            count++;
        }
        max_end = max(max_end, intervals[i].second);
    }

    return count *2;
}
int main() {
    cout <<solve() << endl;
}
