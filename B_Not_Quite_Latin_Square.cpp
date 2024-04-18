#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t;
    cin >> t;

    while(t--) {
        char v[3][3];
        int cnt[3] = {0}; // Initialize cnt array to zero

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> v[i][j];
                ++cnt[v[i][j] - 'A']; // Count occurrences of 'A', 'B', and 'C'
            }
        }

        if (cnt[0] == 2) {
            cout << "A" << endl;
        } else if (cnt[1] == 2) {
            cout << "B" << endl;
        } else {
            cout << "C" << endl;
        }
    }

    return 0;
}
