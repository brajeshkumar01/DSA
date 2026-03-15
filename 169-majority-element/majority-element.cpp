class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
          int n = nums.size();
          unordered_map<int , int>freqmap;

          for(int i = 0; i<n; i++){

                 ++freqmap[nums[i]];
          }
            for(const auto& pair : freqmap){

                   if(pair.second > n/2){

                             return pair.first;
                   }
            }
                   return -1;
    }
};