class Solution {
        
        // int n = nums.size();
        // int [] ans = new int[n];
       
        // for(int i= 0; i<n; i++){
               
        //        boolean found = false;
        //         for(int x = 0; x <= 10000; x++){

        //              if((x ^ (x+1)) == nums.get(i)){

        //                 ans[i] = x;
        //                 found = true;
        //                 break;
        //              }
        //         }
        //            if(!found){

        //                ans[i] = -1;
        //            }
             
        // }
        //      return ans;
          
   
    public int[] minBitwiseArray(List<Integer> nums) {
        int ans[] = new int[nums.size()];
        for(int i = 0; i < nums.size(); i++) {
            int n = nums.get(i);
            if(n != 2) ans[i] = n - ((n + 1) & (-n - 1)) / 2;
            else ans[i] = -1;
        }  
        return ans;
    }
}