class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int n = arr.size();
        vector<int>result(n);
        int mintoright = -1;
        
           if(n == 0) return result;

           for(int i = n-1; i>= 0; i--){

                  result[i] = mintoright;
                  mintoright = max(mintoright , arr[i]);
           }
              return result;
    }
};