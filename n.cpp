//prefix sum
#include<bits/stdc++.h>
             
using namespace std;
int main()
 {
prefixs[n+1]{};
for (int  i = 1; i <=n; i++)
{
  prefixs[i]+=prefixs[i-1]+a[i];
}
//return prefixs[r]-prefixs[l-1];
 return 0;
}
// max occurence
map<char,int>mp;
for(auto c:s){
  maxi=max(maxi,++mp[c]);
}
for(auto c:s){
  if(mp[c]==maxi)
    cout<<c<<" ";
  cout<<endl;
}
int l=min-1,r=max+1;
while(r-l>1){
  int m=(l+r)/2
  if(predicate(m))
  l=m;
  else r=m;

}
//l is last true