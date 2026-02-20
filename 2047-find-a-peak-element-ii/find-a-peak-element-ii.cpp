class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        
        int m = mat.size();
        int n = mat[0].size();
        int maxval = mat[0][0];
          
            int rowval = 0;
            int colval = 0;

            for(int i = 0; i<m; i++){

                  for(int j = 0; j<n; j++){

                       if(mat[i][j] > maxval){

                             maxval = mat[i][j];

                             rowval = i;
                             colval = j;
                       }
                  }
            }
              return {rowval , colval};
    }
};