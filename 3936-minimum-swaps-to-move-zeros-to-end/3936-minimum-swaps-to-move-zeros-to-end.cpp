class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        
          int n = nums.size();
          int zeros = 0 , swaps = 0;

          for(int num : nums){

               if(num == 0){

                   zeros++;
                   swaps += nums[n-zeros] != 0;
               }
          }
             return swaps;
    }
};