class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       
         sort(strs.begin(), strs.end());
         int t = strs.size();
         int n = strs[0].size();

         string ans = "";

         for(int i = 0; i<n; i++){

               if(strs[0][i] == strs[t-1][i]){

                   ans += strs[0][i];
               }else{

                  break;
               }
         }
               return ans;
    }
};