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
    int maxDepth(TreeNode* root) {
        int depth = 0;
        int max = 0;
        helper(max, depth, root);
        return max;
    }
    
    void helper(int& max, int cur, TreeNode* root) {
        if (!root && cur > max) max = cur;
        
        if (root) {
            helper(max, cur + 1, root->left);
            helper(max, cur + 1, root->right);
        }
        
        
    }
};
