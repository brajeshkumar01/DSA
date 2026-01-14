class Solution {
public:

    bool isvalid(string& s , int left , int right){

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
        
            int n = s.size();
            int left = 0 , right = n-1;
            string maxlen = "";

            for(left = 0;left<n; left++){

                for(right = left;right<n; right++){

                      if(isvalid(s, left  , right)){

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