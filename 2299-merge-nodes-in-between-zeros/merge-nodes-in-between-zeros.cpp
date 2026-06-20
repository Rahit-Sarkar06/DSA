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
    ListNode* createNode(int value) {
        ListNode* newNode = new ListNode();
        newNode->val = value;
        newNode->next = NULL;

        return newNode;
    }
    ListNode* mergeNodes(ListNode* head) {
        ListNode *c, *p, *m;
        ListNode* prev;
        c = head->next;
        int n = 0;
        while (c->val != 0) {
            n += c->val;
            c = c->next;
        }
        prev = createNode(n);

        m = prev;
        c = c->next;
        while (c != NULL) {
            int t = 0;
            while (c->val != 0) {
                t += c->val;
                c = c->next;
            }
            p = createNode(t);
            prev->next = p;
            prev = p;
            c = c->next;
        }
        return m;
    }
};