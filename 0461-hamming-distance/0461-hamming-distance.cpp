class Solution {
public:
    int hammingDistance(int x, int y) {
        
        int xorsum = x ^ y;
        int count = 0;
        while(xorsum > 0){

              count +=(xorsum & 1);
              xorsum >>=1;
        }
             return count;
    }
};