class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        
          int m = matrix.size();
          int n = matrix[0].size();

          unordered_map<int , int>map;

          for(int i = 0; i<m; i++){

                for(int j = 0; j<n; j++){

                    int diag = i-j;

                    if(map.find(diag) == map.end()){

                          map[diag] = matrix[i][j];
                    }else if(map[diag] != matrix[i][j]){

                         return false;
                    }
                }
          }
             return true;
    }
};