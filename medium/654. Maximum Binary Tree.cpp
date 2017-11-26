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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if (nums.empty()) return NULL;
        int start = 0, end = nums.size() - 1;
        return helper(nums, start, end);
    }
    TreeNode* helper(vector<int>& nums, int start, int end) {
        if (start > end) return NULL;
        int m_i = start;
        int max = nums[start];
        for (int i = start; i <= end; i++) {
            if (nums[i] > max) {
                max = nums[i];
                m_i = i;
            }
        }
        TreeNode* res = new TreeNode(max);
        res->left = helper(nums, start, m_i - 1);
        res->right = helper(nums, m_i + 1, end);
        return res;
    }
};
