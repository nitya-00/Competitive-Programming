#include <iostream>
using namespace std;
void solve() {
    long long N;
    cin >> N;

    long long k = N / 2;
    cout << k * (k + 1) << "\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}