#include <bits/stdc++.h>
using namespace std;

string flip_prefix(const string& s, int x) {
    string flipped = s;
    for (int i = 0; i < x; ++i) {
        flipped[i] = (flipped[i] == '0') ? '1' : '0';
    }
    return flipped;
}

int solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    set<string> seen;
    queue<string> q;

    seen.insert(s);
    q.push(s);

    while (!q.empty()) {
        string curr = q.front();
        q.pop();

        int count0 = 0, count1 = 0;
        for (int i = 0; i < curr.size(); ++i) {
            if (curr[i] == '0') count0++;
            else count1++;

            if (count0 == count1) {
                string flipped = flip_prefix(curr, i + 1);
                if (!seen.count(flipped)) {
                    seen.insert(flipped);
                    q.push(flipped);
                }
            }
        }
    }

    return seen.size();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
}
