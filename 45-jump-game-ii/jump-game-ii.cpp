class Solution {
public:
    int jump(vector<int>& nums) {
        
         int n = nums.size();
         int totaljump = 0;
         int lastjump  = 0;
         int coverage  = 0;
         int destnation = n-1;
         
         for(int i = 0; i<n; i++){

               //update coverage

               coverage = max(coverage , i+nums[i]);
               if(i == lastjump){

                    if(i != n-1){

                          totaljump++;
                    }

                      lastjump = coverage;

                      if(coverage >= destnation){

                          return totaljump;
                      }
               }
         }

          return totaljump;
    }
};