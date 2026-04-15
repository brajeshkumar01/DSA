class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        
        vector<int>temp(nums.begin(), nums.end());
        
         sort(temp.begin(), temp.end());
         int n = nums.size();

         int left = 0 , right = n-1;
         while(left < n && nums[left] == temp[left])left++;
         while(left< right && nums[right] == temp[right])right--;

         return right-left+1;
    }
};