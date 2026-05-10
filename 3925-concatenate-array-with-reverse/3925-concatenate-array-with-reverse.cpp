class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        
          vector<int>result;
          int n = nums.size();

          for(int i = 0; i<n; i++){

              if(i <= n){

                   result.push_back(nums[i]);
              }
          }
              for(int i = n-1; i>=0; i--){

                  if(i >= 0){

                      result.push_back(nums[i]);
                  }
              }
                 return result;
    }
};