class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index;
        int left = -1;
        int i;
        for (i = nums.size() - 1; i >= 0; i--) {
            if (nums[i] == target) {
                index = i;
                break;
            }
            if (nums[i] < target && left == -1) left = i;
        }
        return i == -1 ? left + 1 : index;
    }
};
