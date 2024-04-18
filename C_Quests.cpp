#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define sorty sort(v.begin(),v.end())
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define bp __builtin_popcount
#define umii unordered_map<int,int>mp
#define umci unordered_map<char,int>mp
#define umcl unordered_map<char,long>mp
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
typedef pair<int, pair<int,int>>ppi;
typedef pair<int, char>	pic;
typedef pair<ll, ll>	pl;
typedef priority_queue<int, vector<int>, greater<int>> pqmi;
typedef priority_queue<int>pqma;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
    uniform_int_distribution<int> uid(0,lim-1);
    return uid(rang);
}
int mpow(int base, int exp); 
void ipgraph(int n, int m);
void dfs(int u, int par);

const int mod = 1'000'000'007;
const int N = 3e5, M = N;
//=======================

vi g[N];
int a[N];


int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    ll t ,n,k;
    string str1,str2;
    cin >> t;
    while(t--) {
      cin>>n>>k;
vi v(n);
vi b(n);
vi sum(n);
vi maxb(n);
cin>>v[0];
sum[0]=v[0];
//prefix sum
for (int i = 1; i <n; i++)
{
    cin>>v[i];
    sum[i]=v[i]+sum[i-1];

}
cin>>b[0];
maxb[0]=b[0];
for (int i = 1; i <n; i++)
{
    cin>>b[i];
    maxb[i]=max(maxb[i-1],b[i]);
}

ll ans=0;
k--;
    for (ll i = 0; i <n; i++)
    {
        ans=max(ans,sum[i]+(k-i)*maxb[i]);
        /* code */
        if(i==k)break;
    }
    
cout<<ans<<endl;

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
void dfs(int u, int par){
    for(int v:g[u]){
        if (v == par) continue;
        dfs(v, u);
    }
}

