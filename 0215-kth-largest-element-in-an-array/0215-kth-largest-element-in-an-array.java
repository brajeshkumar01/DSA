class Solution {
    public int findKthLargest(int[] nums, int k) {
        
         PriorityQueue<Integer> Maxheap = new PriorityQueue<>();

         for(int num : nums){

              Maxheap.add(num);

              if(Maxheap.size() > k){

                     Maxheap.poll();
              }
         }
            return Maxheap.peek();
    }
}