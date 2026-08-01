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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *temp, *Next, *curr, *prev, *New, *c;
        temp = head;
        prev = head;
        int cnt = 1;
        while (temp != NULL && cnt != k) {
            cnt++;
            temp = temp->next;
        }
        if (temp == NULL)
            return head;

        curr = temp->next;
        temp->next = NULL;

        head = reverseList(head);
        c = curr;
        cnt = 1;
        while (c != NULL) {
            if (cnt == k) {
                New = c->next;
                c->next = NULL;

                c = reverseList(curr);
                prev->next = c;
                prev = curr;
                curr = New;
                c = curr;
                cnt = 1;
            } else {
                cnt++;
                c = c->next;
            }
        }
        prev->next = curr;
        return head;
    }
};