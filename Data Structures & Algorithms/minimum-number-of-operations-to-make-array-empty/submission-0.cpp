class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int val : nums){
            m[val]++;
        }
        int count = 0;
        for(auto& pair : m){
            int freq = pair.second;
            if(freq == 1) return -1;
            count += (freq+2)/3;
        }
        return count;
    }
};