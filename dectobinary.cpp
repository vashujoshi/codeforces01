#include<bits/stdc++.h>
             
using namespace std;
int main()
 {
int s;
cin>>s;
for(int i=30;i>=0;i--){
    if((s&(1<<i))!=0)
    cout<<"1";
    else cout<<"0";
    
}
cout<<endl;
cout<<__builtin_popcount(s)<<endl;
cout<<__builtin_popcountll(s);
 return 0;
}
