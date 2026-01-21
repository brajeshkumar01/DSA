class Solution {
    
    public int[] minBitwiseArray(List<Integer> nums) {
        
           int n = nums.size();
           int [] ans = new int [n];

           for(int i = 0; i<n; i++){
                 int num = nums.get(i);
                 if(num != 2){ ans[i] = num - ((num+1) & (-num-1))/2;
           }else{

               ans[i] = -1;
           }
           }
                return ans;
    }
}