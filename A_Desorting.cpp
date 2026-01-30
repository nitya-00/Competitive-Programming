#include <bits/stdc++.h>
using namespace std;
int solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(!is_sorted(a.begin() , a.end())){
        return 0;
    }
    int mini=INT_MAX;
    for(int i=0;i<n-1;i++){
       mini=min(mini , a[i+1]-a[i]); 
    }
    if (mini == 0) return 1;
    return (mini / 2) + 1;

}


int main() {
    int t;
    cin >> t;
    while (t--) {
       cout <<solve() << endl;
    }
}
