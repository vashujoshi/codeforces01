#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    #define ll long long 
    ll t;
    cin >> t;

    unordered_set<string> m; // Using unordered_set instead of unordered_map for storing unique strings

    while (t--) {
        string s;
        cin >> s;

        if (m.find(s) != m.end()) {
            cout << "YES" << endl;
        } else {
            m.insert(s);
            cout << "NO" << endl;
        }
    }

    return 0;
}
