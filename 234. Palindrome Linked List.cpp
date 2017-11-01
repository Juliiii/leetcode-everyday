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
    bool isPalindrome(ListNode* head) {
        int len = 0, mid;
        ListNode* temp = head, *left = head, * right = head;
        while(temp) {
            temp = temp->next;
            len++;
        }
        mid = len / 2;
        
        while(mid) {
            right = right->next;
            mid--;
        }
        
        right = reverse(len % 2 ? right->next : right);
        
        mid = len / 2;
        
        while(mid) {
            if (right->val == left->val) {
                mid--;
                right = right->next;
                left = left->next;
                continue;
            } else break;
        }
        return mid == 0;
    }
    
    ListNode* reverse(ListNode* head) {
        ListNode* next = NULL, *pre = NULL, *temp = head;
        while(temp) {
            next = temp->next;
            temp->next = pre;
            pre = temp;
            temp = next;
        }
        return pre;
    }
};
