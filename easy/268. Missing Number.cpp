class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size = nums.size() + 1, ans = 0;
        for (int i = 0; i < size; i++) {
            if (i != nums[i]) {
                ans = i;
                break;
            }
        }
        return ans;
    }
};
