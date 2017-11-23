class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        if (nums.empty()) return nums;
        int rr = nums.size();
        int cc = nums[0].size();
        if (rr * cc != r * c) return nums;
        
        vector<vector<int>> ans;
        vector<int> cur;
        int count = 0;
        for (int i = 0; i < rr; i++) {
            for (int j = 0; j < cc; j++) {
                cur.push_back(nums[i][j]);
                count++;
                if (count == c) {
                    ans.push_back(cur);
                    count = 0;
                    cur.clear();
                }
            }
        }
        return ans;
    }
};
