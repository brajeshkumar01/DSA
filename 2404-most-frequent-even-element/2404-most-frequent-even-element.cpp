class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        
          vector<int>newnums;
          int n = nums.size();

          for(int i = 0; i<n; i++){

                if(nums[i] % 2 == 0){

                        newnums.push_back(nums[i]);
                }
          }
              if(newnums.empty()){

                   return -1;
              }
              unordered_map<int , int>freqmap;
              for(int num : newnums){

                        freqmap[num]++;
              }
                 int maxfreq = 0;
                 int maxe    = INT_MAX;

                 for(const auto& pair : freqmap){

                         if(pair.second > maxfreq || (pair.second == maxfreq && pair.first < maxe)){

                            maxfreq = pair.second;
                            maxe    = pair.first;
                         }
                 }
                     return maxe;
    }
      
};
