class Solution {
public:
    int scoreDifference(vector<int>& nums) {

         int n = nums.size();
         int score1 = 0;
         int score2 = 0;
         int activeplayers = 0;

         for(int i = 0; i<n; i++){

               if(nums[i] % 2 == 1){

                    activeplayers ^= 1;
               }
                  if(i % 6 == 5){

                          activeplayers ^= 1;
                  }
                     if(activeplayers == 0){

                           score1 += nums[i];
                     }else{

                          score2 += nums[i];
                     }
         }
             return score1 - score2;
    }
};