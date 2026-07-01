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
    ListNode* reverse(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;

        while (curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverse(l1);
        l2 = reverse(l2);
        ListNode* d1 = l1;
        ListNode* prev1;
        prev1 = NULL;

        ListNode* d2 = l2;
        int n = 0;
        while (d1 != NULL && d2 != NULL) {
            int m = d1->val + d2->val + n;

            d1->val = m % 10;
            n = m / 10;
            prev1 = d1;
            d1 = d1->next;

            d2 = d2->next;
        }
        if (d1 == NULL && d2 != NULL) {
            prev1->next = d2;
            d1 = d2;
        }

        while (d1 != NULL) {
            int sum = d1->val + n;

            d1->val = sum % 10;
            n = sum / 10;

            prev1 = d1;
            d1 = d1->next;
        }
        if (n != 0) {
            prev1->next = new ListNode(n);
        }
        return reverse(l1);
    }
};