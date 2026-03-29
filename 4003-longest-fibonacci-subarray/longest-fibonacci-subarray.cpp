class Solution {
public:
    int longestSubarray(vector<int>& nums) {

        int n = nums.size();
        int maxlen = 2;
        int currlen = 2;

        if(n <= 2) return 2;

        for(int i = 2; i<n; i++){

                if(nums[i] == nums[i-2]+ nums[i-1]){

                       currlen++;
                }else{

                      currlen = 2;
                }
                   maxlen = max(maxlen , currlen);
        }
           return maxlen;
    }
};