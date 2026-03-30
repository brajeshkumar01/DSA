class Solution {
public:
    bool checkStrings(string s1, string s2) {
        if (s1.length() != s2.length()) {
            return false;
        }
        unordered_map<char, int> evenCount1, evenCount2;
        unordered_map<char, int> oddCount1, oddCount2;

        for (int i = 0; i < s1.length(); i++) {
            if (i % 2 == 0) { 
                evenCount1[s1[i]]++;
                evenCount2[s2[i]]++;
            } else { 
                oddCount1[s1[i]]++;
                oddCount2[s2[i]]++;
            }
        }

       
        if (evenCount1 != evenCount2) {
            return false;
        }

        
        if (oddCount1 != oddCount2) {
            return false;
        }

       
        return true;
    }
};
