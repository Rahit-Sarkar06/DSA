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
    ListNode* removeNodes(ListNode* head) {
        ListNode* demo = new ListNode(0);
        ListNode *c, *prev, *t, *p;
        t = reverseList(head);
        int max = -1;
        demo->next = t;
        prev = demo;
        c = t;
        while (c != NULL) {
            if (c->val >= max) {
                max = c->val;
                prev = c;
                c = c->next;
            } else {

                prev->next = c->next;
                c = prev->next;
            }
        }
        p = reverseList(demo->next);

        return p;
    }
};