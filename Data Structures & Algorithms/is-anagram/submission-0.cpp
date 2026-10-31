class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        unordered_map<char, int> fors;
        for(char ch : s){
            fors[ch]++;
        }

        unordered_map<char, int> fort;
        for(char ch : t){
            fort[ch]++;
        }

        for(char ch : s){
            if(fort[ch] != fors[ch]){
                return false;
            }
        }
        return true;
    }
};
