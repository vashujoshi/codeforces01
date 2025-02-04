#include <iostream>
using namespace std;
//sum of rows
int printsum(int arr[][2])
{
     for (int i = 0; i < 2; i++)
    {
        int sum=0;
        for (int j = 0; j < 2; j++)
        {
            sum+= arr[i][j];

        }
        cout<<sum<<endl;
    }

}





int main()
{
    int arr[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
   
printsum(arr);

}