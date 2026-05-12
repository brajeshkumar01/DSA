class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        
        int n = nums.size();
        int maxele = 0;

        for(int i = 1; i < n; i++) {

            int diff = abs(nums[i] - nums[i - 1]);
            maxele = max(maxele, diff);
        }

                                                                       //  for circular adjacent pair
        maxele = max(maxele, abs(nums[n - 1] - nums[0]));

        return maxele;
    }
};