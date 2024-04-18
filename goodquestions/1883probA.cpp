#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
using namespace std;
#define int long long int
typedef long long ll;
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
void solve(){
    vector<int> a(4);
    for(int i=0;i<4;i++){
        char ch;cin>>ch;
        int c=ch-'0';
        if(c==0){
            a[i]=10;
        }
        else{
            a[i]=c;
        }
    }
    // for(int i=0;i<4;i++)  cout<<a[i]<<" ";
    // cout<<endl;
    int ans=4;
    int prev=1;
    for(int i=0;i<4;i++){
        ans+=abs(a[i]-prev);
        prev=a[i];
    }
    cout<<ans<<endl;
}
 
int32_t main(){
    // freopen("input.in","r",stdin);
    // freopen("output.out","w",stdout);
    ll t;cin>>t;
    while(t--) solve();
    // 48-57:0-9 / 65-90:A-Z / 97-122:a-z
    // DECIMAL:       cout<<fixed<<setprecision(8)<<ans;
    // PREFIX+SUFFIX: exclude a element in the array
    // PREFIX_SUM:    binary array
    // DFS/BFS:       states being visited again
    // BINARY_SEARCH: maximize the minimum possible/minimize the maximum possible
    return 0;
}