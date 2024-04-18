#include<bits/stdc++.h>
using namespace std;

#define DIVYA ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define fo(i,a,b) for(i=a;i<=b;i++)
#define all(v) (v).begin(),(v).end()
#define sz(x) (ll)x.size()
#define pb push_back
#define mkp make_pair
const ll mod = 1e9 + 7;

int main() {
   
    ll t, n, i, j, k;
    string s;
    cin >> t;
    while (t--) {
        cin >> n >> k >> s;
        ll l = 1, r = n / k + 1;
        while (r > l + 1) {
            ll mid = (l + r) / 2;
            ll reqd_pairs = (mid % 2 == 0) ? (k * mid) / 2 : (mid / 2) * k;
            vi cnt(26, 0);
            for (char ch : s) cnt[ch - 'a']++;
            ll pairs = accumulate(all(cnt), 0, [](ll sum, int x) { return sum + x / 2; });
            if (pairs >= reqd_pairs) l = mid;
            else r = mid;
        }
        cout << l << "\n";
    }
    return 0;
}
