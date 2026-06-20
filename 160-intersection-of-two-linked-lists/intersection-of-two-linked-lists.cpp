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
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode *c, *p;
        c = headA;
        p = headB;
        int cnt1 = 0;
        int cnt2 = 0;
        while (c != NULL) {
            cnt1++;
            c = c->next;
        }
        while (p != NULL) {
            cnt2++;
            p = p->next;
        }
        p = headB;
        c = headA;
        if (cnt1 < cnt2) {
            int k = 0;
            while (k != (cnt2 - cnt1)) {
                k++;
                p = p->next;
            }
        } else {
            int t = 0;
            while (t != (cnt1 - cnt2)) {
                t++;
                c = c->next;
            }
        }
        while (c != p) {
            c = c->next;
            p = p->next;
        }
        return c;
    }
};