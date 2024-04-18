#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(long long s, long long e, vector<int>& ans) {
    vector<bool> prime(e + 1, true);
    prime[0] = prime[1] = false;
    for (long long p = 2; p * p <= e; p++) {
        if (prime[p] == true) {
            for (long long i = p * p; i <= e; i += p)
                prime[i] = false;
        }
    }

    // Store all prime numbers in the ans vector
    for (long long p = max(2ll, s); p <= e; p++) {
        if (prime[p]) {
            ans.push_back(p);
        }
    }
}

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
    long long n, k, r;
    cin >> n >> k;
    vector<int> ans;
    SieveOfEratosthenes(2, n, ans);

    bool flag = false;
    int cnt = 0;
    if(ans.size()>=3&&k>0){
    for (int i = 0; i < ans.size() - 2; i++) {
        r = ans[i] + ans[i + 1] + 1;
        if (r <= ans.back() && isPrime(r)) {
            cnt++;
        }
    }
    }
    if (cnt == k||(k==0&&ans.size()<3)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
