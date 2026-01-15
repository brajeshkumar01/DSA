class Solution {
    public void reverseString(char[] s) {
                                                  // since void so no return 
          int left = 0, right = s.length-1;

          while(left < right){

               char temp = s[left];
               s[left] = s[right];
               s[right] = temp;

               left++;
               right--;
          }
    }
}