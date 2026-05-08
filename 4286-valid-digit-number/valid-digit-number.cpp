class Solution {
public:
    bool validDigit(int n, int x) {
        
           string str = to_string(n);

           if(str[0]-'0' == x){

               return false;
           }
             for(char c : str){

                  if(c - '0' == x){

                      return true;
                  }
             }
               return false;
    }
};