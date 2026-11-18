class Solution {
public:
    int minOperations(string s) {
        int n = s.length();
        int count0 = 0;
        int count1 = 0;

        for(int i = 0; i < n; i++){
            char expected0 = (i%2 == 0) ? '0' : '1';
            char expected1 = (i%2 == 0) ? '1' : '0';

            if(s[i] != expected1) count1++;
            if(s[i] != expected0) count0++; 
        }
        return min(count0, count1);
    }
};