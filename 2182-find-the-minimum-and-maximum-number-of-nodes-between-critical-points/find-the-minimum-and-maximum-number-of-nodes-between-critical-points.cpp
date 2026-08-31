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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if (head->next->next == NULL || head->next->next->next == NULL)
            return {-1, -1};
        ListNode *prev, *curr, *nextt;
        prev = head;
        curr = head->next;
        nextt = curr->next;
        while (nextt != NULL) {
            if ((prev->val > curr->val && nextt->val > curr->val) ||
                (prev->val < curr->val && nextt->val < curr->val)) {
                break;
            }
            prev = curr;
            curr = nextt;
            nextt = nextt->next;
        }
        if (nextt == NULL || nextt->next == NULL) {
            return {-1, -1};
        }
        int tim = 1;
        int cnt = 0;
        int mini = INT_MAX;
        prev = curr;
        curr = nextt;
        nextt = nextt->next;
        while (nextt != NULL) {
            if ((prev->val > curr->val && nextt->val > curr->val) ||
                (prev->val < curr->val && nextt->val < curr->val)) {
                mini = min(mini, tim);
                cnt += tim;
                tim = 0;
            }
            tim++;
            prev = curr;
            curr = nextt;
            nextt = nextt->next;
        }
        if (cnt == 0)
            return {-1, -1};
        return {mini, cnt};
    }
};