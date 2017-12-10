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
        if (!head) return NULL;
        if (!n) return head;
        
        int count = 0;
        ListNode* cur = head;
        while(cur) {
            count++;
            cur = cur->next;
        }
        
        if (n == count) {
            return head->next;
        }
        
        count = count - n - 1;
        cur = head;
        while(count) {
            cur = cur->next;
            count--;
        }
        cur->next = cur->next->next;
        return head;
    }
};
