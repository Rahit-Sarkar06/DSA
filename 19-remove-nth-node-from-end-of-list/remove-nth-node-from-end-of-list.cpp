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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *c, *p;
        c = head;
        p = head;
        int cnt = 0;
        while (cnt != n) {
            c = c->next;
            cnt++;
        }
        if (c == NULL)
            return head->next;
        while (c->next != NULL) {
            c = c->next;
            p = p->next;
        }
        p->next = p->next->next;
        return head;
    }
};