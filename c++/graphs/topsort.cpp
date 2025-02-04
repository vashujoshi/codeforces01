#include <bits/stdc++.h>
using namespace std;
vector<int> topo;
vector<int> topologicalSort(int V, vector<int> adj[]) {
    vector<int> indeg(V, 0);
    queue<int> q;
    
    // Count indegrees of all vertices
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            indeg[v]++;
        }
    }

    // Push vertices with 0 indegree into the queue
    for (int i = 0; i < V; i++) {
        if (indeg[i] == 0) {
            q.push(i);
        }
    }

    // Perform Kahn's Algori
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        topo.push_back(u);

        for (int v : adj[u]) {
            indeg[v]--;
            if (indeg[v] == 0) {
                q.push(v);
            }
        }
    }

    // Check if there was a cycle
    return topo;
}

int main() {
    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    vector<int> adj[V];
    cout << "Enter edges (u, v) format:\n";
    for (int i = 0; i < E; i++) {
              int u,v;
              cin>>u>>v;  
              adj[u].push_back(v);
    }
   vector<int>result=topologicalSort(V,adj);
   for(auto it:result){
    cout<<it<<" ";
   }
   cout<<endl;
}