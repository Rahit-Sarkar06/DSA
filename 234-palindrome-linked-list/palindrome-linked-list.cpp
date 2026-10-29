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
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        return prev;
    }
    ListNode* findMiddle(ListNode* head) {

        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast != NULL && fast->next != NULL) {

            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* mid = findMiddle(head);
        ListNode* c = mid->next;
        mid->next = NULL;
        c = reverseList(c);
        mid->next = c;
        mid = mid->next;
        while (mid != NULL) {
            if (mid->val != head->val) {
                return false;
            }
            mid = mid->next;
            head = head->next;
        }
        return true;
    }
};