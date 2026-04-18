#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    int n ;
    cin >> n ;
    int k = n / 2;
    vector<pair<int, int>> time(n);
    for(int i=0;i<n;i++){
        cin >> time[i].first >> time[i].second;
    }
    sort(time.begin(), time.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if(a.first == b.first) {
            return a.second < b.second; 
        }        return a.first < b.first; 
    });
    int cnt = 0;
    int maxi=0;
    for(int i=1;i<n;i++){
        if(time[i-1].first<=time[i].first && time[i-1].second>=time[i].first){
            cnt++;
        }
        

        maxi=max(maxi,cnt);
    }
    cout << maxi << endl;
}

int main() {
    
        solve();
    
}