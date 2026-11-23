class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> missing;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int idx = 0;
        for(int i = 1; i <= n; i++){
            while(idx < n && nums[idx] < i){
                idx++;
            }
            if(idx == n || nums[idx] != i){
                missing.push_back(i);
            }
        }
        return missing;
    }
};