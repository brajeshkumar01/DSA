class Solution {
public:
    int hammingDistance(int x, int y) {
        
        int xorresult = x ^ y;

        int count = 0;
        while(xorresult > 0){

              count +=(xorresult & 1);
              xorresult >>= 1; // check right shift next bit
        }
           return count;
    }
};