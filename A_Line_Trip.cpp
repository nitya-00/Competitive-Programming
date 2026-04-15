#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solve(){
    int n , x;
    cin >> n >> x;

    vector<int>a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    vector<int> temp;
    temp.push_back(a[0]);
    for(int i = 1; i < n; i++){
        temp.push_back(a[i] - a[i - 1]);
    }
    temp.push_back(2 * (x - a[n - 1]));

    return *max_element(temp.begin(), temp.end());
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
}