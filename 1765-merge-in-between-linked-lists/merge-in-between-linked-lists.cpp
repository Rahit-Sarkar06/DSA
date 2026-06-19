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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *c, *p;
        c = list1;
        int t = 1;
        while (t != a) {
            c = c->next;
            t++;
        }
        p = c->next;
        c->next = list2;
        while (t != b) {
            p = p->next;
            t++;
        }
        while (c->next != NULL) {
            c = c->next;
        }
        c->next = p->next;
        return list1;
    }
};