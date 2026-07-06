class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        
          int n = nums.size();
          int sum = 0;
          vector<int>store;
          for(int i = 0; i<n; i++){

               string str = to_string(nums[i]);

               sort(str.begin(), str.end());
               
               int diff = (str.back()-'0') - (str.front()-'0');

                store.push_back(diff);
          }
             int maxi = *max_element(store.begin(), store.end());
              for(int i = 0; i<store.size(); i++){

                    if(store[i] == maxi)

                          sum+= nums[i];     
              }
                 return sum;
    }
};