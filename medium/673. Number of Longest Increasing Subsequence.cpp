class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        if (nums.empty()) return 0;
        int res = 0;
        int maxx = INT_MIN;
        vector<int> dp(nums.size(), 1);
        vector<int> dpp(nums.size(), 1);
        for (int i = 0; i < nums.size(); i++) {
            int count = 0;
            int temp = maxx;
            for (int j = 0; j < i; j++) {
                if (nums[i] > nums[j]) {
                    dp[i] = max(dp[j] + 1, dp[i]);
                }
            }
            
            for (int j = 0; j < i; j++) {
                if (dp[i] == 1) count = 1;
                else if (dp[j] == dp[i] - 1 && nums[j] < nums[i]) {
                    count += dpp[j];
                }
            }
            
            dpp[i] = max(dpp[i], count);
            
            maxx = max(maxx, dp[i]);
        }
        for (int i = 0; i < nums.size(); i++) {
            if (maxx == dp[i]) res += dpp[i];
        }
        return res;
    }
};
