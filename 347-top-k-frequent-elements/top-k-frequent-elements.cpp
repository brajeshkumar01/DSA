class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
           int n = nums.size();
           unordered_map<int , int>freq;
           vector<int>result;

           for(int num : nums){

              freq[num]++;
           }
               priority_queue<pair<int, int>>pq;
              for(const auto& pair : freq){

                pq.push({pair.second , pair.first});
              }

                for(int i = 0; i<k; i++){

                      result.push_back(pq.top().second);
                      pq.pop();
                }

                  return result;
    }
};