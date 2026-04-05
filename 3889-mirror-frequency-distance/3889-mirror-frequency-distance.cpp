class Solution {
public:
    int mirrorFrequency(string s) {
        unordered_map<char, int> freq;

        for(char c : s) {
            freq[c]++;
        }

        int result = 0;
        unordered_set<char> visited;

        for(auto &it : freq) {
            char c = it.first;

            if(visited.count(c)) continue;

            char m;

            if(isalpha(c)) {
                m = 'z' - (c - 'a');
            } else {
                m = '9' - (c - '0');
            }

            int freqC = freq[c];
            int freqM = freq.count(m) ? freq[m] : 0;

            result += abs(freqC - freqM);

            visited.insert(c);
            visited.insert(m);
        }

        return result;
    }
};