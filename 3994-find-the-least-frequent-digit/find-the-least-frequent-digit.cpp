class Solution {
public:
    int getLeastFrequentDigit(int n) {
        
          string  str = to_string(n);
         
          unordered_map<char , int>freqmap;
          
            for(char ch : str){

                   freqmap[ch]++;
            }
            int minfreq = INT_MAX;
            char leastFrequentDigit = '9';
                for(const auto& pair : freqmap){
                     
                      int freq = pair.second;
                      char digit = pair.first;
                       if(freq < minfreq || (freq == minfreq && digit < leastFrequentDigit)){

                               minfreq = freq;
                               leastFrequentDigit = digit;
                       }
                       
                }
                  return leastFrequentDigit - '0';   
    }
};