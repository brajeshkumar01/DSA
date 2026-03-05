 class Solution {
public:
    int minOperations(string s) {
        int count0 = 0; 
        int count1 = 0; 
        int n = s.size();
        
        for (int i = 0; i < n; i++) {
            if (s[i] != '0' + (i % 2)) {
                count0++;
            }
            if (s[i] != '1' - (i % 2)) {
                count1++;
            }
        }
        
        return min(count0, count1);
   
    }
};