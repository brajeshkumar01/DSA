class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        
         long long totalsum = 0;
         int absminval = INT_MAX;       // absolutemin value
         int negativecount = 0;

         for(const auto& row : matrix){

                for(int val : row){

                     totalsum += abs(val);

                     if(val < 0){

                         negativecount++;
                     }

                       absminval = min(absminval , abs(val)); 
                }
         }
                  if(negativecount % 2 != 0){

                       totalsum -= 2 * absminval;
         }
                  return totalsum;
    }
};