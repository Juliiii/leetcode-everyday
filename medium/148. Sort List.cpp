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
    ListNode* sortList(ListNode* head) {
        if (!head) return head;
        if (!head->next) return head;
        return parti(head);
    }
    
    ListNode* parti(ListNode* cur) {
        if (!cur) return NULL;
        if (!cur->next) return cur;
        int len = 0;
        ListNode* temp = cur;
        while(temp) {
            temp = temp->next;
            len++;
        }
        
        int mid = len / 2;
        int count = 1;
        temp = cur;
        while(count < mid) {
            temp = temp->next;
            count++;
        }
        
        ListNode* next = temp->next;
        temp->next = NULL;
        
        ListNode* one = parti(cur);
        temp = NULL;
        next = parti(next);
        
        while(one || next) {
            if (one && next) {
                
                if (one->val == next->val) {
                    if (!temp) {
                        temp = one;
                        cur = temp;
                    } else {
                        temp->next = one;
                    }
                    ListNode* tmp = one->next;
                    one->next = next;
                    one = tmp;
                    temp = next;
                    next = next->next;
                } else if (one->val > next->val) {
                    if (!temp) {
                        temp = next;
                        cur = temp;
                    } else {
                        temp->next = next;
                        temp = next;
                    }
                    next = next->next;
                } else {
                    if (!temp) {
                        temp = one;
                        cur = temp;
                    } else {
                        temp->next = one;
                        temp = one;
                    }
                    one = one->next;                    
                }
            } else if(one) {
                if (!temp) {
                    cur = one;
                } else {
                    temp->next = one;
                }
                break;
            } else if(next) {
                if (!temp) {
                    cur = next;
                } else {
                    temp->next = next;
                }
                break;                
            } else {
                cur = NULL;
            }
        }
        
        return cur;
    }
};
