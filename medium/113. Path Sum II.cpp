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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> res;
        if (!root) return res;
        vector<int> cur;
        helper(res, sum, cur, root);
        return res;
    }
    
    void helper(vector<vector<int>>& res, int sum, vector<int> cur, TreeNode* node) {
        if (!node) return;
        if (!node->left && !node->right) {
            sum = sum - node->val;
            if (sum == 0) {
                cur.push_back(node->val);
                res.push_back(cur);
            }
            return;
        }
        cur.push_back(node->val);
        helper(res, sum - node->val, cur, node->left);
        helper(res, sum - node->val, cur, node->right);
    }
};
