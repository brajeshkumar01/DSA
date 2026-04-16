class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        
          int n = nums.size();
          int maxe = 0, count = 0;
          unordered_map<int , int>freqmap;

          for(int num : nums){

                 ++freqmap[num];

                 maxe = max(maxe , freqmap[num]);
          }
            for(const auto& pair : freqmap){

                   if(pair.second == maxe)

                         count+=pair.second;
            }
               return count;
    }
};