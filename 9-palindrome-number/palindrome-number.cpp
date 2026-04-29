class Solution {
public:
    bool isPalindrome(int x) {
        
        string str = to_string(x);
        int n = str.size();
           
           int left = 0, right = n-1;
          for(int i = 0; i<n; i++){

                 if(str[left] != str[right]){

                         return false;
                 }
                    left++;
                    right--;
          }
             return true;
    }
};