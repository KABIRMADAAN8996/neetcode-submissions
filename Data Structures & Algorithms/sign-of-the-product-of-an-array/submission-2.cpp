class Solution {
public:
    int arraySign(vector<int>& nums) {
        int count = 0;
        for(int val : nums){
            if(val == 0) return 0;
            if(val < 0) count++;
        }
        if(count % 2 == 0) return 1;
        else return -1;
    }
};