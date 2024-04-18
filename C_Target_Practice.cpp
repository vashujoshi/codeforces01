#include<bits/stdc++.h>
using namespace std;
const int grid_size = 10;
void solve() {
	int ans = 0;
	for (int i = 0; i < 10; ++i) {
		string s;
		cin >> s;
		for (int j = 0; j < 10; ++j) {
			if (s[j] == '.') {
				continue;
			}
			ans += min({i + 1, 10 - i, j + 1, 10 - j});
		}
	}
	cout << ans << "\n";
}
int main() {
    // ... (other declarations and initializations)

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    

    return 0;
}
