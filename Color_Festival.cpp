#include<iostream>
#include<vector>
#include<queue>
#include<set>
using namespace std;
void solve() {
    int n;
    cin>> n ;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>> a[i] ;
    int cnt=0;
   set<int> mp;
    for(int i=0;i<n;i++){
        mp.insert(a[i]); 
    }
    cout<< mp.size()<<'\n';
    
   
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        int t;
        cin>>t;
        while(t--){
            solve();
        }
    return 0;
}
