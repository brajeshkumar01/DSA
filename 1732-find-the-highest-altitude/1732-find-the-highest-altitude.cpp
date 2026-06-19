class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
          int n = gain.size();
          int maxalti = 0;
          int sum = 0;
          for(int i = 0; i<n; i++){

                 sum += gain[i];

                maxalti = max(maxalti , sum);
          }
             return maxalti;
    }
};