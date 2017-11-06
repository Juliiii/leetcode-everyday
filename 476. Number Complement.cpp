class Solution {
public:
    int findComplement(int num) {
        int mask = 1, temp = num;
        while(temp) {
            temp = temp >> 1;
            mask = mask << 1;
        }
        return num ^ (mask - 1);
    }
};
