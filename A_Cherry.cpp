// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         vector<int> b(n);
//         vector<int> c(n);
        
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
//          int maxi=a[0];
//          int mini=a[0];
//          int maxp=maxi*mini;

//         for (int i = 1; i < n; i++) {
//           b.push_back(max(maxi,max(a[i],maxi)));
//           c.push_back(min(mini,min(mini,a[i])));
//           maxi=*max_element(b.begin(),b.end());
//           mini=*min_element(c.begin(),c.end());
//           maxp=mini*maxi;
//         }

//         cout << maxp << endl;
//     }

//    return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> a(n);
    for (auto &x: a) {
      cin >> x;
    }
    long long ans = 0;
    for (int i = 1; i < n; i++) {
      ans = max(ans, 1LL * a[i] * a[i - 1]);
    }
    cout << ans << '\n';
  }
  return 0;
}