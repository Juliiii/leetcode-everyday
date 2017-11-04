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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        return helper(t1, t2);
    }
    TreeNode* helper(TreeNode* t1, TreeNode* t2) {
        TreeNode* ans;
        if (!t1 && !t2) {
            ans = NULL;
        } else if (!t1 && t2) {
            ans = new TreeNode(t2->val);
            ans->left = helper(NULL, t2->left);
            ans->right = helper(NULL, t2->right);
        } else if (!t2 && t1) {
            ans = new TreeNode(t1->val);
            ans->left = helper(t1->left, NULL);
            ans->right = helper(t1->right, NULL);
        } else {
            ans = new TreeNode(t1->val + t2->val);
            ans->left = helper(t1->left, t2->left);
            ans->right = helper(t1->right, t2->right);
        }
        return ans;
    }
};
