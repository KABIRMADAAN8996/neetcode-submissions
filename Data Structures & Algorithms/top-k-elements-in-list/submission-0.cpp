class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> m;

        for(int val : nums){
            m[val]++;
        }

        vector<pair<int, int>> ans;
        for(auto& pair : m){
            ans.push_back({pair.second, pair.first});
        }

        sort(ans.rbegin(), ans.rend());
        vector<int> res;
        for(int i = 0; i < k; i++){
            res.push_back({ans[i].second});
        }
        return res;
    }
};
