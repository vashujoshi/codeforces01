#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        bool ys=0;
        for (int i = 0; i<n; i++)
        {
        int a;
        cin>>a;
        if (a==k)
        {
            ys=1;
        }
        
        
            /* code */
        }
        if(ys)cout<<"YES\n";
        else cout<<"NO\n";
        
    }
}