#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solve() {
    int n , x;
    cin >> n>>x;
    if(n==x)return n+x-1;
    else{
        return n+x;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout<<solve();
        cout << endl;
    }
    return 0;
}
