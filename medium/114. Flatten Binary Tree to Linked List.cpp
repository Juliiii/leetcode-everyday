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
    void flatten(TreeNode* root) {
        helper(root);
    }
    
    TreeNode* helper(TreeNode* &cur) {
        if (cur == NULL) return cur;
        TreeNode* left = helper(cur->left);
        TreeNode* right = helper(cur->right);
        TreeNode* pre, *temp = left;
        while(temp) {
            pre = temp;
            temp = temp->right;
        }
        if (left) {
            pre->right = right;
            cur->right = left;
        } else if (right) {
            cur->right = right;
        } else {
            cur->right = NULL;
        }
        cur->left = NULL;
        return cur;
    }
    
};
