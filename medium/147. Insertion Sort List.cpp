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
    ListNode* insertionSortList(ListNode* head) {
        if (!head) return NULL;
        ListNode* mhead = new ListNode(head->val), *it = head->next;
        while(it) {
            ListNode* cur = new ListNode(it->val);
            ListNode* i = mhead;
            ListNode* pre = i;
            while(i && i->val < cur->val) {
                pre = i;
                i = i->next;
            }
            if (i == NULL) {
                pre->next = cur;
            }
            else if (i == mhead) {
                mhead = cur;
                mhead->next = i;
            } else {
                pre->next = cur;
                cur->next = i;
            }
            it = it->next;
        }
        return mhead;
    }
};
