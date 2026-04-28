class Solution {
public:
    int romanToInt(string s) {
        
         int n = s.length();
         unordered_map<char , int> romanmap{

            {'I' , 1}, {'V' , 5} , {'X' , 10}, {'L', 50},{'C' , 100}, {'D' , 500},{'M', 1000}
         };

           int result = 0;
           for(int i = 0; i<n; i++){

               if(i < n-1 && romanmap[s[i]] < romanmap[s[i+1]]){

                    result -= romanmap[s[i]];
               }else{

                     result += romanmap[s[i]];
               }
           }
              return result;
    }
};