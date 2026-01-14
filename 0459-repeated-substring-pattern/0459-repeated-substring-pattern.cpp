class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
         int n = s.length();
         int count = 0;

         string temp = s + s;
         for(int i = 0; i<n; i++){

               if(s == temp.substr(i , n)){

                         count++;

                         if(count >= 2){

                              return true;
                         }
               }
         }
            return false;
    }
};