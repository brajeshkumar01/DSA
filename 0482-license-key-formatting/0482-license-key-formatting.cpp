class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        
         string temp = "";
        
        for(char c : s){
            if(c != '-'){
                temp += toupper(c);
            }
        }

        string result = "";
        int count = 0;

        for(int i = temp.size() - 1; i >= 0; i--){
            result += temp[i];
            count++;

            if(count == k && i != 0){
                result += '-';
                count = 0;
            }
        }

        reverse(result.begin(), result.end());
        return result;
    }
};