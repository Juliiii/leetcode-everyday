class NumArray {
public:
    NumArray(vector<int> nums) {
        _nums = nums;
    }
    
    int sumRange(int i, int j) {
        int sum = 0;
        for (int k = i; k <= j; k++) sum += _nums[k];
        return sum;
    }
private:
    vector<int> _nums;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */
