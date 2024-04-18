#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include<limits>
using namespace std;

int main() {
     int t,cnt=0,newelement;
    cin >> t;
    vector<int>v(t);
    for (int i = 0; i <t; i++)
    {
     cin>>v[i];   
    }
    int minelement=100000000;
    for (int i = 0; i <t; i++)
    {
     newelement=abs(v[i]); 
     minelement=min(minelement,newelement);  
    }
    

    cout<<abs(minelement)<<endl;
    
}
