#include <bits/stdc++.h>
using namespace std;
int solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int min_abs = INT_MAX;
    for (int i = 0; i < n; i++) {
        min_abs = min(min_abs, abs(a[i]));
    }
    return min_abs;
}

int main() {
   
       cout <<solve() << endl;
    }
