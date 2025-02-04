#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> ans;
        int row = matrix.size(), col = matrix[0].size();
        int cnt = 0;
        int total = row * col;
        //
        int srow = 0;
        int scol = 0;
        int erow = row - 1;
        int ecol = col - 1;

        while (cnt < total)
        {
            // first row
            for (int index = scol; index <= ecol && cnt < total; index++)
            {
                ans.push_back(matrix[srow][index]);
                cnt++;
            }
            srow++;
            // endcolumn
            for (int index = srow; index <= erow && cnt < total; index++)
            {
                ans.push_back(matrix[index][ecol]);
                cnt++;
            }
            ecol--;
            // endrow
            for (int index = ecol; index >= scol && cnt < total; index++)
            {
                ans.push_back(matrix[erow][index]);
                cnt++;
            }
            erow--;
            // startcolumn
            for (int index = erow; index >= srow && cnt < total; index++)
            {
                ans.push_back(matrix[srow][index]);
                cnt++;
            }
            scol++;
        }
        return ans;
    }
};