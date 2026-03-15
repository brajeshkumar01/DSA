class Solution {
public:
    int firstUniqChar(string s) {

          int n = s.size();
          unordered_map<char , int>freqmap;

          for(int i = 0; i<n; i++){

              ++freqmap[s[i]];
          }
            for(int i = 0; i<n; i++){

                  if(freqmap[s[i]] == 1){

                       return i;
                  }
            }
              return -1;
    }
};