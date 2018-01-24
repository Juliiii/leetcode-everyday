class Solution {
public:
    bool hasAlternatingBits(int n) {
        int cnt = -1;
        while(n) {
            if (cnt == -1) {
                cnt = n & 1;
            } else {
                if (cnt == (n & 1)) {
                    return false;
                }
                cnt = n & 1;
            }
            n = n >> 1;
        }
        return true;
    }
};
