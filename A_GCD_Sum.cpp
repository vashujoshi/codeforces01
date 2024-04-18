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
long long int gcd_sum(long long int num) {
// returns gcd-sum
long long int tmp = num, digitsum = 0;

    while (tmp > 0) {
        digitsum += tmp % 10;
        tmp /= 10;
    }

    long long int gcd = __gcd(num, digitsum);
    return gcd;
}

int main(void) {
int t;
cin >> t;

    while (t--) {
        long long int n;
        cin >> n;
        if (gcd_sum(n) != 1) {
            cout << n << endl;
        } else if (gcd_sum(n + 1) != 1) {
            cout << n + 1 << endl;
        } else if (gcd_sum(n + 2) != 1) {
            cout << n + 2 << endl;
        }
    }
    return 0;
}
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
// void dfs(int u, int par){
//     for(int v:g[u]){
//         if (v == par) continue;
//         dfs(v, u);
//     }
// }

// // int lcm (int a, int b) {
// //     return a / gcd(a, b) * b;
// // }
