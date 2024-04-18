#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    // Define a 5x4 matrix
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20}
    };
reverse(matrix.begin(),matrix.end());
for (int  i = 0; i < 5; i++)
{
    for (int j = 0; j<4; j++)
    {
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}


}