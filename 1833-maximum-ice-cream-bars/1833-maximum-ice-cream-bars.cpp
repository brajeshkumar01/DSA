class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        
         int count = 0;
         int n = costs.size();
         sort(costs.begin(), costs.end());
         for(int i = 0; i<n; i++){

               coins = coins - costs[i];

               if(coins >= 0){

                     count++;
               }else{

                  break;
               }
         }
            return count;
    }
};