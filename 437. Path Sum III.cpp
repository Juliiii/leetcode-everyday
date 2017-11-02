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
    int pathSum(TreeNode* root, int sum) {
        if (!root) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int count = 0;
        while(!q.empty()) {
            TreeNode* cur = q.front();
            q.pop();
            if (cur->left) q.push(cur->left);
            if (cur->right) q.push(cur->right);
            helper(cur, count, sum, 0);
        }
        return count;
    }
    
    void helper(TreeNode* node, int& count, int sum, int cur) {
        if (!node) return;
        int _sum = cur + node->val;
        if (sum == _sum) {
            count++;
        }
        helper(node->left, count, sum, _sum);
        helper(node->right, count, sum, _sum);
    }
};
