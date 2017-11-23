class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 0) return 0;
        int res = prices[1] - prices[0];
        for (int i = 0; i < prices.size(); i++) {
        	for (int j = i + 1; j < prices.size(); j++) {
        		int cha = prices[j] - prices[i];
        		if (cha > res) res = cha;
			}
		}
		return res < 0 ? 0 : res;
    }
};
