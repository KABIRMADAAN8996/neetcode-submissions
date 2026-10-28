class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> m;
        int n = arr.size();
        for(int i = 0; i < n; i++){
            m[arr[i]]++;
        }
        int ans = -1;

        for(int i = 0; i < n; i++){
            if(arr[i] == m[arr[i]]){
                ans = max(ans, arr[i]);
            }
        }
        return ans;
    }
};