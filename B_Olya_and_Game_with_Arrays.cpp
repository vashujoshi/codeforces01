/*
    Created by:- milind0110
*/
// #pragma GCC optimize("O3,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include<bits/stdc++.h>

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;
#define int long long
#define fr1(i,a,b) for(int i = a; i < b; i++)
#define fr2(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define allr(x) (x).rbegin(),(x).rend()
#define sz(x) (int)(x).size()
#define pb push_back
#define ppb pop_back
const int mod = 998244353;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
const int N = 2e5 + 5;
const int inf = 1e9;

void solve(){
    int n;
    cin >> n;
    int mn = inf;
    int amn = inf;
    int ans = 0;
    fr1(i,0,n){
        int m;
        cin >> m;
        vector<int> temp(m);
        fr1(j,0,m)
            cin >> temp[j];
        sort(all(temp));
        mn = min(mn,temp[1]);
        ans += temp[1];
        amn = min(amn,temp[0]);
    }

    cout << ans - mn + amn << "\n";
}

signed main() {
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    // cerr << "Time measured: " << fixed << setprecision(10) << elapsed.count() * 1e-9 << " seconds.\n"; 
    
}