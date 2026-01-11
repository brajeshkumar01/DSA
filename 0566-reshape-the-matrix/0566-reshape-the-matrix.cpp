class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
         int originalrow = mat.size();
         int originalcol = mat[0].size();

         if(originalrow * originalcol != r * c) return mat;

         vector<vector<int>>reshape(r , vector<int>(c));

         for(int i = 0; i<originalrow; i++){

              for(int j = 0; j<originalcol; j++){

                   int index = i * originalcol + j;

                   reshape[index/c][index % c] = mat[i][j];
              }
         }
           return reshape;
    }
};