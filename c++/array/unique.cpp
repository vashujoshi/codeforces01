#include <iostream>
#include <cmath>
#include <string>

using namespace std;




int main()
{
    // int n;
    // cin >> n;
    int arr[5] = { 1, 1, 9, 7,7 };


    for (int i = 0; i < 6; i++)
    {
        for (int  j = 4; j>i; j--)
        {
            if (arr[i]==arr[j])
            {
            cout<<arr[i]<<endl;
            }
            else{
                cout<<"unique"<<arr[i]<<endl;
            }
        }
    }

    return 0;
}
