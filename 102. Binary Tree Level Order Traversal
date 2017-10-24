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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vector<vector<int>> res;
        if (!root) return res;
        vector<int> cv;
        while(!q.empty()) {
            TreeNode* cur = q.front();
            q.pop();
            if (cur) {
                cv.push_back(cur->val);
                if (cur->left) q.push(cur->left);
                if (cur->right) q.push(cur->right);   
            } else {
                vector<int> temp;
                for (auto v : cv) temp.push_back(v);
                res.push_back(temp);
                cv.clear();
                if(!q.empty()) q.push(NULL); 
            }
        }
        // reverse(res.begin(), res.end());
        return res;        
    }
};
