class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        bitset<32> binary(n);

        string num = binary.to_string();
        for(char ch : num){
            if(ch == '1') count++;
        }
        return count;
    }
};
