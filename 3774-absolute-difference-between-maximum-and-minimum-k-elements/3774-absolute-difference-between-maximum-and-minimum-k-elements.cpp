class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        
          int n = nums.size();
          sort(nums.begin(),  nums.end());
          int result = 0;
           int sum1 = 0 , sum2 = 0;
          
           for(int i = 0; i <= k-1; i++){

                sum1+=nums[i];
           }
              sort(nums.rbegin(), nums.rend());

              for(int j = 0; j<= k-1; j++){

                   sum2+=nums[j];
              }

               return result = abs(sum2 - sum1);
    }
};