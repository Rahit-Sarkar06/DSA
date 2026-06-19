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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;

        ListNode* prev = dummy;
        ListNode* c = head;
        while (c != NULL) {
            if (c->next != NULL && c->val == c->next->val) {

                while (c->next != NULL && c->val == c->next->val) {
                    c = c->next;
                }
                prev->next = c->next;
                c = prev->next;
            } else {
                prev = c;
                c = c->next;
            }
        }
        return dummy->next;
    }
};