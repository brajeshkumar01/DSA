class Solution {
public:
    bool isPerfectSquare(int num) {
        
        if(num < 0) return false;

        int root = static_cast<int>(sqrt(num));

        return (root * root == num);
    }
};