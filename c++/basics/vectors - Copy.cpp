#include<iostream>
#include<cmath>
#include<string>
#include<vector>           
using namespace std;

void display(vector<int> &v){
for ( int i = 0; i <v.size() ; i++)
{
    cout<<v[i]<<" ";
}
}



int main()
 {
   
   vector<int> v1;
   int x;
   
   for (int i  = 0; i <4; i++)
   {
    cout<<"enter x";
    cin>>x;
    v1.push_back(x);


    display(v1);

   }
   

 return 0;
}