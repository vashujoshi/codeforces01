#include <bits/stdc++.h>
using namespace std;

const int N = 3e5;

int arr[N];
int brr[N];

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            cin >> brr[i];
        }
        sort(arr, arr + n);
        sort(brr, brr + n);

        bool flag = true; // Reset flag to true for each test case
        for (int i = 0; i < n; i++) {
            if(arr[i] != brr[i]) {
                flag = false;
                break;
            }
        }
        if(flag) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}
