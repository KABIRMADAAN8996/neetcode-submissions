class Solution {
public:
    bool isPalindrome(int x) {
        int copy = x;
        int y = 0;
        while(copy > 0){
            int rem = copy % 10;
            y = (10*y) + rem;
            copy /= 10;
        }

        if(y == x) return true;
        return false;
    }
};