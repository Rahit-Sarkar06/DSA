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
    ListNode* partition(ListNode* head, int x) {
        if (head == NULL)
            return NULL;

        ListNode* c = head;
        ListNode *preS = NULL, *preB = NULL;
        ListNode *headd = NULL, *main = NULL;

        while (c != NULL && c->val < x) {
            preS = c;
            c = c->next;
        }

        if (c == NULL)
            return head;

        headd = c;
        preB = c;

        if (preS == NULL) {
            main = head;
            preS = NULL;
        } else {
            main = head;
        }

        ListNode* prev = c;
        c = c->next;

        while (c != NULL) {
            ListNode* next = c->next;

            if (c->val < x) {

                prev->next = next;

                if (preS == NULL) {
                    c->next = main;
                    main = c;
                } else {
                    c->next = preS->next;
                    preS->next = c;
                }

                preS = c;
            } else {
                prev = c;
                preB = c;
            }

            c = next;
        }

        return main;
    }
};