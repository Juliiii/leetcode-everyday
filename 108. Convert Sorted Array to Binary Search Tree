/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(0, nums.size() - 1, nums);
    }
private:    
    TreeNode* helper(int left, int right, vector<int>& nums) {
    	if (left > right) return NULL;
    	int mid = (right - left) / 2 + left;
    	
    	TreeNode* cur = new TreeNode(nums[mid]);
    	
    	cur->left = helper(left, mid - 1, nums);
    	cur->right = helper(mid + 1, right, nums);
    	
    	return cur;
	}
};
