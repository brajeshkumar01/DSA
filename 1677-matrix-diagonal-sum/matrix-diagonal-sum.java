class Solution {
    public int diagonalSum(int[][] mat) {
        
           
             int m = mat.length;
             int n = mat[0].length;

             int leftsum = 0, rightsum = 0;

             for(int i = 0; i<m; i++){

                 leftsum+=mat[i][i];
                 rightsum+=mat[i][n-i-1];
             }       
                  if(m % 2 == 1){

                       leftsum-=mat[n/2][m/2];
             }
                return leftsum + rightsum;

    }
}