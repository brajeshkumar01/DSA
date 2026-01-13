class Solution {
    public int secondHighest(String s) {
        
         
          TreeSet <Integer> numbers = new TreeSet<>();

          for(char ch : s.toCharArray()){

               if(Character.isDigit(ch)){

                      numbers.add(ch - '0');
               }
          }
            if(numbers.size() < 2){

                  return -1;
            }

              Integer secondHighest = numbers.lower(numbers.last());

              return secondHighest != null ? secondHighest : -1;
    }
}