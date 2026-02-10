#include <iostream>
using namespace std;

void solve() {
    int n, w;
    cin >> n >> w;
    int cnt = 0;
    if (w == 1)
        cnt= 0;
    else 
        cnt = n - n / w;
    cout<< cnt << endl;

}

int main() {

    int t;
    cin >> t;
    while (t--) {
        solve();
        //cout << '\n';
    }
    return 0;
}
