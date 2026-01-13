class Solution {
public:
    int secondHighest(string s) {
        
         set<char>str;

         for(char ch : s){

              if(isdigit(ch)){

                   str.insert(ch-'0');
              }
         }
             if(str.size() < 2){

                  return -1;
             }

               auto it = str.end();
               it--;
               it--;

               return *it;
    }
};