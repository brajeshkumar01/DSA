class Solution {
public:
    int longestPalindrome(string s) {
        
           int n = s.length();
           int result = 0;
            unordered_set<char>st;               

            for(char ch : s){

                  if(st.count(ch)){  // yadi pair mil jayega to result+=2 kar deange or st se us element ko erase kar de

                      result+=2;
                      st.erase(ch);
                  }else{

                       st.insert(ch);
                  }
           }  if(!st.empty()){  // it means yadi st me koi element present hai it means odd time wall to 1 increse kar   deange leangth

                    result++;
               }
                 return result;
    }
};