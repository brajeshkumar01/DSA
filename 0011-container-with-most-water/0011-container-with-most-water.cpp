class Solution {
public:
    int maxArea(vector<int>& height) {
        
         int n = height.size();
         int left = 0 , right = n-1;
         int maxwater = 0;

         while(left < right){

              int currwater = min(height[left] , height[right]);
              int width = right - left;
              int currwidth = currwater * width;

              maxwater = max(maxwater , currwidth);

              if(height[left] < height[right]){

                   left++;
              }else{

                   right--;
              }
         }
            return maxwater;
    }
};