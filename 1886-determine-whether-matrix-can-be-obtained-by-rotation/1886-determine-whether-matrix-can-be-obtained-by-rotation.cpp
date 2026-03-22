class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        

          int n = mat.size();

          if(mat == target){              // 0 or 360 degree

                return true;
          }
             int deg = 3;                    // transpose of matrix

             while(deg--){
             for(int i = 0; i<n; i++){

                  for(int j = i; j<n; j++){

                       swap(mat[i][j] , mat[j][i]);
                  }
             }
                  for(int i = 0; i<n; i++){

                       reverse(mat[i].begin() , mat[i].end());
                  }
                   if(mat == target){

                         return true;
                   }
             }
                return false;
    }
};