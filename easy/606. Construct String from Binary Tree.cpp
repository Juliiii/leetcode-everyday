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
    string tree2str(TreeNode* t) {
        if (!t) return "";
        string left = tree2str(t->left);
        string right = tree2str(t->right);
        if (left != "") left = "(" + left + ")";
        else if (right != "") left = "()";
        
        if (right != "") right = "(" + right + ")";
        
        return to_string(t->val) + left + right;
    }
    
    
};
