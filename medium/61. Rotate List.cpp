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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL || k == 0) return head;
        ListNode* tep = head, *temp = head ,*pre, *link, *pre1;
        int len = 0, count = 0; 
		while (tep!=NULL) {
			len++;
			pre = tep;
			tep = tep->next;
		}
		k %= len;
		if (k == 0) return head;
		while (count != len-k) {
			++count;
			pre1 = temp;
			temp = temp->next;
		}
		link = pre1->next;
		pre1->next = NULL;
		pre->next = head;
		return link;
    }
};
