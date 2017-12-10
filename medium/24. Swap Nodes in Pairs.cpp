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
    ListNode* swapPairs(ListNode* head) {
        if (!head) return NULL;
        if (!head->next) return head;
        
        ListNode* cur = head, *pre = head;
        while(cur && cur->next) {
            
            ListNode* next = cur->next->next;
            cur->next->next = cur;
            if (pre == head) {
                head = cur->next;
            } else {
                pre->next = cur->next;
            }
            cur->next = next;
            
            pre = cur;
            cur = next;
        }
        
        
        return head;
    }
};
