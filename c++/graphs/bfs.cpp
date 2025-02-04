#include<bits/stdc++.h>
using namespace std;

int main() {
    int nodes, edges;
    cout << "Enter the number of nodes: ";
    cin >> nodes;
    cout << "Enter the number of edges: ";
    cin >> edges;

    // Create an empty adjacency list
    vector<int> adj[nodes + 1];

    cout << "Enter the edges (node1 node2):" << endl;
    for(int i = 0; i < edges; i++) {
        int node1, node2;
        cin >> node1 >> node2;

        // Add an edge from node1 to node2
        adj[node1].push_back(node2);

        // If the graph is undirected, add an edge from node2 to node1
        adj[node2].push_back(node1);
    }
   // bfs
   queue<int>q;
    

    // Print the adjacency list
    cout << "Adjacency List:" << endl;
    for(int i = 1; i <= nodes; i++) {
        cout << "Node " << i << ": ";
        for(int j = 0; j < adj[i].size(); j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}