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
    int findTilt(TreeNode* root) {
        if (!root) return 0;
        int res = 0;
        helper(root, res);
        return res;
    }
    
    int helper(TreeNode* root, int& res) {
        if (!root) return 0;
        int left = 0, right = 0;
        if (root->left) {
            left = helper(root->left, res);
        }
        
        if (root->right) {
            right = helper(root->right, res);
        }
        
        res += abs(left-right);
        
        return left + right + root->val;
    }
};
