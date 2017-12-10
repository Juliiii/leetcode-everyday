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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return NULL;
        ListNode* temp = head, *pre = head;
        while(temp) {
            ListNode* start = temp;
            while(temp->next && temp->next->val == temp->val) {
                temp = temp->next;
            }
            
            if (start != temp) {
                if (start != head)
                    pre->next = temp->next;
                else {
                    head = temp->next;
                    pre = head;
                }
            } else {
                pre = temp;
            }
            
            
            temp = temp->next;
        }
        return head;
    }
};
