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
    ListNode* oddEvenList(ListNode* head) {
        if (!head) return NULL;
        if (!head->next) return head;
        ListNode* odd = NULL,*ol;
        ListNode* even = NULL, *el;
        ListNode* temp = head;
        bool bo = false;
        
        while(temp) {
            if (!bo) {
                if (!odd) {
                    odd = temp;
                    ol = temp;
                } else {
                    ol->next = temp;
                    ol = temp;
                }
            } else {
                if (!even) {
                    even = temp;
                    el = temp;
                } else {
                    el->next = temp;
                    el = temp;
                }
            }
            bo = !bo;
            temp = temp->next;
        }
        ol->next = even;
        if (bo) el->next = NULL;
        return odd;
        
    }
};
