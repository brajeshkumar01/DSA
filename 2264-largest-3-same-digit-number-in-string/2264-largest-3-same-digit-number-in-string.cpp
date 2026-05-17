class Solution {
public:
    string largestGoodInteger(string num) {
        
         string result = "";
         int n = num.size();

         for(int i = 0; i<n-2; i++){

              if(num[i] == num[i+1] && num[i] == num[i+2]){

                        string curr = num.substr(i , 3);

                        if(curr > result){

                              result = curr;
                        }
              }
         }
            return result;
    }
};