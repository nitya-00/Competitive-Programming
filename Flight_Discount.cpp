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

void dikstra(int m , vector<vector<pair<int,int>>>&adj , vector<long long>& dist , vector<int>& parent, int& maxi){
    
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
                maxi=max((1LL)*maxi, dist[next]);
                pq.push({dist[next], next}); 
                parent[next]=node;   
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
        //adj[v].push_back({u,w});    
    }
    vector<long long> dist(n+1, LLONG_MAX);
    vector<int>parent(n+1, -1);
  int maxi=INT_MIN;
    dikstra(n, adj, dist , parent , maxi);

    if(dist[n]==LLONG_MAX){
        cout<<-1<<endl;
        return;
    }
    
    vector<int> path;
    int curr = n;

    while(curr != -1) {
        path.push_back(curr);
        curr = parent[curr];
    }

    reverse(path.begin(), path.end());
    int ans=0;
    for(int node : dist) {
        ans += node;
    }
    cout<<ans-maxi/2<<endl;
}

int main(){
    solve();
    return 0;
}