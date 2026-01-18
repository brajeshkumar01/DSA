class Solution {
public:
    int vowelConsonantScore(string s) {
        
          int vcount = 0;
          int ccount = 0;

          for(char ch : s){
              
                if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){

                      vcount++;
                }else if(isalpha(ch)){

                    ccount++;
                }
          }
              if(ccount == 0){

                  return ccount;
              
          }
             return floor(static_cast<double>(vcount) / ccount);
    }
};