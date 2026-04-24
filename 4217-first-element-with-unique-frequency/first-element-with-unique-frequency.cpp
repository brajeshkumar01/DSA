class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
             
           int n = nums.size();
           unordered_map<int , int>freqmap;

           for(int i = 0; i<n; i++){

                ++freqmap[nums[i]];
           }
              unordered_map<int , int>freq;
              for(const auto& pair : freqmap){

                 ++freq[pair.second];
              }
                for(int num : nums){

                      if(freq[freqmap[num]] == 1){

                           return num;
                      }
                }
                  return -1;
    }
};