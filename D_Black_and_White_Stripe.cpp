#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef priority_queue<int, vector<int>, greater<int>> pqmi;
typedef priority_queue<int>pqma;
typedef priority_queue<pair<int,int>>ppqma;
typedef vector<vl>		vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
    uniform_int_distribution<int> uid(0,lim-1);
    return uid(rang);
}
int mpow(int base, int exp); 
void ipgraph(int n, int m);
void dfs(int u, int par);

const long long INF=1e18;
const int mod = 1'000'000'007;
const int N = 3e5, M = N;
//=======================

vi g[N];
int a[N];
void solve() {
    ll n, k;
    string s;
    cin >> n >> k >> s;
    
    ll cnt = 0; // Initialize counter for 'W' occurrences
    ll mini = INF; // Initialize mini to a large value
    
    // Iterate through the string
    for (int i = 0, j = 0; j < n; ++j) {
        // Increment count if the current character is 'W'
        if (s[j] == 'W') cnt++;
        
        // If the window size is greater than k
        if (j - i + 1 >= k) {
            // Update mini with the minimum of current cnt and mini
            mini = min(cnt, mini);
            
            // Decrement cnt if the character at position i is 'W'
            if (s[i] == 'W') cnt--;
            
            // Move the window by incrementing i
            i++;
        }
    }
    
    // If no 'W' is found in the string, print 0; otherwise, print mini
    if (mini == INF) cout << 0 << endl;
    else cout << mini << endl;
}

void read(vi &v){
for(auto &i:v)
cin >> i;
}

// #include <bits/stdc++.h>
// #include <math.h>
 
// using namespace std;
// typedef long long ll;
// typedef unsigned long long ull;
// # define M_PI  3.14159265358979323846
 
//     void solve (){
//         int n,k;
//         cin>>n>>k;
//         string str;
// 		cin>>str;
// 		vector<int>a(n+1);
// 		for(int i=1;i<=n;i++){
// 			a[i]=a[i-1];
// 			if(str[i-1]=='B')a[i]++;
// 		}
// 		int tmp=k;
// 		for(int i=k;i<=n;i++){
// 			tmp=min(tmp,k-(a[i]-a[i-k]));
// 		}
// 		cout<<tmp<<"\n";
//     }

//     int main(){
//         ios::sync_with_stdio(0);
//         cin.tie(0);
//         cout.tie(0);
//         cout<<fixed;
//         cout<<setprecision(10);
// //        freopen("timber_input.txt", "r", stdin);
// //        freopen("timber_output.txt", "w", stdout);
//         int t=1;
//         cin>>t;
//         for(int i=1;i<=t;i++){
// //            cout<<"Case #"<<i<<": ";
//             solve();
//         }
//         return 0;
//     }
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

int mpow(int base, int exp) {
  base %= mod;
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = ((ll)result * base) % mod;
    base = ((ll)base * base) % mod;
    exp >>= 1;
  }
  return result;
}

void ipgraph(int n, int m){
    int i, u, v;
    while(m--){
        cin>>u>>v;
    u--, v--;
        g[u].pb(v);
        g[v].pb(u);
    }
}

void dfs(int u, int par){
    for(int v:g[u]){
        if (v == par) continue;
        dfs(v, u);
    }
}

