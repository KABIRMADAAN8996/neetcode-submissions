class Solution {
public:
    int maxDifference(string s) {
       unordered_map<char, int> m;
       int n = s.length();
       for(int i = 0; i < n; i++){
            m[s[i]]++;
       } 
       int maxOdd = 0;
       int minEven = n+1;
       for(auto& entry : m){
            int freq = entry.second;
            if(freq % 2 != 0){
                if(freq > maxOdd){
                    maxOdd = freq;
                }
            } else{
                if(freq < minEven){
                    minEven = freq;
                }
            }
       }
       return maxOdd - minEven;
    }
};