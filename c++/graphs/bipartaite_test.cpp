// bool dfs(int node, int c, vector<int> adj[], vector<int>& vis, vector<int>& col) {
//     vis[node] = 1;
//     col[node] = c;
//     for (auto it : adj[node]) {
//         if (vis[it] == 0) {
//             if (dfs(it, c ^ 1, adj, vis, col) == false) {
//                 return false;
//             }
//         } else {
//             if (col[node] == col[it]) {
//                 return false;
//             }
//         }
//     }
//     return true;
// }