class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
           unordered_map<int , int>freqmap;
           vector<int>result;
           for(int num : nums){

               ++freqmap[num];
           }
               priority_queue<pair<int, int>>pq;
               for(const auto& pair : freqmap){

                    pq.push({pair.second , pair.first});
                             
                    }
                       for(int i = 0; i<k; i++){

                            result.push_back(pq.top().second);
                            pq.pop();
                       }

                  return result;    
    }            
};