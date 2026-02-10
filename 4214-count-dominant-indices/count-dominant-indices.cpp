class Solution {
public:
    int dominantIndices(vector<int>& nums) {
         
            int n = nums.size();
            int sum = 0;
            int count = 0;

            for(int i = n-1; i>0; i--){

                   sum+= nums[i];

                   if(nums[i-1] > sum / (n-i)){

                       count++;
                   }
            }

               return count;
       }
};