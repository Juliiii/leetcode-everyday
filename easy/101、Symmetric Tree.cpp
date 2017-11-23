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
    bool isSymmetric(TreeNode* root) {
        if (root == NULL) return true;
        bool flag = false;
        helper(root->left, root->right, flag);
        return !flag;
    }
    
    void helper(TreeNode* left, TreeNode* right, bool& flag) {
        if (flag) return;
        if (!left && !right) return;
        if (!left || !right) {
            flag = true;
            return;
        }
        if (left->val != right->val) {
            flag = true;
            return;
        }
        helper(left->left, right->right, flag);
        helper(left->right, right->left, flag);
    }
};
