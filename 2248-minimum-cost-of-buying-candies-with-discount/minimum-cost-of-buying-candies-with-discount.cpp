class Solution {
public:
    int minimumCost(vector<int>& cost) {
        
          int n = cost.size();
          sort(cost.begin() , cost.end());
          int mincost = 0;
          int count = 0;
          
          for(int i = n-1; i>=0; i--){

              count++;

              if(count == 3){

                  count = 0;  // 3rd candy free
                  continue;
              }

               mincost += cost[i];
          }
             return mincost;
    }
};