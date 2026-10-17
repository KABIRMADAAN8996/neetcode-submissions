class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num < 0) return false;

        int root = sqrt(num);
        if(root * root == num) return true;
        return false;
    }
};