class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
         int count = 0;
         for(int num : nums){

              int digitcount = 0;

              if(num == 0){

                    digitcount = 1;
              }else{

                    while(num != 0){

                         num /= 10;
                         digitcount++;
                    }
              }
                      if(digitcount % 2 == 0){

                          count++;
                      }
         }
                 return count;
    }
};