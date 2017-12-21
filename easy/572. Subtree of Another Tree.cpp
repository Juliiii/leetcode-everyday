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
    bool isSubtree(TreeNode* s, TreeNode* t) {
        bool flag = false;
        helper(s, t, flag);
        return flag;
    }
    
    void helper(TreeNode* s, TreeNode* t, bool& flag) {
        if (!s || flag) return;
        if (s->val == t->val) {
            bool flag_inner = true;
            helper_inner(s, t, flag_inner);
            if (flag_inner) {
                flag = flag_inner;
                return;
            }
        }
        
        helper(s->left, t, flag);
        helper(s->right, t, flag);
    }
    
    void helper_inner(TreeNode* s, TreeNode* t, bool& flag) {
        if (s && t) {
            if (s->val == t->val) {
                helper_inner(s->left, t->left, flag);
                helper_inner(s->right, t->right, flag);
            } else {
                flag = false;
                return;
            }
        } else if ((s && !t) || (!s && t)) {
            flag = false;
            return;
        }
    }
};
