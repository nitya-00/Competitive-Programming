#include <bits/stdc++.h>
using namespace std;
int solve(){
    int n;
    cin>>n;
    vector<pair<int , int>>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    
    //sort(a.begin() , a.end());
    //sort(b.begin() , b.end());
    int cost=1000;
    bool found=false;
    for(int i=0;i<n;i++){
        if(a[i].first>=7){
                cost=min(cost , a[i].second);
                found=true;
        }
        
    }
    if(!found){
        return -1;
    }
    return cost;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
       cout <<solve() << endl;
    }
}