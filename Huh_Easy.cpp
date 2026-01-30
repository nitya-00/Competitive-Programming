#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool are_adjacent_different(const string& s) {
    for (size_t i = 0; i + 1 < s.length(); ++i) {
        if (s[i] == s[i + 1]) {
            return false;
        }
    }
    return true;
}

int longest_common_subsequence(const string& s1, const string& s2) {
    int n = s1.length();
    int m = s2.length();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[n][m];
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        if (k > n) {
            cout << -1 << endl;
            continue;
        }

        if (k == n) {
            string s = "";
            for (int i = 0; i < n; ++i) {
                s += (char)('A' + (i % 3));
            }
            if (are_adjacent_different(s)) {
                cout << s << endl;
                cout << s << endl;
            } else {
                string s1 = "";
                for (int i = 0; i < n; ++i) {
                    s1 += (char)('A' + (i % 2));
                }
                if (are_adjacent_different(s1)) {
                    cout << s1 << endl;
                    cout << s1 << endl;
                } else {
                    cout << -1 << endl;
                }
            }
        } else if (k == 0) {
            string s = "";
            string t = "";
            for (int i = 0; i < n; ++i) {
                s += (char)('A' + (i % 3));
                t += (char)('C' - (i % 3));
            }
            if (are_adjacent_different(s) && are_adjacent_different(t) && longest_common_subsequence(s, t) == 0) {
                cout << s << endl;
                cout << t << endl;
            } else {
                string s1 = "";
                string t1 = "";
                for (int i = 0; i < n; ++i) {
                    s1 += (i % 2 == 0 ? 'A' : 'B');
                    t1 += (i % 2 == 0 ? 'B' : 'A');
                }
                if (are_adjacent_different(s1) && are_adjacent_different(t1) && longest_common_subsequence(s1, t1) == 0) {
                    cout << s1 << endl;
                    cout << t1 << endl;
                } else {
                    cout << -1 << endl;
                }
            }
        } else {
            string s = "";
            for (int i = 0; i < n; ++i) {
                s += (char)('A' + (i % 3));
            }
            if (!are_adjacent_different(s)) {
                s = "";
                for (int i = 0; i < n; ++i) {
                    s += (char)('A' + (i % 2));
                }
                if (!are_adjacent_different(s)) {
                    cout << -1 << endl;
                    continue;
                }
            }

            string t = "";
            for (int i = 0; i < k; ++i) {
                t += s[i];
            }
            for (int i = k; i < n; ++i) {
                char next_char;
                if (t.back() == 'A') next_char = 'B';
                else if (t.back() == 'B') next_char = 'C';
                else next_char = 'A';
                t += next_char;
            }

            if (are_adjacent_different(t) && longest_common_subsequence(s, t) == k) {
                cout << s << endl;
                cout << t << endl;
            } else {
                string t2 = "";
                for (int i = 0; i < k; ++i) {
                    t2 += s[i];
                }
                for (int i = k; i < n; ++i) {
                    char next_char = 'A';
                    if (t2.back() == 'A') next_char = 'B';
                    t2 += next_char;
                }
                if (are_adjacent_different(t2) && longest_common_subsequence(s, t2) == k) {
                    cout << s << endl;
                    cout << t2 << endl;
                }
                 else {
                    cout << -1 << endl;
                }
            }
        }
    }
    return 0;
}