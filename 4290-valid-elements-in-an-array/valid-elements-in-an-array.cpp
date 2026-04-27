class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        
          int n = nums.size();
          vector<int>result;

          vector<int> leftmax(n) , rightmax(n);
          leftmax[0] = nums[0];

          for(int i = 1; i<n; i++){

               leftmax[i] = max(leftmax[i-1] , nums[i]);
          }

              rightmax[n-1] = nums[n-1];
              for(int i = n-2; i>=0; i--){

                  rightmax[i] = max(rightmax[i+1] , nums[i]);
            }

              for(int i = 0; i<n; i++){

                   if(i == 0 || i == n-1){

                       result.push_back(nums[i]);
                   }else if(nums[i] > leftmax[i-1]){

                       result.push_back(nums[i]);
                   }else if(nums[i] > rightmax[i+1]){

                       result.push_back(nums[i]);
                   }
              }
                 return result;
    }
};