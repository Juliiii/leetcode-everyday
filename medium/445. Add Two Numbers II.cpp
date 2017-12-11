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
        if (!l1) return l2;
        if (!l2) return l1;
        l1 = reverse(l1);
        l2 = reverse(l2);
        int carry = 0;
        ListNode* head = NULL, *iter;
        while(l1 || l2) {
            int sum = 0;
            if (!l1) {
                sum = carry + l2->val;
                l2 = l2->next;
            } else if (!l2) {
                sum = carry + l1->val;
                l1 = l1->next;
            } else {
                sum = carry + l1->val + l2->val;
                l2 = l2->next;
                l1 = l1->next;
            }
            
            carry = sum / 10;
            sum = sum % 10;
            
            ListNode* cur = new ListNode(sum);
            if (!head) {
                head = cur;
                iter = head;
            } else {
                iter->next = cur;
                iter = cur;
            }
        }
        
        if (carry) {
            ListNode* cur = new ListNode(carry);
            iter->next = cur;
            
        }
        
        return reverse(head);
    }
    
    ListNode* reverse(ListNode* head) {
        ListNode* pre = NULL, *cur = head;
        while(cur) {
            ListNode* temp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = temp;
        }
        return pre;
    }
};
