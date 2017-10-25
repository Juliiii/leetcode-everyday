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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = length(headA);
        int lenB = length(headB);
        int count = 0;
        int step = lenA - lenB;
        if (step > 0) {
            while(count < step) {
                count++;
                headA = headA->next;
            }
        } else if (step < 0) {
            while(count < -step) {
                count++;
                headB = headB->next;
            }
        }
        
        while(headA && headB && headA != headB) {
            headA = headA->next;
            headB = headB->next;
        }
        return headA;
    }
    
    int length(ListNode* head) {
        int count = 0;
        while(head) {
            count++;
            head = head->next;
        }
        return count;
    }
};
