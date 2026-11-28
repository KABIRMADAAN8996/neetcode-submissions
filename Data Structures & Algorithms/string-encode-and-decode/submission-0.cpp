class Solution {
public:
    vector<string> finalStr;
    string encode(vector<string>& strs) {
        string encoded_string = "";
        finalStr = strs;
        for(int i = 0; i < strs.size(); i++){
            encoded_string += strs[i];
        }
        return encoded_string;
    }

    vector<string> decode(string str) {
        return finalStr;
    }
};
