class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        
          int maxe = 0;
          int count = 0;
          unordered_map<int , int>freq;
          for(int num : nums){

                freq[num]++;

                maxe= max(maxe , freq[num]);
          }
             for(const auto& pair : freq){

                     if(pair.second == maxe){

                          count+=pair.second;
                     }
             }
                return count;
    }
};