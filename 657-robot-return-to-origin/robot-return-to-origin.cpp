class Solution {
public:
    bool judgeCircle(string moves) {
        
          int X = 0 , y = 0;
          for(char ch : moves){

                  if(ch == 'U') y++;
                  else if(ch == 'D') y--;
                  else if(ch == 'L') X++;
                  else if(ch == 'R') X--;
          }
             return X == 0 && y == 0;
    }
};