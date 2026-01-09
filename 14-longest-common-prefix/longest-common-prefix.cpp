class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
         int n = strs.size();
         sort(strs.begin(), strs.end());

         string first = strs[0];
         string last  = strs[n-1];
          int i = 0;

          while(i<first.length() && i<last.length() && first[i] == last[i]){

               i++;
          }
             return first.substr(0, i);
    }
};