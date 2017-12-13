/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (!head) return head;
        ListNode* temp = head, *pre = NULL;
        while(temp) {
            if (temp->val == val) {
                if (temp == head) {
                    head = temp->next;
                    pre = head;
                } else {
                    pre->next = temp->next;
                }
            } else {
                
                pre = temp;
            }
            temp = temp->next;
        }
        return head;
    }
};
