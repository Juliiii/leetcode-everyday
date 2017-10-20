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
        ListNode* iterator = head;
        ListNode* origin;
        while(iterator) {
            origin = iterator;
            while(iterator && iterator->next && iterator->val == iterator->next->val) iterator = iterator->next;
            origin->next = iterator->next;
            iterator = iterator->next;
        }
        return head;
    }
};
