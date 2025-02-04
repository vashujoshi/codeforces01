#include <bits/stdc++.h>

using namespace std;

class DSU
{
private:
    vector<int> parent;
    vector<int> size;

public:
    DSU(int n)
    {
        parent.resize(n);
        size.resize(n, 1);

        for (int i = 0; i < parent.size(); i++)
        {
            parent[i] = i;
        }
    }


    int findpar(int u)
    {
        if (u == parent[u])
            return u;
        else
            return parent[u] = findpar(parent[u]);
    }
    void combine(int u,int v)
    {
       u=findpar(u);
       v=findpar(v);

        if(u==v)return;

        else{
        if(size[u]>size[v]){
            parent[v]=u;
            size[u]+=size[v];
        }
        else{
            parent[u]=v;
            size[v]+=size[u];
        }
       }
    }
    bool samepar(int u,int v){
        return findpar(u)==findpar(v);
    }
};


int main()
{
   DSU  dsu(10);
   dsu.combine(1,2);
   dsu.combine(1,4);
   dsu.combine(2,3);
   
  cout<< dsu.samepar(2,3)<<endl;
  cout<< dsu.samepar(5,6)<<endl;

   dsu.combine(5,6);
   dsu.combine(4,5);

   cout<<dsu.samepar(4,6)<<endl;
   
   dsu.combine(5,8);




    return 0;
}
