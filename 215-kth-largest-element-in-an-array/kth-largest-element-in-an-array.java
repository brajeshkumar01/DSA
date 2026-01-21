class Solution {
    public int findKthLargest(int[] nums, int k) {
        
        PriorityQueue<Integer> MaxHeap = new PriorityQueue<>();

        for(int num : nums){

             MaxHeap.add(num);

             if(MaxHeap.size() > k){

                  MaxHeap.poll();
             }
        }
             return MaxHeap.peek();
    }
}