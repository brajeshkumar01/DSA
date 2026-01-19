class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        
           vector<vector<int>>result;
           vector<int>temp;

           if(original.size() != m * n) return result;

           for(int i = 0; i<original.size(); i++){

                  temp.push_back(original[i]);

                  if(temp.size() == n){

                       result.push_back(temp);
                       temp.clear();
                  }
           }
              return result;
    }
};