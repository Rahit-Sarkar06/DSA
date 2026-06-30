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
    ListNode* sortList(ListNode* head) {
        vector<int> m;
        ListNode* p = head;
        ListNode* c = head;
        while (c != NULL) {
            m.push_back(c->val);
            c = c->next;
        }
        sort(m.begin(), m.end());
        int i = 0;
        while (p != NULL) {
            p->val = m[i++];
            p = p->next;
        }
        return head;
    }
};