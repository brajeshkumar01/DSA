class Solution {
public:
    int maxDistance(vector<int>& colors) {
        
           int n = colors.size();
           int diff = 0;
            
              for(int i = 0; i<n; i++){

                    for(int j = n-1; j>=0; j--){

                           if(colors[i] != colors[j]){

                                 diff = max(diff , abs(j - i));
                           }
                    }
              }
                 return diff;
    }
};