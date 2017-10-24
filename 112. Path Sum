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
    bool hasPathSum(TreeNode* root, int sum) {
        bool flag = false;
        helper(flag, root, sum, 0);
        return flag;
    }
    
    void helper(bool& flag, TreeNode* node, int sum, int cur) {
        if (flag) return;
        if (!node) return;
        if (!node->left && !node->right) {
            flag = (cur + node->val) == sum;
            return;
        }
        
        helper(flag, node->left, sum, cur + node->val);
        helper(flag, node->right, sum, cur + node->val);
    }
};
