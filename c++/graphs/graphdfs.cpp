#include<bits/stdc++.h>
using namespace std;

void dfs(int i, vector<int>& status, vector<int> adj[]) {
    if(status[i] == 0) {
        status[i] = 1;
        for(int j = 0; j < adj[i].size(); j++) {
            dfs(adj[i][j], status, adj);
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> status(n, 0);
    vector<int> adj[n];

    adj[0].push_back(2);
    adj[0].push_back(1);
    adj[0].push_back(4);
    adj[1].push_back(5);
    adj[1].push_back(8);
    adj[1].push_back(9);

    for(int i = 0; i < n; i++) {
        if(status[i] == 0) {
            dfs(i, status, adj);
        }
    }

    return 0;
}
