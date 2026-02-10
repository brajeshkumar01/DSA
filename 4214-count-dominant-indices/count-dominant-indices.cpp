class Solution {
public:
    int dominantIndices(vector<int>& nums) {
         
           int n = nums.size();
           int count = 0;
           int sum = 0;

           for(int i = n-1; i>0; i--){
                    
                    sum+=nums[i];

                   if(nums[i-1] > sum/(n-i)){

                          count++;
                   }
           }
              return count;
    }
};