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
    vector<ListNode*> splitListToParts(ListNode* root, int k) {
        vector<ListNode*> res;
        if (!root) {
            while(k) {
                k--;
                res.push_back(NULL);
            }
            return res;
        }
        ListNode* temp = root;
        int len = 0;
        while(temp) {
            len++;
            temp = temp->next;
        }
        int part_count = len / k;
        int left = len % k;
        
        temp = root;
        for (int i = 0; i < k; i++) {
            int count = part_count;
            if (left) {
                count = part_count + 1;
                left--;
            }
            ListNode* start = temp, *pre;
            for (int j = 0; j < count; j++) {
                pre = temp;
                temp = temp->next;
            }
            pre->next = NULL;
            res.push_back(start);
        }
        return res;
    }
};
