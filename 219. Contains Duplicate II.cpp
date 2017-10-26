class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            if (m[nums[i]]) {
                if (i - m[nums[i]] + 1 <= k) {
                    return true;
                } else {
                    m[nums[i]] = i + 1;
                }
            } else {
                m[nums[i]] = i + 1;
            }
        }
        return false;
    }
};
