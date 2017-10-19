
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head = NULL, *temp = NULL;
		ListNode* a, *b;
		while(l1 && l2) { 
			if (l1->val == l2->val) {
				a = new ListNode(l1->val);
                b = new ListNode(l1->val);
                a->next = b;
                
				if (!head) {
					head = a;
					temp = b;
				} else {
					temp->next = a;
					temp = b;
				}
				l1 = l1->next;
				l2 = l2->next;
			} else if (l1->val < l2->val) {
				a = new ListNode(l1->val); 
				if (!head) {
					head = a;
					temp = head;
				} else {
					temp->next = a;
					temp = a;
				}
				l1 = l1->next;
			} else {
				a = new ListNode(l2->val);
				if (head) {
					temp->next = a;
					temp = a;
				} else {
					head = a;
					temp = head;
				}
				l2 = l2->next;				
			}
		} 
		
		
		if(l1) {
            if (head)
                temp->next = l1;
            else
                head = l1;
		}
		
		if(l2) {
            if (head)
			    temp->next = l2;
            else
                head = l2;
		}
		
		return head;
    }
};

int main() {
	ListNode* head = new ListNode(-9);
	ListNode* head1 = new ListNode(-7);
	ListNode* head2 = new ListNode(-3);
	ListNode* head3 = new ListNode(-3);
	ListNode* head4 = new ListNode(-1);
	ListNode* head5 = new ListNode(2);
	ListNode* head6 = new ListNode(3);
	
	head->next = head1;
	head1->next = head2;
	head2->next = head3;
	head3->next = head4;
	head4->next = head5;
	head5->next = head6;
	
	ListNode* head7 = new ListNode(-7);
	ListNode* head8 = new ListNode(-7);
	ListNode* head9 = new ListNode(-6);
	ListNode* head10 = new ListNode(-6);
	ListNode* head11 = new ListNode(-5);
	ListNode* head12 = new ListNode(-3);
	ListNode* head13 = new ListNode(2);
	ListNode* head14 = new ListNode(4);

	
	head7->next = head8;
	head8->next = head9;
	head9->next = head10;
	head10->next = head11;
	head11->next = head12;
	head12->next = head13;
	head13->next = head14;


	Solution s;
	head = s.mergeTwoLists(head, head7);
	
	
	while(head) {
		cout<<head->val<<endl;
		head = head->next;
	}
	
	return 0;
}
