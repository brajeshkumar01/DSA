class Solution {
public:
    bool divideArray(vector<int>& nums) {
        
         int n = nums.size();
         unordered_map<int , int>freqmap;

            for(int i = 0; i<n; i++){

                  ++freqmap[nums[i]];
            }
               for(const auto& pair : freqmap){

                      if(pair.second % 2 != 0){

                          return false;
                      }
               }
                  return true;
    }
};