class Solution {
public:
    bool checkStrings(string s1, string s2) {
       
          if(s1.length() != s2.length()) return false;

          unordered_map<char , int> evencount1 , evencount2;
          unordered_map<char , int> oddcount1 , oddcount2;

          for(int i = 0; i<s1.length(); i++){

                 if(i % 2 == 0){

                     evencount1[s1[i]]++;
                     evencount2[s2[i]]++;
                 }else{

                     oddcount1[s1[i]]++;
                     oddcount2[s2[i]]++;
                 }
          }
            if(evencount1 != evencount2){

                    return false;
            }
              if(oddcount1 != oddcount2){

                   return false;
              }
                 return true;
    }
};
