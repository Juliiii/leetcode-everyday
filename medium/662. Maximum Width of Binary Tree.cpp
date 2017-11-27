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
    int widthOfBinaryTree(TreeNode* root) {
        if (!root) return 0;
        queue<pair<TreeNode*, int>> q;
        q.push(make_pair(root, 0));
        int max = INT_MIN;
        while(!q.empty()) {
            int size = q.size();
            int start = 0;
            int end;
            for (int i = 0; i < size; i++) {
                auto cur = q.front();
                q.pop();
                if (i == 0) {
                    start = cur.second;
                }
                end = cur.second;
                if (cur.first->left) {
                    q.push(make_pair(cur.first->left, cur.second * 2));
                }
                if (cur.first->right) {
                    q.push(make_pair(cur.first->right, cur.second * 2 + 1));
                }
            }
            max = max > (end - start + 1) ? max : end - start + 1;
        }
        return max;
    }
};
