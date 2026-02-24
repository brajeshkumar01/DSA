class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        
          int n = nums.size();
          int left = 0 , maxlen = 0;
          unordered_map<int , int>freq;

          for(int right = 0; right < n; right++){

                       freq[nums[right]]++;

                       while(freq[nums[right]] > k){

                           freq[nums[left]]--;

                           if(freq[nums[left]] == 0){

                               freq.erase(nums[left]);
                           }
                             left++;
                       }
                         maxlen = max(maxlen , right-left+1);
          }
             return maxlen;
    }
};