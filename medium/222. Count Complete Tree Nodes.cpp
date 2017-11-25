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
    int countNodes(TreeNode* root) {
        if (!root) return 0;
        int lH = 0, RH = 0;
        TreeNode* left = root->left;
        TreeNode* right = root->right;
        while(left) {
            left = left->left;
            lH++;
        }
        while(right) {
            right = right->right;
            RH++;
        }
        
        if (RH ==lH) return pow(2, lH + 1) - 1;
        else return countNodes(root->left) + countNodes(root->right) + 1;
    }
};
