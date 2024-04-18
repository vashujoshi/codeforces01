class Solution {
public:
   int minFallingPathSum(vector<vector<int>>& matrix, int h, int j,vector<vector<int>> &v) {
        if(h == matrix.size()) {
             
            return 0;
        }
         if(v[h][j]!=-1) return v[h][j];  
        
        return v[h][j]=matrix[h][j]+min(minFallingPathSum(matrix, h+1, j,v),minFallingPathSum(matrix, h+1, j+1,v),minFallingPathSum(matrix,h+1,j-1,v));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int minSum = INT_MAX;
          int h=matrix.size(),j;
         j=h;
        vector<vector<int>> v(h,vector<int> (j,-1));
          minSum=minFallingPathSum(matrix, 0, 0,v);
        
        cout << minSum << endl;
        return minSum;
        
    }
};