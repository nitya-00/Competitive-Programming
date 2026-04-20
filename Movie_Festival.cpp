#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    int n ;
    cin >> n ;
   // int k = n / 2;
    vector<pair<int, int>> time(n);
    for(int i=0;i<n;i++){
        cin >> time[i].first >> time[i].second;
    }
    sort(time.begin(), time.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        //if(a.first == b.first) {
         //   return a.second < b.second; 
      return a.second < b.second; 
    });
    int cnt = 1;
    int maxi=0;
    int last=time[0].second;
    for(int i=1;i<n;i++){
        if(last<=time[i].first){
            cnt++;
            last=time[i].second;
        }
        

        maxi=max(maxi,cnt);
    }
    cout << maxi << endl;
}

int main() {
    
        solve();
    
}