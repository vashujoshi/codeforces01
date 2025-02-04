#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void swap(int arr[], int n)
{
    for (int i = 0; i < n - 1; i += 2)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[6] = { 1, 2, 9, 7, 3 };
    swap(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
