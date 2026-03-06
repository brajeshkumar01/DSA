class Solution {
public:
    bool checkOnesSegment(string s) {
        
         int n = s.size();
         bool foundsegment = false;

         for(int i = 0; i<n; i++){

                 if(s[i] == '1'){

                       if(foundsegment){

                           return false;
                       }

                          foundsegment = true;

                          while(i < n && s[i] == '1'){

                             i++;
                          }
                 }
         }
            return true;
    }
};