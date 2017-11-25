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
    bool findTarget(TreeNode* root, int k) {
        if (!root) return false;
        bool res = false;
        map<int, int> m;
        helper(root, res, m, k);
        return res;
        
    }
    
    void helper(TreeNode* cur, bool& flag, map<int, int>& m, int k) {
        if (flag) return;
        if (!cur) return;
        if (!m[k - cur->val]) {
            m[cur->val] = 1;
        } else {
            flag = true;
            return;
        }
        helper(cur->left, flag, m, k);
        helper(cur->right, flag, m, k);
    }
};
