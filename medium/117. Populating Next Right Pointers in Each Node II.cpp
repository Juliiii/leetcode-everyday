/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        if (!root) return;
        
        TreeLinkNode* temp = root, *start = root;
        root->next = NULL;
        while(start) {
            TreeLinkNode* first = NULL, *pre = NULL;
            temp = start;
            while(temp) {
                if (temp->left) {
                    if (first == NULL) first = temp->left;
                }
                
                if (temp->right) {
                    if (first == NULL) first = temp->right;
                }
                
                
                if (temp->left) {
                    if (pre) {
                        pre->next = temp->left;
                        pre = temp->left;
                    } else {
                        pre = temp->left;
                    }
                }
                
                if (temp->right) {
                    if (pre) {
                        pre->next = temp->right;
                        pre = pre->next;
                    } else {
                        pre = temp->right;
                    }
                }
                if (pre) {
                    pre->next = NULL;
                }
                
                temp = temp->next;
            }
            
            start = first;
        }
    }
};
