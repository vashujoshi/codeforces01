#include <iostream>
#include <chrono>
using namespace std;
using ll = long long;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        ll n;
        cin >> n;
        int p, q;
        
        for (p = n + 1; ; p++) {
            if (isPrime(p)) {
                break;
            }
        }
        
        for (q = p + n; ; q++) {
            if (isPrime(q)) {
                break;
            }
        }
        
        cout << min(1LL * p * q, 1LL * p * p * p) << endl;
    }

    return 0;
}
