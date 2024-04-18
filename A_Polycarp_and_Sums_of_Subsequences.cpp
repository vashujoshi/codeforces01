#include<iostream>
using namespace std;
#define ll long long

int main() {
    int t,n,arr[7];
    cin>>t;
    while (t--)
    {
        for (int i = 0; i < 7; i++)
        {
            cin>>arr[i];
        }
        if(arr[2]==arr[0]+arr[1])
      cout<<arr[0]<<" "<<arr[1]<<" "<<arr[3]<<endl;
         else
         cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    }
    

    return 0;
}