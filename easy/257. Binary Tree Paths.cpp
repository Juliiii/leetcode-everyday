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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        helper(res, "", root);
        return res;
    }
    
    void helper(vector<string>& res, string cur, TreeNode* root) {
        if (!root) return;
        if (!root->left && !root->right) {
            res.push_back(cur + to_string(root->val));
            return;
        }
        helper(res, cur + to_string(root->val) + "->", root->left);
        helper(res, cur + to_string(root->val) + "->", root->right);
    }
};
