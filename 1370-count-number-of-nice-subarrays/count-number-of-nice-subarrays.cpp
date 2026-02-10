class Solution {
public:
    
        int atmostkodd(vector<int>& nums, int  k){
           int left = 0, oddcount = 0;
           int ans = 0;
           int n = nums.size();

           for(int right = 0; right<n; right++){

                if(nums[right] % 2 == 1) oddcount++;  // ie if true then ++

                while(oddcount > k){

                      if(nums[left] % 2 == 1) oddcount--;
                      left++;
                }
                   ans += (right-left+1);
           }
              return ans;
    }
       int numberOfSubarrays(vector<int>& nums, int k) {
                  
                  return atmostkodd(nums, k) - atmostkodd(nums, k-1);
       }
};