#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    long long sum=0;
    for(int i=1;i<=n;i++){
        sum+=pow(2, i);
    }
    cout<<sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        solve();
        cout << '\n';
    
    return 0;
}
