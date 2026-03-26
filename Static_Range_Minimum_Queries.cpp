#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;    

void buildsegt(int node , int st , int end , vector<int>&a , vector<int>&segT){
    if(st==end){
        segT[node]=a[st];
    }
    else{
        int mid=(st+end)/2;
        buildsegt(2*node , st, mid , a , segT);
        buildsegt(2*node+1 , mid+1 , end, a , segT);
        segT[node]=min(segT[2*node],segT[2*node+1]);

    }
}

int minrange(int node ,int st , int end ,int l , int r , vector<int>&segT){
    // No overlap
    if(end < l || st > r){
        return INT_MAX;
    }
    if(st >= l && end <= r){
        return segT[node];
    }

    int mid=(st+end)/2;
    int left=minrange(2*node , st , mid , l , r , segT);
    int right=minrange(2*node+1 , mid+1 , end , l , r , segT);
    return min(left , right);
}

void solve(){
    int n, q;
    cin>>n>>q;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    vector<int> segT(4*n);
    buildsegt(1,0,n-1,a,segT);
    for(int i=0; i<q; i++){
        int l,r;
        cin>>l>>r;
        cout<<minrange(1,0,n-1,l-1,r-1,segT)<<endl;
    }
}
int main(){
    solve();
    return 0;
}