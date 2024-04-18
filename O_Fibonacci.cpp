#include<bits/stdc++.h>
             
using namespace std;
long long int dp[51];
int callcount=0;
long long int fibo(int n){
    
    if(n==1)return 0;
    if(n==2)return 1;

    if(dp[n]!=-1)
     return dp[n];
    return dp[n]=fibo(n-1)+fibo(n-2);
}

int main()
 {
    int n;
    cin>>n;
  for (int i = 1; i <=n; i++)
  {
    dp[i]=-1;
  }
  cout<<(long long)fibo(n)<<endl; 
 return 0;
}