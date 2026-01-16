class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        
           int low = *max_element(nums.begin() , nums.end());  // highest element in array

           int high = accumulate(nums.begin(), nums.end() , 0);  // sum of all element

           int ans = 0;

           while(low <= high){

                  int mid = low+(high-low)/2;

                  int n = numberofsubarraywithmaxsum(nums , mid);

                  if(n > k)
                         // if n bada ho gaya then low=mid+1; high = mid-1
                        low = mid + 1;
                    else{

                          ans = mid;     // minimize ans
                          high = mid-1;
                }
           }
             return ans;
    }
       int numberofsubarraywithmaxsum(vector<int>& nums , int mid){

                  int sum = 0;
                  int count = 1;

                  for(int i = 0; i<nums.size(); i++){
                       
                        if(sum+nums[i]>mid)
                       
                  {
                       sum = nums[i];
                       count++;
                  }else
                   
                   sum+=nums[i];
       }
       
              return count;
       }
};