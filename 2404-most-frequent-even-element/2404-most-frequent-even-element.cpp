class Solution {
public:
    int mostFrequentEven(std::vector<int>& nums) {
        std::vector<int> newnum;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 0) {
                newnum.push_back(nums[i]);
            }
        }
        if (newnum.empty()) {
            return -1; 
        }

        unordered_map<int, int> freq;
        for (int num : newnum) {
            freq[num]++;
        }

        int maxFreq = 0;
        int freqEle = INT_MAX; 
        for (const auto& pair : freq) {
            if (pair.second > maxFreq || (pair.second == maxFreq && pair.first < freqEle)) {
                maxFreq = pair.second;
                freqEle = pair.first;
            }
        }

        return freqEle;
    }
};
