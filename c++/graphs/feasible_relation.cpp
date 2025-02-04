#include <bits/stdc++.h>
using namespace std;

class DSU {
public:
    vector<int> parent, rank;

    DSU(int n) {
        parent.resize(n + 1);
        rank.resize(n + 1, 0);
        for (int i = 1; i <= n; i++) parent[i] = i;
    }

    int findpar(int x) {
        if (parent[x] == x) return x;
        return parent[x] = findpar(parent[x]); // Path compression
    }

    void combine(int x, int y) {
        int rootX = findpar(x);
        int rootY = findpar(y);
        if (rootX != rootY) {
            if (rank[rootX] > rank[rootY]) {
                parent[rootY] = rootX;
            } else if (rank[rootX] < rank[rootY]) {
                parent[rootX] = rootY;
            } else {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
        }
    }
};

void solve() {
    long long i, j, n, m;
    cin >> n >> m;
    DSU ds(n);
    vector<pair<int, int>> vi; // Store inequality constraints

    for (int i = 0; i < m; i++) { 
        int u, v;
        string c;
        cin >> u >> c >> v;

        if (c == "!=") {  
            vi.push_back({u, v}); 
        } else { 
            ds.combine(u, v);
        }
    }

    for (auto it : vi) {
        if (ds.findpar(it.first) == ds.findpar(it.second)) { 
            cout << "NO" << endl; 
            return;
        }
    }

    cout << "YES" << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
