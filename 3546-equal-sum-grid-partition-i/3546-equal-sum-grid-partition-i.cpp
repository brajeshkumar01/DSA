class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        
             long long totalsum = 0, horisum = 0 , vartsum = 0;
             int m = grid.size();
             int n = grid[0].size();
             int rowhalf = m / 2;
               for(int i = 0; i<m; i++){

                    for(int j = 0; j<n; j++){

                          totalsum += grid[i][j];
                    }
               }

                 for(int i = 0; i<m-1; i++){

                     for(int j = 0; j<n; j++)

                          horisum += grid[i][j];
                          if(2 * horisum == totalsum) return true;  
                 }

                 vector<long long>colsum(n , 0);

                 for(int i = 0; i<n; i++){

                      for(int j = 0; j< m; j++){

                            colsum[i] +=grid[j][i];
                      }
                 }

                   long long leftsum = 0;
                   for(int i = 0; i<n-1; i++){

                        leftsum += colsum[i];
                        if(2 * leftsum == totalsum) return true;
                   }
                      return false;
    }
};