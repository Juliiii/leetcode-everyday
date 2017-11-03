class Solution {
public:
    int arrangeCoins(int n) {
        int count = 1;
        while (n > count) {
            n = n - count;
            count++;
        }
        return count == n ? count : count - 1;
    }
};
