#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define sorty sort(v.begin(),v.end())
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define um unordered_map<>hmap
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
ll noofdiv(ll n){
    
}


int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    ll t,n ,a,x;
    cin >> t;
    while(t--) {
        ll n;
        cin>>n;
        ll maxi=INT_MIN;
        ll mini=INT_MAX;
       vector<long long>d(n);
        while(n--)
        {
            ll x;
            cin>>x;
            d.push_back(x);
            maxi=max(x,maxi);
            mini=min(x,mini);
        }
        x=maxi*mini;
        sort(d.begin(),d.end());
 vector<long long>dd;          
ll cnt=0;
for (ll i = 2; i*i <= n; i++)
{
    if(n%i==0){
        dd.push_back(i);
    if(n/i!=i)dd.push_back(n/i);
   }
}
sort(dd.begin(),dd.end());
if(dd=d){
    cout<<x<<endl;
}
else cout<<"-1"<<endl;
        // if(noofdiv(maxi*mini)==n)cout<<maxi*mini<<endl;
        // else cout<<"-1"<<endl;
    }
}