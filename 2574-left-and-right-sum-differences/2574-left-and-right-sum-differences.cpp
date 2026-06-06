class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
          
          int n = nums.size();
          int leftsum = 0;
          int rightsum = accumulate(nums.begin() , nums.end(), 0);

            for(int i = 0; i<n; i++){

                  int x = nums[i];
                  rightsum -= x;
                  nums[i] = (rightsum >= leftsum) ? rightsum - leftsum : leftsum - rightsum;
                  leftsum += x;
            }

             return nums;
    }
};