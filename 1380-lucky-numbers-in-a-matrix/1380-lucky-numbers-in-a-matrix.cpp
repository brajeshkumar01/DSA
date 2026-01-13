class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        
          int n = matrix.size(), m = matrix[0].size();

          vector<int> rowmin;

          for(int  i = 0; i<n; i++){

               int rmin = INT_MAX;

               for(int j = 0; j<m; j++){

                     rmin = min(rmin , matrix[i][j]);
               }
                  rowmin.push_back(rmin);
          }

            vector<int>colmax;

            for(int i = 0; i<m; i++){

                  int cmax = INT_MIN;
                    for(int j = 0; j<n; j++){

                          cmax = max(cmax , matrix[j][i]);
                    }
                      colmax.push_back(cmax);
            }

              vector<int>luckeynumber;

              for(int i = 0; i<n; i++){

                   for(int j = 0; j<m; j++){

                     if(matrix[i][j] == rowmin[i] && matrix[i][j] == colmax[j]){

                          luckeynumber.push_back(matrix[i][j]);
                     }
                   }
              }
                 return luckeynumber;
    }
};