#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int bfs(int n, vector<vector<int>>& adj) {
    vector<int> dist(n+1, -1);
    queue<int> q;

    q.push(1);
    dist[1] = 0;

    while(!q.empty()) {
        int node = q.front();
        q.pop();

        for(auto child : adj[node]) {
            if(dist[child] == -1) {
                dist[child] = dist[node] + 1;
                q.push(child);
            }
        }
    }

    return dist[n];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> rail(n+1);
    vector<vector<bool>> israil(n+1, vector<bool>(n+1, false));

    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        rail[u].push_back(v);
        rail[v].push_back(u);
        israil[u][v] = israil[v][u] = true;
    }

    vector<vector<int>> road(n+1);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(!israil[i][j]) {
                road[i].push_back(j);
                road[j].push_back(i);
            }
        }
    }

    int ans;

    if(israil[1][n]) {
        ans = bfs(n, road);
    } else {
        ans = bfs(n, rail);
    }

    cout << ans << '\n';
}
