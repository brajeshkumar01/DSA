class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
         int n = nums.size();
         sort(nums.begin() , nums.end());
         int maxnum = 0;
         
         for(int i=0; i<n; i++){

              maxnum = (nums[n-1]-1) * (nums[n-2]-1);
         }
            return maxnum;
    }
};