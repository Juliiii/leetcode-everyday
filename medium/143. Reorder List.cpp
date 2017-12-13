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
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;
        int len = 0;
        ListNode* temp = head;
        while(temp) {
            temp = temp->next;
            len++;
        }
        
        int mid = len / 2;
        
        temp = head;
        while(mid != 1) {
            mid--;
            temp = temp->next;
        }
        
        ListNode* second = temp->next, *next, *pre = NULL;
        temp->next = NULL;
        
        second = reverse(second);
        temp = head;
        while(temp || second) {
            if (temp && second) {
                if (pre != NULL) pre->next = temp;
                next = temp->next;
                temp->next = second;
                pre = second;
                temp = next;
                second = second->next;
            } else {
                pre->next = second;
                second = second->next;
            }
        }
        
    }
    
    ListNode* reverse(ListNode* head) {
        ListNode* pre = NULL, *next , *cur = head;
        
        while(cur) {
            next = cur->next;
            cur->next = pre;
            pre = cur;
            cur = next;
        }
        return pre;
    }
};
