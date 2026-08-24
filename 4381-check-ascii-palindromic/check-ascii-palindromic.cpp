class Solution {
public:
    bool isPalindromic(string s) {
        
         string binary = "";

         for(char c : s){

               for(int i = 7; i >=0; i--){

                  binary += ((c >> i) & 1) ? '1' : '0';
               }
         }
         int n = binary.size();
         int left = 0 , right = n-1;

         while(left < right){

                if(binary[left] != binary[right]){

                       return false;
                }
                 left++;
                 right--;
         }
            return true;
    }
};