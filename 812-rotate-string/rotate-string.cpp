class Solution {
public:
    bool rotateString(string s, string goal) {
        
          if(s.length() != goal.length()) return false;
          if(s.empty() && goal.empty())  return true;

          string temp = s + s;

          return temp.find(goal) != string::npos;
    }
};

// npos is used as functions that search for substrings or characters within a string.

