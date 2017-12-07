class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if (nums.empty()) return 0;
        int maxx = INT_MIN;
        vector<int> n(nums.size(), 1);
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < i; j++) {
                if (nums[j] < nums[i]) {
                    n[i] = max(n[j] + 1, n[i]);
                }
            }
            maxx = max(maxx, n[i]);
        }
        return maxx;
    }
};
