#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n  ,m;
    cin>>n>>m;
    vector<long long>tickets(n);
    vector<long long>price(m);
    for(int i=0;i<n;i++)cin>>tickets[i];
    for(int j=0;j<m;j++)cin>>price[j];
    int i=0;
    int j=0;
    long long count=0;
    vector<long long>res(n , -1);
    sort(tickets.begin() , tickets.end());
    sort(price.begin() , price.end());
    while(i < n && j < m ){
        if(tickets[i]>=price[j]){
           res[i]=price[j];

            j++;
        }
        else if(price[j]>tickets[i]){
            i++;
        }
           
    }
    for(int i=0;i<m;i++){
        cout<<res[i]<<endl;
        
    }
}


int main() {
    solve();
   
}