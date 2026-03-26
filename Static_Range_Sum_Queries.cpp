#include<iostream>
#include<vector>
using namespace std;

void buildsegTree(int node , int start , int end ,vector<int>&a , vector<int>&segt){
    if(start==end){
        segt[node]=a[start];
    }
    else{
        int mid=(start+end)/2;
        buildsegTree(2*node,start,mid,a,segt);
        buildsegTree(2*node+1,mid+1,end,a,segt);
        segt[node]=segt[2*node]+segt[2*node+1];
    }
}
long long rangeSum(int node , int start , int end , int l , int r , vector<int>&segt){
    if(r<start || end<l){
        return 0;
    }
    if(l<=start && end<=r){
        return segt[node];
    }
    int mid=(start+end)/2;
    long long p1=rangeSum(2*node,start,mid,l,r,segt);
    long long p2=rangeSum(2*node+1,mid+1,end,l,r,segt);
    return p1+p2;
}
void solve(){
    int n, q;
    cin>>n>>q;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    vector<int> segt(4*n);
    buildsegTree(1,0,n-1,a,segt);   
    for(int i=0; i<q; i++){
        int l,r;
        cin>>l>>r;
        cout<<rangeSum(1,0,n-1,l-1,r-1,segt)<<endl;
    }

}

int main(){
    solve();
    return 0;
}
