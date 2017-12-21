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
    bool isBalanced(TreeNode* root) {
        if (!root) return true;
        
        bool flag = true;
        helper(root, flag);
        return flag;
    }
    
    int helper(TreeNode* node, bool& flag) {
        if (!flag) return -1;
        if (!node) return 0;
        
        int LH = helper(node->left, flag);
        int RH = helper(node->right, flag);
        
        if (abs(LH - RH) >= 2) {
            flag = false;
            return -1;
        } else {
            return max(LH, RH) + 1;
        }
    }
};
