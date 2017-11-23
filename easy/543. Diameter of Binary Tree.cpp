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
    int diameterOfBinaryTree(TreeNode* root) {
        if (root == NULL) return 0;
        int ans = INT_MIN;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            TreeNode* cur = q.front();
            q.pop();
            int left = 0, right = 0;
            getHeight(cur->left, 2, left);
            getHeight(cur->right, 2, right);
            left = left != 0 ? left - 1 : left;
            right = right != 0 ? right - 1 : right;
            ans = left + right > ans ? left + right : ans;
            
            if (cur->left) q.push(cur->left);
            if (cur->right) q.push(cur->right);
        }
        return ans;
    }
    
    void getHeight(TreeNode* root, int level, int& height) {
        if (root == NULL) return;
        if (root->left == NULL && root->right == NULL) {
            if (level > height) height = level;
            return;
        }
        getHeight(root->left, level + 1, height);
        getHeight(root->right, level + 1, height);
    }
};
