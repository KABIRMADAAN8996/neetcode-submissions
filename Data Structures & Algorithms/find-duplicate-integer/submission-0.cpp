class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int val : nums){
            m[val]++;
        }

        for(auto it : m){
            if(it.second > 1) return it.first;
        }
        return -1;
    }
};
