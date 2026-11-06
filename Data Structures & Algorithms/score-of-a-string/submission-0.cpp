class Solution {
public:
    int scoreOfString(string s) {
        vector<int> values;
        
        for(char ch : s){
            int val = ch - '0';
            values.push_back(val);
        }

        int diff = 0;
        int n = values.size();
        for(int i = 0; i < n-1; i++){
            diff += abs(values[i+1] - values[i]);
        }
        return diff;
    }
};