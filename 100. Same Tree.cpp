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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool flag = true;
        helper(flag, p, q);
        return flag;
    }
    
    void helper(bool& flag, TreeNode* p, TreeNode* q) {
        if (!flag) return;
        if (!p && !q) return;
        if (p && !q) {
            flag = false;
            return;
        }
        if (!p && q) {
            flag = false;
            return;
        }
        if (p->val != q->val) {
            flag = false;
            return;
        }
        helper(flag, p->left, q->left);
        helper(flag, p->right, q->right);
    }
};
