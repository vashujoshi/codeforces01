#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;
        int arr[3];
        for (int i = 0; i < 3; i++) {
            cin >> arr[i];
        }

        int cnt = 0;
        if (arr[x - 1] != 0) {
            cnt++;
            x = arr[x - 1];
        }

        if (arr[x - 1] != 0) {
            cnt++;
            x = arr[x - 1];
        }

        if (cnt == 2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
