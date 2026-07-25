class Solution {
public:
    int maxProduct(int n) {
        
         string str = to_string(n);
         sort(str.begin() , str.end());
         int ans = 0;
         for(int i = 0; i<str.size(); i++){

                ans = (str[str.size()-1]-'0') * (str[str.size()-2]-'0');
         }
         
         return ans;
    }
};