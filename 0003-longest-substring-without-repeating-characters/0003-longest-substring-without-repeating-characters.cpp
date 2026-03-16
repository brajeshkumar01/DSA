class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n = s.size();
        vector<int>dict(256 , -1);
        int res = 0;
        int index = -1;

        for(int i = 0; i<n; i++){

               if(dict[s[i]] > index){

                    index = dict[s[i]];
               }
                    dict[s[i]] = i;

                    res = max(res , i-index);
        }
           return res;
    }
};