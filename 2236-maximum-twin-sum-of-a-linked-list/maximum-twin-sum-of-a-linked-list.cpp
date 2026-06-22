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
    int pairSum(ListNode* head) {
        vector<int> v;
        ListNode* c = head;
        while (c != NULL) {
            v.push_back(c->val);
            c = c->next;
        }
        int n = v.size();
        int cnt = 0;
        int i = 0;
        while (i < n / 2) {
            if (v[i] + v[n - i - 1] > cnt) {
                cnt = v[i] + v[n - i - 1];
            }
            i++;
        }
        return cnt;
    }
};