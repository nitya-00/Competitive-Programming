#include <bits/stdc++.h>
using namespace std;
int solve(){
    int n , x;
    cin>>n >>x;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1)return max(a[0] , 2*(x-a[0]));
    vector<int>temp;
    
    for(int i=1;i<n;i++){
        temp.push_back(a[i]-a[i-1]);
    }
    temp.push_back(2*(x - a[n - 1]));
    int maxi=*max_element(temp.begin() , temp.end());
    return maxi;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
       cout <<solve() << endl;
    }
}
