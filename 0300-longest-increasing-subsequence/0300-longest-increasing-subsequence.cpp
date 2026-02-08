class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
          int len = 1;
          vector<int>result;
          int n = nums.size();
          result.push_back(nums[0]);

           for(int i = 0; i<n; i++){

                  if(nums[i] > result.back()){

                           result.push_back(nums[i]);
                           len++;
                  }

                   auto index = lower_bound(result.begin() , result.end(), nums[i]);

                   *index = nums[i];
           }
                 return len;
    }
};