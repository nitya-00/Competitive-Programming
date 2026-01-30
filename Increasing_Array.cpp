#include <bits/stdc++.h>
using namespace std;
int solve(){
    long long n;
    cin>>n;
    vector<long long>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    long long maxi=0;
    for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1]){
                maxi+=(nums[i-1]-nums[i]);
                nums[i]=nums[i-1];
            }
       
    }
    return maxi;
}


int main() {
   cout << solve();
}
