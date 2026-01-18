class Solution {
public:
    int longestSubarray(vector<int>& nums) {

         int n = nums.size();
         int maxlen = 2;
         int currlen = 2;

         if(n <= 2) return n;

         for(int i = 2; i<n; i++){

              if(nums[i] == nums[i-1]+nums[i-2]){

                  currlen++;
              }else{

                  currlen = 2;
              }

                 maxlen = max(maxlen , currlen);
         }
            return maxlen;
    }
};