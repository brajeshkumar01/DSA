class Solution {
public:
    
    bool detectCapitalUse(string word) {
            int upper = 0;
            int n = word.size();
            
           for(char ch : word){

                 if(ch >= 'A' && ch <= 'Z'){

                        upper++;
                 }
              }

                 if(upper == n) return true;
                 if(upper == 0) return true;

                 if(upper == 1 && word[0] >= 'A' && word[0] <= 'Z') return true;
           
              return false;
    }
};