class Solution {
    public int thirdMax(int[] nums) {
        
         TreeSet<Integer> store = new TreeSet<>();

         for(int num : nums){

              store.add(num);
         }
            if(store.size() < 3){

                  return store.last();
            }
              store.pollLast();
              store.pollLast();

              return store.last();
    }
}