class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    	int current;
    	for (int i = 0; i < nums.size(); i++) {
    		if (nums[i] == 0) {
    			current = i;
    			for (int j = i; j < nums.size(); j++) {
    				if (nums[j] != 0) {
    				swap(nums[current], nums[j]);
    				current = j;
    			  }
    			}
    		}
    	}
    }
};
