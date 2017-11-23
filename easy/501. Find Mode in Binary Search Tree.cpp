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
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        TreeNode* pre = NULL;
        int cnt = 0, max = INT_MIN, finalval;
        helper(ans, cnt, max, root, pre, finalval);
        if (cnt == 0) return ans;
        if (cnt == max) ans.push_back(finalval);
        else if (cnt > max) {
            ans.clear();
            ans.push_back(finalval);
        }
        return ans;
    }
    
    void helper(vector<int>& ans, int& cnt, int& max, TreeNode* cur, TreeNode*& pre, int& finalval) {
        if (!cur) return;
        helper(ans, cnt, max, cur->left, pre, finalval);
        if (pre == NULL) {
            pre = cur;
            finalval = cur->val;
            cnt++;
        } else {
            if (pre->val == cur->val) {
                pre = cur;
                cnt++;
            } else {
                if (cnt > max) {
                    max = cnt;
                    ans.clear();
                    ans.push_back(pre->val);
                } else if (cnt == max) {
                    ans.push_back(pre->val);
                }
                cnt = 1;
                pre = cur;
            }
            finalval = cur->val;
        }
        helper(ans, cnt, max, cur->right, pre, finalval);
    }
};
