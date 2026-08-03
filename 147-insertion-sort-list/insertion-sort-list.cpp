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
    ListNode* insertionSortList(ListNode* head) {
        ListNode* c = head;
        vector<int> m;
        while (c != NULL) {
            m.push_back(c->val);
            c = c->next;
        }
        int n = m.size();
        for (int i = 1; i < n; i++) {
            int j = i - 1;
            int p = m[i];
            while (j >= 0 && p < m[j]) {
                m[j + 1] = m[j];
                j--;
            }
            m[j + 1] = p;
        }
        c = head;
        int t = 0;
        while (c != NULL) {
            c->val = m[t++];
            c = c->next;
        }
        return head;
    }
};