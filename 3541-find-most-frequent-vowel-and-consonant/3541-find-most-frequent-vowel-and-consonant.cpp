class Solution {
public:
    int maxFreqSum(string s) {
        
           unordered_map<char , int>vowelcount;
           unordered_map<char , int>conscount;

           for(char c : s){
                
                  if(isvowel(c)){

                        vowelcount[c]++;
                  }else{

                        conscount[c]++;
                  }   
           }

              int maxvowelfreq = 0;
              int maxconsfreq  = 0;

              for(auto& pair : vowelcount){

                     maxvowelfreq = max(maxvowelfreq , pair.second);
              }

                for(auto& pair : conscount){

                    maxconsfreq = max(maxconsfreq , pair.second);
                }

                 return maxvowelfreq + maxconsfreq;
    }
        bool isvowel(char c){

               return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
        }
};