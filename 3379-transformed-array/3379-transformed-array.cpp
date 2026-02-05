class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        
         
          vector<int>result;
          int n = nums.size();

          for(int i = 0; i<n; i++){

                result.push_back(nums[(((i+ nums[i]) % n) + n) % n]);
          }
               return result;
    }
};