/*
    Created by:- milind0110
*/
#include<bits/stdc++.h>

using namespace std;
// #define int long long
#define fr1(i,a,b) for(int i = a; i < b; i++)
#define fr2(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(),(x).end()
#define allr(x) (x).rbegin(),(x).rend()
#define sz(x) (int)(x).size()
#define pb push_back
#define ppb pop_back

const int N = 2e5 + 10;
const int inf = 1e9;

void solve(){
    int n;
    cin >> n;
    int ans = 0;
    vector<int> a(n);
    fr1(i,0,n){
        cin >> a[i];
    }
    map<int,int> mx;
    int cnt = 1;
    fr1(i,1,n){
        if(a[i] != a[i - 1]){
            mx[a[i - 1]] = max(mx[a[i - 1]],cnt);
            cnt = 1;
        } else 
            cnt++;
    }
    mx[a[n - 1]] = max(mx[a[n - 1]],cnt);
    vector<int> b(n);
    fr1(i,0,n){
        cin >> b[i];
    }
    for(auto [x,y] : mx){
        ans = max(ans,y);
    }
    cnt = 1;
    fr1(i,1,n){
        if(b[i] != b[i - 1]){
            ans = max(ans,cnt + mx[b[i - 1]]);
            cnt = 1;
        } else 
            cnt++;
    }
    ans = max(ans,cnt + mx[b[n - 1]]);
    cout << ans << "\n";

}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    
}