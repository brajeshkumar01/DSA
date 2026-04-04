class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        
        int n = arr.size();
        unordered_set<int>st(arr.begin() , arr.end());

        int maxlen = 0;
        for(int i = 0; i<n; i++){

               for(int j = i+1; j<n; j++){

                     int a = arr[i];
                     int b = arr[j];
                     int len = 2;

                     while(st.count(a+b)){

                          int c = a + b;
                          a = b;
                          b = c;
                          len++;
                     }
                       if(len >= 3)

                         maxlen = max(maxlen , len);
               }
        }
           return maxlen;
    }
};