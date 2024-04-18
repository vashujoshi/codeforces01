// #include<bits/stdc++.h>
// using namespace std;
// #define gc getchar_unlocked
// #define fo(i,n) for(i=0;i<n;i++)
// #define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
// #define ll long long
// #define si(x)	scanf("%d",&x)
// #define sl(x)	scanf("%lld",&x)
// #define ss(s)	scanf("%s",s)
// #define pi(x)	printf("%d\n",x)
// #define pl(x)	printf("%lld\n",x)
// #define ps(s)	printf("%s\n",s)
// #define deb(x) cout << #x << "=" << x << endl
// #define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
// #define pb push_back
// #define mp make_pair
// #define F first
// #define S second
// #define all(x) x.begin(), x.end()
// #define clr(x) memset(x, 0, sizeof(x))
// #define sortall(x) sort(all(x))
// #define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
// #define PI 3.1415926535897932384626
// typedef pair<int, int>	pii;
// typedef pair<ll, ll>	pl;
// typedef vector<int>		vi;
// typedef vector<ll>		vl;
// typedef vector<pii>		vpii;
// typedef vector<pl>		vpl;
// typedef vector<vi>		vvi;
// typedef priority_queue<int, vector<int>, greater<int>> pqmi;
// typedef priority_queue<int>pqma;
// typedef priority_queue<pair<int,int>>ppqma;
// typedef vector<vl>		vvl;
// mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
// int rng(int lim) {
//     uniform_int_distribution<int> uid(0,lim-1);
//     return uid(rang);
// }
// int mpow(int base, int exp); 
// void ipgraph(int n, int m);
// void dfs(int u, int par);

// const long long INF=1e18;
// const int mod = 1'000'000'007;
// const int N = 3e5, M = N;
// //=======================

// vi g[N];
// int a[N];

// void read(vi &v){
// for(auto &i:v)
// cin >> i;
// }
// void solve() {
//     int n, l, r;
//     cin >> n >> l >> r;
//     vector<int> ans(n);
//     bool flag = true;
//     for(int i = 1; i <= n; i++) {
//         int k; // Declare variable k
//         if(l % i == 0) {
//             ans[i - 1] = l;
//         } else {
//             k = l / i;
//             k = (k + 1) * k;
//             if(k <= r) {
//                 ans[i - 1] = k;
//             } else {
//                 flag = false;
//                 break;
//             }
//         }
//     }
//     if(flag) {
//         cout << "YES\n";
//         for(int i = 0; i < n; i++) // Correct loop condition
//             cout << ans[i] << " "; // Correctly print ans[i]
//         cout << endl;
//     } else {
//         cout << "NO\n";
//     }
// }


// int main() {
//     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     srand(chrono::high_resolution_clock::now().time_since_epoch().count());

//     int t = 1;
//     cin >> t;
//     while(t--) {
//       solve();
//     }

//     return 0;
// }

// int mpow(int base, int exp) {
//   base %= mod;
//   int result = 1;
//   while (exp > 0) {
//     if (exp & 1) result = ((ll)result * base) % mod;
//     base = ((ll)base * base) % mod;
//     exp >>= 1;
//   }
//   return result;
// }

// void ipgraph(int n, int m){
// int i, u, v;
// while(m--){
// cin>>u>>v;
//     u--, v--;
// g[u].pb(v);
// g[v].pb(u);
// }
// }

// void dfs(int u, int par){
// for(int v:g[u]){
// if(v == par) continue;
// dfs(v, u);
// }
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ls(x) x<<1
#define rs(x) (x<<1)|1
#define rep(i,a,b) for(int (i)=a;(i)<=(b);(i)++)
#define rev(i,a,b) for(int (i)=a;(i)>=(b);(i)--)
#define pii pair<int,int>
#define pll pair<long long, long long>
#define lowbit(x) x&-x
const int N=2e5+10;
const int maxn=2e5+100;
const int inf=0x3f3f3f3f;
const ll mod=998244353;

int n,m,_;
int a[N];

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>_;
    rep(kase,1,_) {
        int l,r;
        vector<int> ans;
        map<int,int> mp;
        bool ok=1;
        cin>>n>>l>>r;
        rep(i,1,n) {
            int tmp=r/i;
            if(tmp*i>=l&&tmp*i<=r) ans.push_back(tmp*i);
            else {
                ok=0; break;
            }
        }
        if(!ok) cout<<"NO"<<'\n';
        else {
            cout<<"YES"<<'\n';
            for(auto i: ans) cout<<i<<' ';
            cout<<'\n';
        }
    }
    return 0;
}
