class Solution {
public:

     struct compare{

          static bool operator()(const string &a , string &b){

                if(a.size() == b.size())

                return a < b;
                return a.size() < b.size();
          }
     };
    string kthLargestNumber(vector<string>& nums, int k) {
        

         priority_queue<string , vector<string>, compare>minheap(nums.begin() , nums.end());

         for(int i = 1; i<k; i++){

              minheap.pop();
         }
            return minheap.top();
    }
};