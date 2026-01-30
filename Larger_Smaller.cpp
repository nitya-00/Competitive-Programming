#include <bits/stdc++.h>
using namespace std;
int solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    int count=0;
    for(int i=0;i<n;i++)cin>>a[i];
    map<int , int>freq;
    for(int i=0;i<n;i++){
        freq[a[i]]++;
       
    }
    for (auto &entry : freq) {
        if (entry.second == 1)
            count++;
    }
    
    return count;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
       cout <<solve() << endl;
    }
}
