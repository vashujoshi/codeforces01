#include<iostream>
using namespace std;

int expo(int a,int b){
   if(b==0){
    return 1;
   }
   if(b==1){
    return a;
   }
   
   if(b%2==0){
    return expo(a,b/2)*expo(a,b/2);
   }
   if(b%2!=0){
    return a*(expo(a,b/2)*expo(a,b/2));
   }
}



int main(){
cout<<expo(2,10);
}