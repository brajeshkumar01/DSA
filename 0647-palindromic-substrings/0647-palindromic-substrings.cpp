class Solution {
public:
   bool ispalindrome(string s , int left , int right){

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
    int countSubstrings(string s) {
        
           int n = s.length();
           int count = 0;
           int left = 0 , right = n-1;
           for(left = 0; left<n; left++){

                  for(right = left; right<n; right++){

                        if(ispalindrome(s , left , right)){

                                count++;
                        }
                  }
           }
                   return count;
    }
};