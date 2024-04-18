#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    string s;
    cin >> s;

    // Preprocessing: Calculate cumulative count of 'a' until each index
    vector<int> cnt(s.size() + 1, 0);
    for (int i = 0; i < s.size(); ++i) {
        cnt[i + 1] = cnt[i] + (s[i] == 'a');
    }

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        // Calculate count of 'a' within range [n, k] using preprocessing
        int ans = cnt[k] - cnt[n - 1];
        cout << ans << endl;
    }

    return 0;
}
