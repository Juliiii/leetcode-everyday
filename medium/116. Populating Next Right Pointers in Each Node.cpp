class Solution {
public:
    void connect(TreeLinkNode *root) {
        if (!root) return;
        TreeLinkNode* start = root, *temp;
        while(start) {
            temp = start;
            start = start->left;
            while(temp) {
                if (temp->left && temp->right) {
                    temp->left->next = temp->right;
                    if (temp->next) {
                        temp->right->next = temp->next->left;
                    }
                }
                temp = temp->next;
            }
        }
    }
};
