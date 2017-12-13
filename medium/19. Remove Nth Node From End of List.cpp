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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int len = 0, step;
        while(temp) {
            temp = temp->next;
            len++;
        }
        
        step = len - n - 1;
        
        temp = head;
        while(step > 0) {
            step--;
            temp = temp->next;
        }
        
        if (step == -1) {
            return head->next;
        } else {
        
            temp->next = temp->next->next;
        
            return head;
        }
    }
};
