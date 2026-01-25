class Solution {
public:
    int maxArea(vector<int>& height) {
        
          int n = height.size();
          int maxwater = 0;

          int left = 0 , right = n-1;

          while(left < right){

               int currheight = min(height[left], height[right]);
               int currwidth  = right - left;
               int currarea = currheight * currwidth;

               maxwater = max(maxwater  , currarea);

              if(height[left] < height[right]){

                left++;
          }else{

                right--;
          }
      }
                return maxwater;
    }
};