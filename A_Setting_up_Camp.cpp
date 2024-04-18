#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  ll i, j, n, m, k, cnt=0;
  string s, s1;
  cin >> n >> m >> k;
  if(m % 3 == 0){
    cout << n + m / 3 + static_cast<int>(ceil(k / 3.0)) << endl;
  }
  else if(m % 3 == 1){
    if(k >= 2){
        cout << n + static_cast<int>(ceil(m / 3.0)) + static_cast<int>(ceil((k - 2) / 3.0)) << endl;
    }
    else cout << "-1" << endl;
  }
  else{
    if(k >= 1){
        cout << n + static_cast<int>(ceil(m / 3.0)) + static_cast<int>(ceil((k - 1) / 3.0)) << endl;
    }
    else cout << "-1" << endl;
  }
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}