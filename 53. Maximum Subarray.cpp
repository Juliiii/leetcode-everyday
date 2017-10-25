class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = INT_MIN;
        int cur = 0;
        for (auto num : nums) {
            cur = max(cur + num, num);
            res = max(res, cur);
        }
        return res;
    }
};
