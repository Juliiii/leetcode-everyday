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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* head = NULL, *temp, *cur;
        int carry = 0;
        while(l1 && l2) {
            int sum = l1->val + l2->val + carry;
            carry = sum / 10;
            sum = sum % 10;
            cur = new ListNode(sum);
            if (!head) {
                head = cur;
                temp = head;
            } else {
                temp->next = cur;
                temp = temp->next;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        
        while(l1) {
            int sum = l1->val + carry;
            carry = sum / 10;
            sum = sum % 10;
            cur = new ListNode(sum);
            temp->next = cur;
            temp = temp->next;
            l1 = l1->next;
        }
        
        while(l2) {
            int sum = l2->val + carry;
            carry = sum / 10;
            sum = sum % 10;
            cur = new ListNode(sum);
            temp->next = cur;
            temp = temp->next;
            l2 = l2->next;
        }
        
        if (carry) {
            cur = new ListNode(carry);
            temp->next = cur;
            temp = temp->next;
        }
        cur->next = NULL;
        return head;
    }
};
