class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> m;
        for(char ch : text){
            m[ch]++;
        }

        int number = min({m['b'], m['a'], m['l']/2, m['o']/2, m['n']});
        return number;
    }
};