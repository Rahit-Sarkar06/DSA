/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* c = head;
        ListNode* p;
        vector<int> m;
        while (c->next != NULL) {
            p = c->next;
            while (p != NULL && c->val >= p->val) {
                p = p->next;
            }
            if (p == NULL)
                m.push_back(0);
            else
                m.push_back(p->val);

            c = c->next;
        }
        m.push_back(0);
        return m;
    }
};