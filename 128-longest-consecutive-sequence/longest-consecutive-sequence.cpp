class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
          int n = nums.size();
          if(n == 0 || n == 1) return n;
          int count = 1, maxcount = 1;
          sort(nums.begin(), nums.end());

          for(int i = 1; i<n; i++){

                if(nums[i] == nums[i-1]){

                     continue;
                }else if(nums[i] == nums[i-1]+1){

                      count++;
                }else{

                    count = 1;
                }
                   maxcount = max(maxcount , count);
          }
             return maxcount;
    }
};