class Solution {
public:

     bool ispalindrome(string& s , int left , int right){

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
             int left = 0, right =n-1;

            string length1 = "";

            for( left = 0; left<n; left++){

                   for(right = left; right<n; right++){

                        if(ispalindrome(s , left , right)){

                                string len = s.substr(left , right-left+1);

                                if(len.length() > length1.length()){

                                      length1 = len;
                                }
                        }
                   }
            }
               return length1;
    }
};