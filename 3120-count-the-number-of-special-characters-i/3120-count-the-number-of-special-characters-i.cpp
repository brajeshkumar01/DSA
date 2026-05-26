class Solution {
public:
    int numberOfSpecialChars(string word) {
        
            int count = 0;
            vector<bool> lower(26 , false);
            vector<bool> upper(26 , false);

            for(char ch : word){

                 if(islower(ch)){

                      lower[ch - 'a'] = true;
                 }else if(isupper(ch)){

                       upper[ch - 'A'] = true;
                 }
            }
                  for(int i = 0; i<26; i++){

                      if(lower[i] && upper[i]){

                           count++;
                      }
                  }
                     return count;
    }
};