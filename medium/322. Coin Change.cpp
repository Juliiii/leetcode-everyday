class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if (coins.empty() || amount == 0) return 0;
        sort(coins.begin(), coins.end());
        vector<int> dp(amount + 1, 0);
        for (int i = 1; i <= amount; i++) {
            bool flag = false;
            for (int j = 0; j < coins.size(); j++) {
                if (i - coins[j] < 0) continue;
                if (dp[i - coins[j]] == -1) continue;
                flag = true;
                if (dp[i] == 0) {
                    dp[i] = dp[i - coins[j]] + 1;
                } else {
                    dp[i] = min(dp[i], dp[i - coins[j]] + 1); 
                }
            }
            if (!flag) dp[i] = -1;
        }
        return dp.back();
    }
    
    
};
