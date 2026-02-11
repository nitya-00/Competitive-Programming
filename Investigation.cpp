#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int dfs(int node , vector<vector<int>>&adj , vector<bool>&visited){
    visited[node] = true;
    int count = 1;
    for(auto it : adj[node]){
        if (!visited[it]){
            count += dfs(it , adj , visited);
        }
    }
    return count;
}
int solve(){
    int n , m;
    cin >> n >> m;
    vector<vector<int>> adj(n+1);
    for(int i = 0 ; i < m ; i++){
        int u , v ;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    for(int i=0;i<n;i++){
        vector<int>ways;
        vector<bool> visited(n+1 , false);
        int minflight=0;
        int maxflight=0;
        
       


    }
}
int main(){
    solve();
    return 0;
}