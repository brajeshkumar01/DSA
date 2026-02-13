class Solution {
public:
    int kmostodd(vector<int>& nums , int k){

           int n = nums.size(), ans = 0, left = 0, oddcount = 0;
           for(int right = 0; right <n; right++){
            
                       if(nums[right] % 2 == 1) oddcount++; 

                        while(oddcount > k){

                             if(nums[left] % 2 == 1) oddcount--;
                             left++;
                      }
                        ans+=(right-left+1);
           }
              return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        
          return kmostodd(nums, k) - kmostodd(nums , k-1);
    }
};