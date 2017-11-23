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
    TreeNode* invertTree(TreeNode* root) {
    	root = helper(root);
     	return root;   
    }
    
    TreeNode* helper (TreeNode* cur) {
        if (!cur) return cur;
    	TreeNode* newR = helper(cur->left);
    	TreeNode* newL = helper(cur->right);
        
        cur->right = newR;
        cur->left = newL;
        
        return cur;
	}
};
