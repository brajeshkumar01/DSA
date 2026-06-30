class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int n = height.size();
        int left = 0 , right = n-1;
        int maxwater = 0;

        while(left < right){

              int currlen = min(height[left] , height[right]);
              int width = right - left;

              int currarea = currlen * width;

              maxwater = max(maxwater , currarea);

              if(height[left] < height[right]){

                   left++;
              }else{

                    right--;
              }
        }
           return maxwater;
    }
};