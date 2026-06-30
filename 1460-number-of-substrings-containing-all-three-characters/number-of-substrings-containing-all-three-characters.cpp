class Solution {
public:
    int numberOfSubstrings(string s) {
          
          int n = s.length();
          int lasta = -1 , lastb = -1 , lastc = -1;
          int total = 0;

          for(int i = 0; i<n; i++){

                if(s[i] == 'a')
                   lasta = i;

                   else if (s[i] == 'b')
                      lastb = i;

                      else

                      lastc = i;

                      if(lasta != -1 && lastb != -1 && lastc != -1){

                           total += min({lasta , lastb , lastc}) +1 ;
                      }
          }
            return total;
    }
};