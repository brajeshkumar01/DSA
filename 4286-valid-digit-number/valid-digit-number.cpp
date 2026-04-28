class Solution {
public:
    bool validDigit(int n, int x) {
        
           string str = to_string(n);

           if(str[0]-'0' == x){

                return false;
           } 

              for(char ch : str) {

                   if(ch-'0' == x){

                        return true;
                   }
              } 

               return false; 
    }
};