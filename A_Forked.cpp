//#pragma GCC optimize("O3")
//#pragma GCC optimize("Ofast")
//#pragma GCC optimize("unroll-loops")
//#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")


#include<bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;


struct custom_hash {
        static uint64_t splitmix64(uint64_t x) {
                // http://xorshift.di.unimi.it/splitmix64.c
                x += 0x9e3779b97f4a7c15;
                x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
                x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
                return x ^ (x >> 31);
        }

        size_t operator()(uint64_t x) const {
                static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
                return splitmix64(x + FIXED_RANDOM);
        }
};
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
template<typename T>
T rand(T a, T b){
    return uniform_int_distribution<T>(a, b)(rng);
}

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
typedef tree<pair<int,int>, null_type, less<pair<int,int>>, rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;
typedef vector<int> vi;


#define rep(i, a, b) for(int i = a; i < b; i++)
#define all(x) begin(x), end(x)
#define sz(x) static_cast<int>((x).size())
#define int long long

const ll mod = 998244353;
const ll INF = 1e18;

/* ----------------------------------------------------- GO DOWN ---------------------------------------------------------------------- */




signed main() {

        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        int t;
        cin >> t;
        while (t--) {

                int a, b;
                int x1, y1, x2, y2;
                cin >> a >> b >> x1 >> y1 >> x2 >> y2;
                set<pair<int, int>> s;
                s.insert({x1 + a, y1 + b});
                s.insert({x1 - a, y1 + b});
                s.insert({x1 + a, y1 - b});
                s.insert({x1 - a, y1 - b});
                s.insert({x1 + b, y1 + a});
                s.insert({x1 - b, y1 + a});
                s.insert({x1 + b, y1 - a});
                s.insert({x1 - b, y1 - a});
                int ans = 0;
                set<pair<int, int>> s2;
                s2.insert({x2 + a, y2 + b});
                s2.insert({x2 - a, y2 + b});
                s2.insert({x2 + a, y2 - b});
                s2.insert({x2 - a, y2 - b});
                s2.insert({x2 + b, y2 + a});
                s2.insert({x2 - b, y2 + a});
                s2.insert({x2 + b, y2 - a});
                s2.insert({x2 - b, y2 - a});

                for (auto u : s2) if (s.find(u) != s.end()) ans++;
                cout << ans << "\n";


        }

        
       
}