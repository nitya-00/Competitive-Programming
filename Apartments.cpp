#include <bits/stdc++.h>
using namespace std;
int solve(){
    long long n , m , k;
    cin>>n>>m>>k;
    vector<int>noa(n);
    vector<int>noap(m);
    for(int i=0;i<n;i++)cin>>noa[i];
    for(int i=0;i<m;i++)cin>>noap[i];
    sort(noa.begin(), noa.end());
    sort(noap.begin(), noap.end());

    int i = 0, j = 0, count = 0;

    while (i < n && j < m) {
        if (abs(noa[i] - noap[j]) <= k) {
            count++;
            i++;
            j++;
        }
        else if (noap[j] < noa[i] - k) {
            j++;
        }
        else {
            i++;
        }
    }
    return count;
}


int main() {
    cout <<solve() << endl;
}