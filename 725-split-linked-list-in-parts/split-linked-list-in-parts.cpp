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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode *c, *Next;
        c = head;
        int cnt = 0;
        vector<ListNode*> t;
        while (c != nullptr) {
            cnt++;
            c = c->next;
        }
        if (cnt < k) {
            while (head != nullptr) {
                Next = head->next;
                head->next = nullptr;
                t.push_back(head);
                head = Next;
            }
            while (cnt != k) {
                t.push_back(nullptr);
                cnt++;
            }
            return t;
        }
        int p = cnt;
        int extra = cnt % k;
        int n;
        cnt = 1;
        c = head;
        ListNode* prev = head;
        while (c != NULL) {
            if (extra > 0) {
                n = (p / k) + 1;
            } else {
                n = p / k;
            }
            if (cnt == n) {
                Next = c->next;
                c->next = nullptr;
                t.push_back(prev);
                prev = Next;
                c = Next;
                extra--;
                cnt = 1;

            } else {
                cnt++;
                c = c->next;
            }
        }

        return t;
    }
};