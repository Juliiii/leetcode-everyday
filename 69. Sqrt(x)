class Solution {
public:
    int mySqrt(int x) {
        if (x == 1) return 1;
        long long left = 0;
        long long right = x / 2;
        long long mid;
        while (left <= right) {
            mid = (right - left) / 2 + left;
            long long res = mid * mid;
            if (res == x) {
                return mid;
            } else if (mid * mid < x) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        return left - 1;
    }
};
