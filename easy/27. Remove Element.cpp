class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.size() == 0) return 0;
        sort(nums.begin(), nums.end());
        int count = 0;
        int start = -1;
        int len = nums.size();
        for (int i = 0 ; i < len; i++) {
            if (val == nums[i]) {
                if (start == -1) start = i;
                count++;
            }
        }
        
        for (int i = start + count; i < len; i++) {
            nums[i - count] = nums[i];
        }
        
        nums.resize(len - count);
        
        return len - count;
    }
};
