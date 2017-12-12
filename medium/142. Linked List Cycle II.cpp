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
    ListNode *detectCycle(ListNode *head) {
        if (!head) return NULL;
        ListNode* slow = head, *fast = head;
        while(true) {
            if (!fast) return NULL;
            if (!fast->next) return NULL;
            
            fast = fast->next->next;
            slow = slow->next;
            
            if (fast == slow) {
                fast = head;
                while(fast != slow) {
                    fast = fast->next;
                    slow = slow->next;
                }
                return fast;
            }
            
        }
    }
};
