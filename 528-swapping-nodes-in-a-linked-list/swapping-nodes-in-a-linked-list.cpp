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
    ListNode* swapNodes(ListNode* head, int k) {
        int cnt = 1;
        ListNode* c = head;
        while (c != NULL && cnt < k) {
            c = c->next;
            cnt++;
        }
        ListNode* m;
        if (c != NULL)
            m = c;

        ListNode* t = head;
        while (c != NULL && c->next != NULL && t->next != NULL) {
            c = c->next;
            t = t->next;
        }
        swap(m->val, t->val);
        return head;
    }
};