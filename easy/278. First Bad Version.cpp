// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1;
        int right = n;
        int mid;
        while(left <= right) {
            mid = (right - left) / 2 + left;
            if (isBadVersion(mid)) {
                if (!isBadVersion(mid - 1)) return mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return false;
    }
};
