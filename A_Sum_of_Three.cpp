#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    int t,n;
    
    cin >> t;
    while (t--) {
         cin>>n;
         if(n<=6)
         cout<<"NO"<<endl;
         else if(n==9)
         cout<<"NO"<<endl;
         else if(n%3!=0){
              cout<<"YES"<<endl;
               cout<<"1"<<" "<<"2"<<" "<<n-3<<endl;
         }
         else{
         cout<<"YES"<<endl;
         cout<<"1"<<" "<<"4"<<" "<<n-5<<endl;}
    }
}