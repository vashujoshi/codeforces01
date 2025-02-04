#include<bits/stdc++.h>             
using namespace std;

class Disjointset{
   vector<int>parent;
   vector<int>rank;
   vector<int>size;
 public:
  Disjointset(int n){
    parent.resize(n+1,0);
    rank.resize(n+1,0);
    size.resize(n+1);
    for(int i=0;i<=n;i++){
       parent[i]=i;
       size[i]=1;//initially all connected to themselves so size will be 1s
    }
  }
  //path compression
int findUpar(int node){
    if(node==parent[node])return node;
    return parent[node] = findUpar(parent[node]);
}
 void unionbyrank(int u,int v){
      int ulp_u=findUpar(u);
      int ulp_v=findUpar(v);
      if(ulp_u==ulp_v)return ;//same ultparent  to same component mai hai dono 
      //jiske rank zyada usse attach krdo
      else if(rank[ulp_u]<rank[ulp_v]){
        parent[ulp_u]=ulp_v;
      }
     else if(rank[ulp_u]>rank[ulp_v]){
        parent[ulp_v]=ulp_u;
      }
      else {
        parent[ulp_v]=ulp_u;
        rank[ulp_u]++;
      }
   }
void unionbysize(int u,int v){
      int ulp_u=findUpar(u);
      int ulp_v=findUpar(v);
      if(ulp_u==ulp_v)return;
      else if(size[ulp_u]<size[ulp_v]){
        parent[ulp_u]=ulp_v;
        size[ulp_v]+=size[ulp_u];
      }
      else {
         parent[ulp_v]=ulp_u;
        size[ulp_u]+=size[ulp_v];
      }
   }
};

int main()
 {
  Disjointset ds(7);
  // ds.unionbyrank(1,2);
  // ds.unionbyrank(2,3);
  // ds.unionbyrank(4,5);
  // ds.unionbyrank(6,7);
  // ds.unionbyrank(5,6);
  
  ds.unionbysize(1,2);
  ds.unionbysize(2,3);
  ds.unionbysize(4,5);
  ds.unionbysize(6,7);
  ds.unionbysize(5,6);

  //jab dono ke beech  mai koi connection nhi hoga
  if(ds.findUpar(3)==ds.findUpar(7)){
    cout<<"same component"<<endl;
  } 
  else cout<<"different component"<<endl;

ds.unionbysize(3,7);
//dono ko connect kr dia

    if(ds.findUpar(3)==ds.findUpar(7)){
    cout<<"same component"<<endl;
  } 
  else cout<<"different component"<<endl;
}