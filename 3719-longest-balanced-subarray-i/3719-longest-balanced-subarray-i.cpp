class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        
          int maxlen = 0;
          int n = nums.size();
          for(int start = 0; start < n; start++){

              unordered_set<int>evennum;
              unordered_set<int>oddnum;
              
                for(int end = start; end<n; end++){


                        if(nums[end] % 2 == 0){

                               evennum.insert(nums[end]);
                        }else{

                             oddnum.insert(nums[end]);
                        }
                           if(evennum.size() == oddnum.size()){

                                 maxlen = max(maxlen , end-start+1);
                           }
                }
          }
             return maxlen;
    }
};