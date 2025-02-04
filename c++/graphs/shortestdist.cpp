#include<bits/stdc++.h>

using namespace std;
vector<int> vis(6, 0);
vector<int> dist(6, INT_MAX);

void dfs(int node, vector<int> adj[], int d) {
    vis[node] = 1;
    dist[node] = d;
    for (int neighbor : adj[node]) {
        if (!vis[neighbor]) {
            dfs(neighbor, adj, d + 1);
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> adj[n + 1];
    adj[0].push_back(4);
    adj[4].push_back(0);
    adj[4].push_back(3);
    adj[3].push_back(4);
    adj[1].push_back(2);
    adj[2].push_back(1);
    adj[2].push_back(3);
    adj[3].push_back(2);
    adj[3].push_back(5);
    adj[5].push_back(3);
    adj[0].push_back(4);
    int st = 2;
    dfs(st, adj, 0);
    for (auto it : dist) {
        cout << it << " ";
    }

    return 0;
}