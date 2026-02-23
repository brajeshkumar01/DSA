class Solution {
public:
    bool hasAllCodes(string s, int k) {
        
          int n = s.length();
          if(n < k){

               return false;
          }

            unordered_set<string>codes;
            int totalcodes = 1 << k;

            for(int i = 0; i<= n-k; i++){

                  codes.insert(s.substr(i , k));
            }

            return codes.size() == totalcodes;
    }
};