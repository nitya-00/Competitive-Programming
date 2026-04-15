#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solve(){
    int n ;
    cin >> n;
vector<int>a(n);
    for(int i=0;i<n;i++){   
        cin >> a[i];
    }   
    sort(a.rbegin(),a.rend());
    
    int msum=0;
    int sum=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(sum+a[i]>=0){
            sum+=a[i];
            msum++;
        }
    }
    ans=max(ans,msum);
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
}