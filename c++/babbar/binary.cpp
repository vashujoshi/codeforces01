#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key){
       int si=0,ei=size-1;
       int mid=(si+ei)/2;
      
      while (si<=ei)
      {
        /* code */
      
      if(arr[mid]==key)
      {
        return mid;
      }
      if (arr[mid]>key)
      {
        ei=mid-1;
      }
      
      if (arr[mid]<key)
      {
        si=mid+1;
      }
      mid=(si+ei)/2;

      }
      return -1;
      


}     
 int main(){
   int  arr[8]={0,1,33,2,3,5,1,13};
    int index=binarysearch(arr,8,1);

cout<<index;

 }