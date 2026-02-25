#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<climits>
#include<set>
#include<map>
#include<stack>

using namespace std;

void solve(){
    int n, m;
    cin>>n;
    vector<int>a(n);
    int cnt=0;
     bool found = false;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == 67){
            found = true;
        }
    }

    if(found)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)  {
        solve();
        //cout<<endl;
        
    }
    return 0;
    
}