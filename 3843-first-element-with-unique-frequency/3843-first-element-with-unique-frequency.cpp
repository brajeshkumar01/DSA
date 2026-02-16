class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
           
           int n = nums.size();
           unordered_map<int , int>freq;
           for(int i = 0; i<n; i++){

                    freq[nums[i]]++;
           }

               unordered_map<int ,int> freqcount;
               for(const auto& pair : freq){

                           freqcount[pair.second]++;
               }
                 for(int num : nums){

                       if(freqcount[freq[num]] == 1){

                             return num;
                       }
                 }
                          return -1;
    }
};