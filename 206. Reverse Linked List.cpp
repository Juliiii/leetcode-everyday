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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head, *last = NULL, *next;
        while(temp) {
            next = temp->next;
            temp->next = last;
            last = temp;
            temp = next;
        }
        return last;
    }
};
