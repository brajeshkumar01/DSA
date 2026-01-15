class Solution {
    public int residuePrefixes(String s) {
        
          int n = s.length();
          int countresude = 0;

          HashSet<Character> distinctChar = new HashSet<>();

          for(int i = 0; i<n; i++){

                distinctChar.add(s.charAt(i));

                int distinctcount = distinctChar.size();
                int lengthMOd3 = (i+1) % 3;

                if(distinctcount == lengthMOd3){

                      countresude++;
                }
          }
             return countresude;
    }
}