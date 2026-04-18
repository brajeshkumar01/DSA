class Solution {
public:
    int minimumDistance(vector<int>& nums) {
       
         int n = nums.size();
         int mindiff = INT_MAX;

         for(int i = 0; i<n; i++){

               for(int j = i+1; j<n; j++){

                    for(int k = j+1; k<n; k++){

                        if(nums[i] == nums[j] && nums[j] == nums[k]){

                                int dist = abs(i-j) + abs(j-k) + abs(k-i);
                                mindiff = min(mindiff , dist);
                        }  
                    }
               }
         }

            return (mindiff == INT_MAX) ? -1 : mindiff;
    }
};