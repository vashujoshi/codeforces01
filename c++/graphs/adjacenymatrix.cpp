#include<bits/stdc++.h>
             
using namespace std;
int main()
 {
int n,m;
cin>>n>>m;
int arr[n+1][m+1];
memset(arr,0,sizeof(arr));
while(m--){
    int u,v;
    cin>>u>>v;
    arr[u][v]=1;
    arr[v][u]=1;
}
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
 return 0;
}