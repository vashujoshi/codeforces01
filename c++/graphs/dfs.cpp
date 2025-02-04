// class Solution {
//   public:
//     // Function to return a list containing the DFS traversal of the graph.
//     void dfs(vector<int> adj[],int node,vector<int>&visited,vector<int>&list) {
//         // Code here
//         visited[node]=1;
//         list.push_back(node);
//         for(auto v :adj[node]){
//             if(!visited[v]){
//                 dfs(adj,v,visited,list);        
//              }
//     }
    
// }
//     vector<int> dfsOfGraph(int V, vector<int> adj[]) {
//         vector<int>visited(V,0);
//         vector<int>list;
        
//          dfs(adj,0,visited,list);
//         // Code here
//            return list;
//     }
    
    
    
// };

// void dfs(int u, int par){
// for(int v:g[u]){
// if(v == par) continue;
// dfs(v, u);
// }
// }

