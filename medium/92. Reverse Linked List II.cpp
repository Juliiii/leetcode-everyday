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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if (m <= 0 || n <= m) return head;
        ListNode* fa = new ListNode(-1);
        ListNode *next, *start, *cur, *rever_head, *end;
        fa->next = head;
        cur = fa;
        int count = 0;
        while(cur->next) {
            count++;
            if (count == m) {
                start = cur;
            }
            if (count == n) {
                end = cur->next;
                next = cur->next->next;
                end->next = NULL;
                break;
            }
            cur = cur->next;
        }
        rever_head = reverse(start->next, next);
        
        start->next = rever_head;
        
        return fa->next;
        
    }
    
    ListNode* reverse(ListNode* head, ListNode* pre) {
        ListNode *temp = head, *next;
        while(temp) {
            next = temp->next;
            temp->next = pre;
            pre = temp;
            temp = next;
        }
        return pre;
    }
};
