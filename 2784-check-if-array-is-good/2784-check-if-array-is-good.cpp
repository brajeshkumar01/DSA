class Solution {
public:
    bool isGood(vector<int>& nums) {
        
         sort(nums.begin() , nums.end());
         int n = nums.size();

         if(nums[n-1] != n-1){

               return false;
         } 
            for(int i = 0 , incr = 1; i<n-1; i++ , incr++){

                  if(nums[i] != incr){

                      return false;
                  }
            }
               return true;
    }
};