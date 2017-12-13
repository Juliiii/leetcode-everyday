/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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
    TreeNode* sortedListToBST(ListNode* head) {
        return helper(head);
    }
    
    TreeNode* helper(ListNode* cur) {
        if (!cur) return NULL;
        if (!cur->next) return new TreeNode(cur->val);
        int count = 0;
        ListNode* temp = cur;
        while(temp) {
            temp = temp->next;
            count++;
        }
        temp = cur;
        int mid = count / 2;
        count = 1;
        while(mid !=count) {
            temp = temp->next;
            count++;
        }
        TreeNode* node;
        node = new TreeNode(temp->next->val);
        ListNode* next = temp->next;
        temp->next = NULL;
        node->left = helper(cur);
        node->right = helper(next->next);
        return node;
    }
};
