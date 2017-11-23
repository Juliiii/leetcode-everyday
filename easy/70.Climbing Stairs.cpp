class Solution {
public:
    int climbStairs(int n) {
        int lastlast = 1;
        int last = 2;
        int now = 0;
        if (n == 1) {
            now = 1;
        } else if (n == 2) {
            now = 2;
        } else {
            for (int i = 2; i < n; i++) {
                now = last + lastlast;
                lastlast = last;
                last = now;
            }
        }
        return now;
    }
};
