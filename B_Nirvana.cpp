#include <iostream>
using namespace std;

typedef long long ll;

ll powerOfTen(int exp) {
    ll result = 1;
    for (int i = 0; i < exp; ++i) {
        result *= 10;
    }
    return result;
}

 int main() {
//     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    ll n, ld = 1, rd, cnt = -1;
    cin >> n;
    
    if (n % 10 == 0) {
        n -= 1;
        while (n != 0) {
            ld *= n % 10;
            n /= 10;
            rd = n % 10;
            cnt++;
        }
    } else {
        while (n != 0) {
            ld *= n % 10;
            n /= 10;
            rd = n % 10;
            cnt++;
        }
    }
    
    cout << max(max((rd * powerOfTen(cnt) - 1), ld)) << endl;
    
    return 0;
}
