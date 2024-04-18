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
typedef priority_queue<pair<int,int>>ppqma;
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
// bool comp(int a,int b){
//   return a>b;
// }

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    ll t ,n,k;
    string str1,str2;
    cin >> t;
    while(t--) {
    ll cnt=0;
      ppqma maxh;
      cin>>n>>k;
      vi v(n);
      vi ans;
      for (int i = 0; i <n; i++)
      {
        cin>>v[i];
        maxh.push({v[i],n -(i+1)});
      }
      while(!maxh.empty()){
      
        pii monster =maxh.top();
         maxh.pop();
         monster.first-=k;
         if(monster.first>0){
          maxh.push(monster);
         }
         else ans.push_back(n - monster.second);
      }
      
       for(auto a:ans){
        cout<<a<<" ";
       }
       cout<<endl;
    }

    return 0;
}
