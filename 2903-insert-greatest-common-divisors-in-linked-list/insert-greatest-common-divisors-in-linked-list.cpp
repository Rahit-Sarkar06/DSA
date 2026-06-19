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
    ListNode* createNode(int n) {
        ListNode* t = new ListNode(n);
        return t;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* c;
        c = head;
        while (c->next != NULL) {

            int x = gcd(c->val, c->next->val);
            ListNode* t = createNode(x);
            t->next = c->next;
            c->next = t;
            c = c->next->next;
        }
        return head;
    }
};