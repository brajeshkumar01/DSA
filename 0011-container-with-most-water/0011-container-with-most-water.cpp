class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int n = height.size();
        int left = 0 , right = n-1;
        int maxwater = 0;
        while(left < right){

                int currlen = min(height[left] , height[right]);
                int currwidth = right - left;

                int currwater = currlen * currwidth;

                maxwater = max(maxwater , currwater);

                if(height[left] < height[right]){

                      left++;

                }else{

                     right--;
                }
        }
           return maxwater;
    }
};