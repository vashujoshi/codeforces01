#include<bits/stdc++.h>
using namespace std;
#define vec vector<int>
#define vecp vector<pair<int,int>>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define fi first
#define se second
#define fr1(i,a,b) for(int i=a;i<b;i++)
#define fr2(i,a,b) for(int i=a;i>=b;i--)
#define fr3(i,a,b) for(int i=a;i<=b;i++)
#define umap unordered_map<int,int>
#define omap map<int,int>
#define uset unordered set<int>
#define oset set<int>
#define pr pair<int,int>
#define endl "\n"
#define mod 1000000007

void solve()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int countneg=0;
    int mini=INT_MAX;
    ll S=0;
    fr1(i,0,n)
    {
        fr1(j,0,m)
        {
            cin>>a[i][j];
            if(a[i][j]<0)
                countneg++;
            mini=min(abs(a[i][j]),mini);
            S+=(abs(a[i][j]));
        }

    }
    if(mini==0)
        cout<<S<<endl;
    else
    {
        if(countneg%2==0)
            cout<<S<<endl;
        else
            cout<<S-(2*mini)<<endl;
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    fr3(i,1,t){
        solve();
    }
}

