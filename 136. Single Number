class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res;
        for (int i = 0; i < nums.size(); i++) res = i == 0 ? nums[i] : res ^ nums[i];
        return res;
    }
};
