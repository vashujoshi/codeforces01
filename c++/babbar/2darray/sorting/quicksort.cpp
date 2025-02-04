#include<iostream>
using namespace std;

int partion(int* arr,int s,int e){

int pivot=arr[s];
    int cnt=0;
for ( int i = s; i <=e; i++)
{
    if (arr[i]<arr[s])
    {
        cnt++;
    }
}

int pivotindex=s+cnt;

swap(arr[pivotindex],arr[s]);

// now left or right part ko manage
int i=s,j=e;
while (i<pivotindex&&j>pivotindex){
    while (arr[i]<=pivot)
    {
        i++;
    }
    
    while (arr[j]>pivot)
    {
        j--;
    }
    if(i<pivotindex&&j>pivotindex){
        swap(arr[i++],arr[j--]);
    }
}
return pivotindex;

}

void quicksort(int arr[],int s,int e){
    //base case
    if(s>=e)
    {
        return;
    }
    
    
    //partion 
   int p=partion(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
}



int main(){
    int arr[10]={31,2,3,41,34,4,7,21,9,8};
    
    quicksort(arr,0,9);
    for (int i = 0; i <10; i++)
    {
        cout<<arr[i];
        cout<<" ";
    }
    
}