#include <iostream>
using namespace std;
void MST(int n , vector<vector<pair<long long ,long long>>> &adj){
    priority_queue<pair<long long,long long>, vector<pair<long long,long long>>, greater<pair<long long,long long>>> pq;
    vector<bool> visited(n+1, false);
    long long res=0;

    pq.push({0,1}); // {wt , node}

    while(!pq.empty()){
        auto [wt, node] = pq.top();
        pq.pop();
        if(visited[node]) continue;
        visited[node] = true;
        res += wt;
        for(auto [child , chwt] : adj[node]){
            if(!visited[child]){
                pq.push({chwt, child});
            }
        }

    }
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            cout<<"IMPOSSIBLE\n";
            return;
        }
    }
    cout<<res<<'\n';
}
void solve() {
    int n , m ;
    long a , b , c;
    cin>> n >> m ;
    vector<vector<pair<long long ,long long >>> adj(n+1);
    for(int i = 0 ; i < m; i++){
        cin>> a >> b >> c ;     
        adj[a].push_back({b,c});
        adj[b].push_back({a,c});
    }
   MST(n, adj);
    
   
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
