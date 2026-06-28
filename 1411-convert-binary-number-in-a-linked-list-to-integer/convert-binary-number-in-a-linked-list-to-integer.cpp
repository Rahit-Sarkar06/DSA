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
    int getDecimalValue(ListNode* head) {
        ListNode* c = head;
        vector<int> m;
        int cnt = 0;
        while (c != NULL) {
            m.push_back(c->val);
            cnt++;
            c = c->next;
        }
        int p = 0;
        int nums = 0;
        for (int i = m.size() - 1; i >= 0; i--) {
            nums += m[i] * pow(2, p);
            p++;
        }
        return nums;
    }
};