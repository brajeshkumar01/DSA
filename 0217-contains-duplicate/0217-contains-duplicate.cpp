class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
          int n = nums.size();
          unordered_map<int , int>freqmap;

          for(int i = 0; i<n; i++){

                ++freqmap[nums[i]];
          }
             for(const auto& pair : freqmap){

                   if(pair.second >= 2){

                        return true;
                   }
             }
                return false;
    }
};