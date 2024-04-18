#include <bits/stdc++.h>
#define VectL vector<long long>
#define ll long long
#define debug(x) cout << #x << " " << x << endl;
#define f(i, n) for (ll i = 0; i < n; i++)
#define fe(i, n) for (ll i = 0; i <= n; i++)
#define mod 1000000007
 
using namespace std;
void takeArr(VectL &v, int n)
{
    f(i, n)
    {
 
        cin >> v[i];
    }
}
void printArr(VectL &v)
{
    f(i, v.size())
            cout
        << v[i] << " ";
 
    cout << "\n";
}
void print2DArr(vector<VectL> &v)
{
    f(i, v.size())
    {
        f(j, v[i].size())
        {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
}
 
vector<VectL> dp(5005, VectL(5005, -1));
vector<long> ones;
vector<long> zeros;
bool issqrt(ll x)
{
    ll s = sqrt(x);
    if (x == s * s)
        return true;
    return false;
}
bool isprime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
 
    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;
 
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}
 
void solve()
{
    ll n;
    cin >> n;
    VectL v(n);
    takeArr(v, n);
    f(i, n)
    {
        if (issqrt(v[i]))
        {
            ll s = sqrt(v[i]);
            if (isprime(s))
            {
                cout << "YES\n";
                continue;
            }
        }
        cout << "NO\n";
    }
}
 
int main()
 
{
    // int t;
    // cin >> t;
    // while (t--)
    // {
 
    //     solve();
    // }
    solve();
 
    return 0;
}