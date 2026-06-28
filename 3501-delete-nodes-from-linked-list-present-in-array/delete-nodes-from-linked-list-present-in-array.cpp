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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode* demo = new ListNode(0);
        unordered_set<int> m;
        for (int x : nums)
            m.insert(x);
        demo->next = head;
        ListNode* c = demo;
        int i = 0;
        while (i < nums.size() && head != NULL) {
            if (m.find(head->val) != m.end()) {
                c->next = head->next;

            } else {
                c = head;
            }
            head = head->next;
        }
        return demo->next;
    }
};