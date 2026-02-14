class Solution {
public:
    double trimMean(vector<int>& arr) {
        
          sort(arr.begin(), arr.end());
          int n = arr.size();

          int trimsize = n * 0.05;

         double sum = 0;
         for(int i = trimsize; i< n - trimsize; ++i){

              sum += arr[i];
         }

            double trimmedmean = sum / (n-2 * trimsize);
            return trimmedmean;
    }
};