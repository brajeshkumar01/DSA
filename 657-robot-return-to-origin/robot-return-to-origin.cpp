class Solution {
public:
    bool judgeCircle(string moves) {
        
          if(moves.length() & 1) return false;

          int d = 0, u = 0 , l = 0, r = 0;

          for(char ch : moves){

               u += ch == 'U';
               d += ch == 'D';
               l += ch == 'L';
               r += ch == 'R';
          }
               return u == d && l == r;
          }
};