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
    int sumOfLeftLeaves(TreeNode* root) {
        if (!root) return 0;
        queue<TreeNode*> q;
        int sum = 0;
        q.push(root);
        while(!q.empty()) {
            TreeNode* cur = q.front();
            q.pop();
            if (cur->left) {
                q.push(cur->left);
                if (!cur->left->right && !cur->left->left)
                    sum += cur->left->val;
            }
            if (cur->right) {
                q.push(cur->right);
            }
        }
        return sum;
    }
};
