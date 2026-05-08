class Solution {
public:
     
    bool isvalid(string &s , int left , int right){

          int n = s.length();
          while(left < right){

              if(s[left] != s[right]){

                    return false;
              }
                 left++;
                 right--;
          }
            return true;
    }
    string longestPalindrome(string s) {
        
            int n = s.length();
            string maxlen = "";
            int left = 0, right = n-1;
             
             for(left = 0; left < n; left++){

                   for(right = left; right<n; right++){

                        if(isvalid(s , left , right)){

                               string len = s.substr(left , right-left+1);

                               if(len.length() > maxlen.length()){

                                    maxlen = len;
                               }
                        }
                   }
             }
               return maxlen;
    }
};