#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> A(n);
    for(int i = 0; i < n; i++)
        cin >> A[i];

    vector<long long> hits(n);

    long long round = 0;

    for(int i = 0; i < n; i++) {

        if(round >= A[i]) {
            hits[i] = A[i];
        } else {
            hits[i] = round;
            round++;
        }
    }

    for(int i = 0; i < n; i++)
        cout << hits[i] << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--) {
        solve();
    }
}