#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define sorty sort(v.begin(),v.end())
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
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

#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<int, char>	pic;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;


int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    ll t ,n,k;
    string s;
    cin >> t;
    while(t--) {
      cin>>n;
      ll sum=0;
      vi fruit_type(n);
      vi nutrient_val(n);
      
      for (int  i = 0; i <n; i++)
      {
        cin>>fruit_type[i];       
        cin>>nutrient_val[i];       
      }
     unordered_map<int,int>m;
     for(int i=0;i<n;i++){
      if(m.find(fruit_type[i])!=m.end())     
     {
      //phele se hai
        m[fruit_type[i]]= max(nutrient_val[i],m[fruit_type[i]] );
     }
     else {
      if(nutrient_val[i]<0)
        m[fruit_type[i]]=0;
        else 
        m[fruit_type[i]]=nutrient_val[i];
     }
     }
     for(auto it:m){
      sum+=it.second;
     }
     cout<<sum<<endl;
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

