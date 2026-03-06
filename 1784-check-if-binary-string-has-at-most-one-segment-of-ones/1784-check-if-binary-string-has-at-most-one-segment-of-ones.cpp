class Solution {
public:
    bool checkOnesSegment(string s) {
        
         int n = s.size();
         bool foundsegement = false;

         for(int i = 0; i<n; i++){

               if(s[i] == '1'){

                   if(foundsegement){

                        return false;
                   }
                        foundsegement = true;
                        while(i < n && s[i] == '1'){

                            i++;
                        }
                   }
               }
               
            return true;
    }
};