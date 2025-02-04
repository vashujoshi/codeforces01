#include<bits/stdc++.h>
             
using namespace std;
int main()
 {
    int n,m;
    vector<int>adjaceny[n+1];
    cin>>n>>m;
for(int i=0;i<m;i++){
   int u,v;
   cin>>u>>v;
   //if directed u-->v only 1 first one
   adjaceny[u].push_back(v);
   adjaceny[v].push_back(u);
}
 return 0;
}