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

void dikstra(int m , vector<vector<pair<int,int>>>&adj , vector<long long>& dist){
    
    dist[1]=0;
    priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<pair<long long,int>>> pq;
    //dist, node
    pq.push({0,1});
    while(!pq.empty()){
        long long d=pq.top().first;
        int node=pq.top().second;
        pq.pop();
        if(d>dist[node])continue;
        for(auto nei:adj[node]){
            int next=nei.first;
            int weight=nei.second;
            if(dist[node]+weight<dist[next]){
                dist[next]=dist[node]+weight;
                pq.push({dist[next], next});    
             }
        }
    }
    
}

void solve(){
    int n, m;
    cin>>n>>m;
    vector<vector<pair<int,int>>> adj(n+1);
    for(int i=0;i<m;i++){
        int u, v, w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
       // adj[v].push_back({u,w});    
    }
    vector<long long> dist(n+1 , LLONG_MAX);
  
    dikstra(n, adj, dist);
    if(dist[n]==LLONG_MAX)cout<<-1<<endl;
    else {
        for(int i=1;i<=n;i++){
            cout<<dist[i]<<" ";
        }
    }
}

int main(){
    solve();
    return 0;
}