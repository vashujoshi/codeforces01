#include<iostream>
#include<cmath>
#include<string>
             
using namespace std;
int main()
 {    
      int arr[2][4]={{1,2,3,4},{4,3,2,1}};
      for (int  i = 0; i <2; i++)
      {
        for (int j = 0; j<4; j++)
        {
            cout  << arr[i][j];
        }
        cout<<endl;
      
      }
      return 0;
}