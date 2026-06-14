class Solution {
public:
    bool checkGoodInteger(int n) {
          
          string str = to_string(n);
          int m = str.size();
          int digitsum = 0;
          int squaresum = 0;

          for(int i = 0; i<m; i++){
              
               int digit = str[i] - '0';
                digitsum += digit;
                squaresum+= digit * digit;

                
          }
              return (squaresum - digitsum >= 50);
    }
};