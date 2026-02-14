class Solution {
public:

     double t[101][101];
     double solved(int poured , int i , int j){

                 
           if(i < 0 || j < 0 || i < j){

                return 0.0;
           } 
                   
             if(i == 0 && j == 0) return poured;  // itmeans if iam at top 

                if(t[i][j] != -1) return t[i][j];
             double upleft = (solved(poured , i-1 , j-1)-1)/2.0;
             double upright = (solved(poured , i-1 , j)-1)/2.0;

             if(upleft < 0) upleft = 0;
             if(upright < 0) upright = 0;

             return t[i][j] = upleft + upright;
     }
    double champagneTower(int poured, int query_row, int query_glass) {
         
            for(int i = 0; i<101; i++){

                  for(int j = 0; j<101; j++){

                      t[i][j] = -1;
                  }
            }

             return min(1.0 , solved(poured , query_row , query_glass));
    }
};