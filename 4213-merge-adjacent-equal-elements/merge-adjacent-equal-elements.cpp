class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
          

            vector<long long>st;
            st.reserve(nums.size()); // used to preallocate memory

            for(long long num : nums){

                 while(!st.empty() && st.back() == num){

                       num+=st.back();
                       st.pop_back();
                 }
                   st.push_back(num); // yadi mera while walla condition sahi nahi hua then do this
            }
               return st;
    }
};
