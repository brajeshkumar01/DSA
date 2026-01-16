class Solution {
    public void nextPermutation(int[] nums) {
        
                int n = nums.length;
                int index = -1;

                // opposite iterate
                for(int i = n-2; i>=0; i--){

                       if(nums[i] < nums[i+1]){

                           index = i;
                           break;
                       }
                }
                   if(index == -1){
                    reverse(nums, 0);
                     return;
             }
                
                  for(int j = n-1; j>index; j--){

                       if(nums[j] > nums[index]){

                             swap(nums , index , j);
                             break;
                       }
                  }
                      reverse(nums , index + 1);
         }

         public void swap(int [] nums , int i , int j){

               int temp = nums[i];
               nums[i]  = nums[j];
               nums[j] = temp;
         }

          private void reverse(int [] nums , int start){

                int left = start , right = nums.length-1;

                while(left < right){

                      swap(nums, left , right);
                      left++;
                      right--;
                }
          }
}