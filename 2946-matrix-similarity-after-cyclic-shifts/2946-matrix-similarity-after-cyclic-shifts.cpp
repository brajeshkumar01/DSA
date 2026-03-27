class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {

           int m = mat.size();
           int n = mat[0].size();

           vector<vector<int>>result(m, vector<int>(n));

           for(int i = 0; i<m; i++){

               for(int j = 0; j<n; j++){

                     result[i][(j+k) % n] = mat[i][j];
               }
           }
              for(int i = 0; i<m; i++){

                  for(int j = 0; j<n; j++){

                         if(mat[i][j] != result[i][j]){

                              return false;
                         }
                  }
              }
                 return true;
    }
};
