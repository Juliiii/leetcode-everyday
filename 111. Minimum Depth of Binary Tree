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
    int minDepth(TreeNode* root) {
        int min = -1;
        helper(min, 1, root);
        return root ? min : 0;
    }
    
    void helper(int& min, int depth, TreeNode* cur) {
        if (!cur) return;
        if (!cur->left && !cur->right) {
            if(min == -1) min = depth;
            else min = min > depth ? depth : min;
            return;
        }
        
        helper(min, depth + 1, cur->left);
        helper(min, depth + 1, cur->right);
    }
};
