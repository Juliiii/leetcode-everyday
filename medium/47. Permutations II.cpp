class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        if (nums.empty()) return res;
        helper(res, nums, 0);
        return res;
    }
    
    void helper(vector<vector<int>>& res, vector<int> nums, int start) {
        if (start == nums.size()) {
            res.push_back(nums);
            return;
        }
        
        for (int i = start; i < nums.size(); i++) {
            if (canSwap(nums, start, i)) {
                swap(nums, i, start);
                helper(res, nums, start + 1);
                swap(nums, i, start);
            }
        }
    }
    
    bool canSwap(vector<int> nums, int start, int end) {
        for (int i = start; i < end; i++) {
            if (nums[i] == nums[end]) return false;
        }
        return true;
    }
    
    void swap(vector<int>& nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
};
