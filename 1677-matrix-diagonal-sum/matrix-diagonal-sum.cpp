class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
         
          int m = mat.size();
          int n = mat[0].size();
          
          int leftsum = 0, rightsum = 0;

          for(int i = 0; i<m; i++){

                 leftsum+=mat[i][i];
                 rightsum+=mat[i][n-i-1];
          }
             if(m % 2 == 1){

                   leftsum-=mat[m/2][n/2];
             }
                 return leftsum + rightsum;
    }
};