/*
    Created by:- milind0110
*/
// #pragma GCC optimize("O3")
// #pragma GCC target ("avx2")
// #pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
// #pragma GCC optimize("unroll-loops")
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <array>
#include <climits>
// #pragma comment(linker, "/STACK:268435456");
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
using namespace std;
#define int long long
// #define double long double
// #define all(x) (x).begin(),(x).end()
// #define allr(x) (x).rbegin(),(x).rend()
// #define sz(x) (int)(x).size()
// #define pb push_back
// #define ppb pop_back
// #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
// mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
// const int inf = 1e10;
const int N = 2e5 + 5;
const int inf = 1e9;
void solve(){
    int n,k;
    cin >> n >> k;
    vector<pair<int,int>> sorted(n);
    for(int i = 0; i < n; i++){
        cin >> sorted[i].second;
    }
    for(int i = 0; i < n; i++){
        cin >> sorted[i].first;
        sorted[i].first = abs(sorted[i].first);
    }
    sort(sorted.begin(),sorted.end());
    bool ok = true;
    int total = 0;
    for(auto [x,a] : sorted){
        total += a;
        if(x * k < total) ok = false;
    }
    cout << (ok ? "Yes" : "No") << "\n";
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int32_t t = 1;
    cin >> t;
    for(int32_t i = 1; i <= t; i++){
        solve();
    }
    return 0; 
}  
