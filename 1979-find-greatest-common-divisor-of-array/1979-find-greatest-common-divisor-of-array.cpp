class Solution {
public:

    int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}
    int findGCD(vector<int>& nums) {
        
           int n = nums.size();
           sort(nums.begin() , nums.end());

           for(int i = 0; i<n; i++){

                gcd(nums[0] , nums[n-1]);
           }
             return gcd(nums[0] , nums[n-1]);
    }
};