class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        priority_queue<int , vector<int>, greater<int>>maxheap;

        for(int num : nums){

                maxheap.push(num);

                if(maxheap.size() > k){

                      maxheap.pop();
                }
        }
             return maxheap.top();
    }
};