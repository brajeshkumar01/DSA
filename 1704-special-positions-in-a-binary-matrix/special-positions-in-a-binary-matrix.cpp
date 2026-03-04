class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        
        int m = mat.size();
        int n = mat[0].size();
        int count = 0;
        vector<int>rowcount(m, 0);
        vector<int>colcount(n, 0);

        for(int i = 0; i<m; i++){

              for(int j = 0; j<n; j++){

                    if(mat[i][j] == 1){

                          rowcount[i]++;
                          colcount[j]++;
                    }
              }
        }
            for(int i = 0; i<m; i++){

                 for(int j = 0; j<n; j++){

                      if(mat[i][j] == 1 && rowcount[i] == 1 && colcount[j] == 1){

                          count++;
                      }
                 }
            }
               return count;
    }
};