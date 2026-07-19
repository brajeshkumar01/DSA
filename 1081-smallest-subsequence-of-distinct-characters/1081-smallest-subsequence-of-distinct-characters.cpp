class Solution {
public:
    string smallestSubsequence(string s) {

           int n  = s.size();
           unordered_map<char , int>freqmap;
           set<char>used;
           string result;

           for(char c : s){

               ++freqmap[c];
           }
             for(char c : s){

                 freqmap[c]--;

                 if(used.find(c) != used.end()){

                       continue;
                 }
                   while(!result.empty() && result.back() > c && freqmap[result.back()] > 0){

                        used.erase(result.back());
                        result.pop_back();
                   }
                     result.push_back(c);
                     used.insert(c);
             }
               return result;
    }
};