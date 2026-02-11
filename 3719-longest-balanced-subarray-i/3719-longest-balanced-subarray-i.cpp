class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        
          int n = nums.size();
          int maxlen = 0;

          for(int start = 0; start<n; start++){

                unordered_set<int>oddcount;
                unordered_set<int>evencount;

                for(int end = start; end<n; end++){

                        if(nums[end] % 2 == 1){

                             evencount.insert(nums[end]);
                        }else{

                             oddcount.insert(nums[end]);
                        }
                           if(oddcount.size() == evencount.size()){

                               maxlen = max(maxlen , end-start+1);
                           }
                }
          }
             return maxlen;
    }
};