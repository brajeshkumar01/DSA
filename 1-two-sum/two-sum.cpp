class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
           int n = nums.size();
           vector<int>result;
           unordered_map<int , int>map;

           for(int i = 0; i<n; i++){

                int complement = target - nums[i];
                if(map.find(complement) != map.end()){

                      result.push_back(map[complement]);
                      result.push_back(i);
                }
                  map[nums[i]] = i;
           }
             return result;
    }
};
