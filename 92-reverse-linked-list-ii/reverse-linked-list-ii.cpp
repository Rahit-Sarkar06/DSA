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
    ListNode* reverseList(ListNode* head) {
        struct ListNode* prev = NULL;
        struct ListNode* curr = head;
        struct ListNode* next = NULL;
        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* demo = new ListNode(0);
        demo->next = head;
        ListNode *c, *m, *t, *prev, *p;
        c = head;
        prev = demo;
        for (int i = 1; i < left; i++) {
            prev = c;
            c = c->next;
        }

        if (c == NULL)
            return head;

        prev->next = NULL;

        m = c;
        for (int i = left; i < right; i++) {
            c = c->next;
        }

        p = c->next;

        c->next = NULL;
        t = reverseList(m);
        prev->next = t;
        m->next = p;
        return demo->next;
    }
};