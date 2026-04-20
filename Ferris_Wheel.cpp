#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solve(){
    int n;
    long long x;
    cin >> n >> x;

    vector<long long> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    int i = 0, j = n - 1;
    int cnt = 0;

    while(i <= j){
        if(a[i] + a[j] <= x){
            i++;   // pair lightest with heaviest
        }
        j--;       // heaviest always goes
        cnt++;
    }

    return cnt;
}

int main(){
    cout << solve() << endl;
}