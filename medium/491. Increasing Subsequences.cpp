class Solution {
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> cur;
        dfs(res, nums, cur, 0);
        return res;
    }
    
    void dfs(vector<vector<int>>& res, vector<int> nums, vector<int> cur, int start) {
        map<int, int> count;
        for (int i = start; i < nums.size(); i++) {
            if (!cur.empty() && nums[i] < cur[cur.size() - 1]) continue;
            if (count[nums[i]]) continue;
            count[nums[i]] = 1;
            cur.push_back(nums[i]);
            if (cur.size() >= 2) {
                res.push_back(cur);
            }
            if (start != nums.size() - 1) {
                dfs(res, nums, cur, i + 1);
                cur.pop_back();
            }
        }
    }
};
